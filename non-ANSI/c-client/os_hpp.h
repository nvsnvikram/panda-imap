/*
 * Program:	Operating-system dependent routines -- HP/UX version
 *
 * Author:	Mark Crispin
 *		Networks and Distributed Computing
 *		Computing & Communications
 *		University of Washington
 *		Administration Building, AG-44
 *		Seattle, WA  98195
 *		Internet: MRC@CAC.Washington.EDU
 *
 * Date:	11 May 1989
 * Last Edited:	21 February 1996
 *
 * Copyright 1995 by the University of Washington
 *
 *  Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose and without fee is hereby granted, provided
 * that the above copyright notice appears in all copies and that both the
 * above copyright notice and this permission notice appear in supporting
 * documentation, and that the name of the University of Washington not be
 * used in advertising or publicity pertaining to distribution of the software
 * without specific, written prior permission.  This software is made
 * available "as is", and
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

#include <string.h>

#include <sys/types.h>
#include <stdlib.h>
#include <sys/dir.h>
#include <fcntl.h>
#include <unistd.h>
#include <time.h>
#include <sys/uio.h>		/* needed for writev() prototypes */
#include <syslog.h>
#include <sys/file.h>


#define random lrand48


/* Many versions of SysV get this wrong */

#define setpgrp(a,b) Setpgrp(a,b)


/* For flock() emulation */

#define flock bsd_flock

#define LOCK_SH 1
#define LOCK_EX 2
#define LOCK_NB 4
#define LOCK_UN 8

#include "env_unix.h"
#include "fs.h"
#include "ftl.h"
#include "nl.h"
#include "tcp.h"

long gethostid ();
int bsd_flock ();
