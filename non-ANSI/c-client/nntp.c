/*
 * Program:	Network News Transfer Protocol (NNTP) routines
 *
 * Author:	Mark Crispin
 *		Networks and Distributed Computing
 *		Computing & Communications
 *		University of Washington
 *		Administration Building, AG-44
 *		Seattle, WA  98195
 *		Internet: MRC@CAC.Washington.EDU
 *
 * Date:	10 February 1992
 * Last Edited:	13 September 1992
 *
 * Copyright 1992 by the University of Washington.
 *
 *  Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose and without fee is hereby granted, provided
 * that the above copyright notices appear in all copies and that both the
 * above copyright notices and this permission notice appear in supporting
 * documentation, and that the name of the University of Washington not be
 * used in advertising or publicity pertaining to distribution of the software
 * without specific, written prior permission.  This software is made
 * available "as is", and
 * THE UNIVERSITY OF WASHINGTON DISCLAIMS ALL WARRANTIES, EXPRESS OR IMPLIED,
 * WITH REGARD TO THIS SOFTWARE, INCLUDING WITHOUT LIMITATION ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE, AND IN
 * NO EVENT SHALL THE UNIVERSITY OF WASHINGTON BE LIABLE FOR ANY SPECIAL,
 * INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING
 * FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, TORT
 * (INCLUDING NEGLIGENCE) OR STRICT LIABILITY, ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 *
 */


#include <ctype.h>
#include <stdio.h>
#include "mail.h"
#include "osdep.h"
#include "smtp.h"
#include "nntp.h"
#include "rfc822.h"
#include "misc.h"

/* Network News Transfer Protocol open connection
 * Accepts: service host list
 *	    initial debugging flag
 * Returns: T on success, NIL on failure
 */

SMTPSTREAM *nntp_open (hostlist,debug)
	char **hostlist;
	long debug;
{
  SMTPSTREAM *stream = NIL;
  void *tcpstream;
  char tmp[MAILTMPLEN];
  if (!(hostlist && *hostlist)) mm_log ("Missing NNTP service host",ERROR);
  else do {			/* try to open connection */
    if (tcpstream = tcp_open (*hostlist,NNTPTCPPORT)) {
      stream = (SMTPSTREAM *) fs_get (sizeof (SMTPSTREAM));
      stream->tcpstream = tcpstream;
      stream->debug = debug;
      stream->reply = NIL;
				/* get NNTP greeting */
      if (smtp_reply (stream) == NNTPGREET) return stream;
      smtp_close (stream);	/* otherwise punt stream */
    }
  } while (*++hostlist);	/* try next server */
  return NIL;
}

/* Network News Transfer Protocol deliver news
 * Accepts: stream
 *	    message envelope
 *	    message body
 * Returns: T on success, NIL on failure
 */

long nntp_mail (stream,env,body)
	SMTPSTREAM *stream;
	ENVELOPE *env;
	BODY *body;
{
  char tmp[8*MAILTMPLEN];
				/* negotiate post command */
  if (!(smtp_send (stream,"POST",NIL) == NNTPREADY)) return NIL;
				/* set up error in case failure */
  smtp_fake (stream,SMTPSOFTFATAL,"NNTP connection went away!");
				/* output data, return success status */
  return rfc822_output (tmp,env,body,smtp_soutr,stream->tcpstream) &&
    (smtp_send (stream,".",NIL) == NNTPOK);
}
