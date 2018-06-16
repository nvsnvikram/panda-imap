AUTOMAKE_OPTIONS = subdir-objects
noinst_PROGRAMS = mtest
mtest_SOURCES = mtest.c ../src/mail.c ../src/misc.c ../src/rfc822.c \
	../src/env_unix.c ../src/imap4r1.c ../src/fs_unix.c ../src/smtp.c \
	../src/nntp.c ../src/smanager.c ../src/unix.c ../src/mix.c \
	../src/mx.c ../src/dummy.c ../src/ssl_unix.c ../src/ftl_unix.c \
	../src/utf8aux.c ../src/utf8.c ../src/tcp_unix.c ../src/nl_unix.c \
	../src/tz_sv4.c ../src/ckp_pam.c ../src/sig_psx.c ../src/log_std.c \
	../src/gr_waitp.c ../src/flocklnx.c ../src/newsrc.c ../src/netmsg.c \
	../src/flstring.c ../src/pseudo.c ../src/bsdutime.c ../src/fdstring.c \
	../src/opendir.c \
	../src/bsdutime.h ../src/c-client.h ../src/config.h ../src/dummy.h \
	../src/env.h ../src/env_unix.h ../src/fdstring.h ../src/flstring.h \
	../src/fs.h ../src/ftl.h ../src/imap4r1.h ../src/mail.h ../src/misc.h \
	../src/netmsg.h ../src/newsrc.h ../src/nl.h ../src/nntp.h \
	../src/opendir.h ../src/os_slx.h ../src/pseudo.h ../src/rfc822.h \
	../src/smtp.h ../src/sslio.h ../src/tcp.h ../src/tcp_unix.h \
	../src/unix.h ../src/utf8aux.h ../src/utf8.h
mtest_CFLAGS = -DCHUNKSIZE=65536 \
	-DCREATEPROTO=unixproto \
	-DEMPTYPROTO=unixproto \
	$(AM_CFLAGS)
