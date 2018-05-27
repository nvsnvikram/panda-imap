bin_PROGRAMS = imapd
imapd_SOURCES = imapd.c imap4r1.c mail.c os_slx.c env_unix.c rfc822.c smtp.c \
	nntp.c utf8.c newsrc.c tcp_unix.c fs_unix.c ftl_unix.c nl_unix.c \
	getspnam.c gr_waitp.c tz_sv4.c flocklnx.c utime.c write.c crx_nfs.c \
	pmatch.c auths.c auth_ext.c auth_md5.c auth_pla.c auth_log.c \
	ip4_unix.c
imapd_CFLAGS = -DANOFILE=\"/etc/anonymous.newsgroups\" \
	-DALERTFILE=\"/etc/imapd.alert\" \
	-DNNTPFILE=\"/etc/imapd.nntp\" \
	-DUSERALERTFILE=\".imapalert\" \
	-DSHUTDOWNFILE=\"/etc/nologin\" \
	-DMD5ENABLE=\"/etc/cram-md5.pwd\" \
	-DANONYMOUSHOME=\"/var/spool/mail/anonymous\" \
	-DACTIVEFILE=\"/var/lib/news/active\" \
	-DNEWSSPOOL=\"/var/spool/news\" \
	-DMAILSPOOL=\"/var/spool/mail\" \
	-DLOCKPGM1=\"/usr/libexec/mlock\" \
	-DLOCKPGM2=\"/usr/sbin/mlock\" \
	-DLOCKPGM3=\"/etc/mlock\" \
	-DLOCKPGM=\"\" $(AM_CFLAGS)
