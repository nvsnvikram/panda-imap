/*
 * Program:	UNIX environment routines
 *
 * Author:	Mark Crispin
 *		Networks and Distributed Computing
 *		Computing & Communications
 *		University of Washington
 *		Administration Building, AG-44
 *		Seattle, WA  98195
 *		Internet: MRC@CAC.Washington.EDU
 *
 * Date:	1 August 1988
 * Last Edited:	14 June 1999
 *
 * Copyright 1999 by the University of Washington
 *
 *  Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose and without fee is hereby granted, provided
 * that the above copyright notice appears in all copies and that both the
 * above copyright notice and this permission notice appear in supporting
 * documentation, and that the name of the University of Washington not be
 * used in advertising or publicity pertaining to distribution of the software
 * without specific, written prior permission.  This software is made available
 * "as is", and
 * THE UNIVERSITY OF WASHINGTON DISCLAIMS ALL WARRANTIES, EXPRESS OR IMPLIED,
 * WITH REGARD TO THIS SOFTWARE, INCLUDING WITHOUT LIMITATION ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE, AND IN
 * NO EVENT SHALL THE UNIVERSITY OF WASHINGTON BE LIABLE FOR ANY SPECIAL,
 * INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
 * LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, TORT
 * (INCLUDING NEGLIGENCE) OR STRICT LIABILITY, ARISING OUT OF OR IN CONNECTION
 * WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 *
 */

#define SUBSCRIPTIONFILE(t) sprintf (t,"%s/.mailboxlist",myhomedir ())
#define SUBSCRIPTIONTEMP(t) sprintf (t,"%s/.mlbxlsttmp",myhomedir ())

typedef struct dotlock_base {
  char lock[MAILTMPLEN];
  int pipei;
  int pipeo;
} DOTLOCK;


/* Function prototypes */

#include "env.h"

void rfc822_fixed_date (char *date);
long env_init (char *user,char *home);
char *myusername_full (unsigned long *flags);
#define MU_LOGGEDIN 0
#define MU_NOTLOGGEDIN 1
#define MU_ANONYMOUS 2
#define myusername() \
  myusername_full (NIL)
char *sysinbox ();
char *mailboxdir (char *dst,char *dir,char *name);
long dotlock_lock (char *file,DOTLOCK *base,int fd);
long dotlock_unlock (DOTLOCK *base);
int lockname (char *lock,char *fname,int op,long *pid);
int lockfd (int fd,char *lock,int op);
int lock_work (char *lock,void *sbuf,int op,long *pid);
long chk_notsymlink (char *name,void *sbuf);
void unlockfd (int fd,char *lock);
long set_mbx_protections (char *mailbox,char *path);
MAILSTREAM *user_flags (MAILSTREAM *stream);
char *default_user_flag (unsigned long i);
void dorc (char *file,long flag);
long path_create (MAILSTREAM *stream,char *mailbox);
void grim_pid_reap_status (int pid,int killreq,void *status);
#define grim_pid_reap(pid,killreq) \
  grim_pid_reap_status (pid,killreq,NIL)
long safe_write (int fd,char *buf,long nbytes);
void *arm_signal (int sig,void *action);
struct passwd *checkpw (struct passwd *pw,char *pass,int argc,char *argv[]);
long loginpw (struct passwd *pw,int argc,char *argv[]);
long pw_login (struct passwd *pw,char *user,char *home,int argc,char *argv[]);
void *mm_blocknotify (int reason,void *data);