bin_PROGRAMS = imapd
imapd_SOURCES = imapd.c imap4r1.c mail.c netmsg.c env_unix.c rfc822.c smtp.c \
	nntp.c utf8.c newsrc.c tcp_unix.c fs_unix.c ftl_unix.c nl_unix.c \
	getspnam.c gr_waitp.c tz_sv4.c flocklnx.c bsdutime.c ssl_unix.c misc.c \
	flstring.c iso_8859.c  widths.c tmap.c decomtab.c koi8_r.c koi8_u.c \
	tis_620.c viscii.c windows.c ibm.c gb_2312.c gb_12345.c jis_0208.c \
	jis_0212.c ksc_5601.c big5.c cns11643.c unix.c pseudo.c fdstring.c \
	dummy.c opendir.c mix.c mx.c smanager.c utf8aux.c ckp_pam.c sig_psx.c \
	log_std.c
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
	-DLOCKPGM=\"\" \
	-DSSL_CERT_DIRECTORY=\"/etc/ssl/certs\" \
	-DSSL_KEY_DIRECTORY=\"/etc/ssl/private\" \
	-I/usr/include/openssl  \
	-DCHUNKSIZE=65536 \
	-DCREATEPROTO=unixproto \
	-DEMPTYPROTO=unixproto \
	$(AM_CFLAGS)
imapd_LDFLAGS = -lpam -lssl -lcrypto
