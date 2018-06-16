sbin_PROGRAMS = imapd
imapd_SOURCES = imapd.c imap4r1.c mail.c netmsg.c env_unix.c rfc822.c smtp.c \
	nntp.c utf8.c newsrc.c tcp_unix.c fs_unix.c ftl_unix.c nl_unix.c \
	getspnam.c gr_waitp.c tz_sv4.c flocklnx.c bsdutime.c ssl_unix.c misc.c \
	flstring.c iso_8859.c widths.c tmap.c decomtab.c koi8_r.c koi8_u.c \
	tis_620.c viscii.c windows.c ibm.c gb_2312.c gb_12345.c jis_0208.c \
	jis_0212.c ksc_5601.c big5.c cns11643.c unix.c pseudo.c fdstring.c \
	dummy.c opendir.c mix.c mx.c smanager.c utf8aux.c ckp_pam.c sig_psx.c \
	log_std.c \
	bsdutime.h c-client.h config.h dummy.h env.h env_unix.h fdstring.h \
	flstring.h fs.h ftl.h imap4r1.h mail.h misc.h netmsg.h utf8.h \
	newsrc.h nl.h nntp.h opendir.h os_slx.h pseudo.h rfc822.h smtp.h \
	tcp.h tcp_unix.h unix.h utf8aux.h
EXTRA_imapd_SOURCES = write.c crx_nfs.c pmatch.c auths.c auth_md5.c auth_pla.c \
	ip4_unix.c sslstdio.c sslio.h
imapd_CFLAGS = -DANOFILE=\"/etc/anonymous.newsgroups\" \
	-DALERTFILE=\"/etc/imapd.alert\" \
	-DNNTPFILE=\"/etc/imapd.nntp\" \
	-DUSERALERTFILE=\".imapalert\" \
	-DCHUNKSIZE=65536 \
	-DCREATEPROTO=unixproto \
	-DEMPTYPROTO=unixproto \
	$(AM_CFLAGS)
noinst_PROGRAMS = mtest
mtest_SOURCES = mtest.c mail.c misc.c rfc822.c  env_unix.c imap4r1.c \
	fs_unix.c smtp.c nntp.c smanager.c unix.c mix.c mx.c dummy.c \
	ssl_unix.c ftl_unix.c utf8aux.c utf8.c tcp_unix.c nl_unix.c tz_sv4.c \
	ckp_pam.c sig_psx.c log_std.c gr_waitp.c flocklnx.c newsrc.c netmsg.c \
	flstring.c pseudo.c bsdutime.c fdstring.c opendir.c \
	bsdutime.h c-client.h config.h dummy.h env.h env_unix.h fdstring.h \
	flstring.h fs.h ftl.h imap4r1.h mail.h misc.h netmsg.h newsrc.h nl.h \
	nntp.h opendir.h os_slx.h pseudo.h rfc822.h smtp.h sslio.h tcp.h \
	tcp_unix.h unix.h utf8aux.h utf8.h
mtest_CFLAGS = -DCHUNKSIZE=65536 \
	-DCREATEPROTO=unixproto \
	-DEMPTYPROTO=unixproto \
	$(AM_CFLAGS)
