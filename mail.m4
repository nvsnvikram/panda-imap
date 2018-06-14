AC_ARG_WITH(mail-rel-path,
            AS_HELP_STRING([--with-mail-rel-path=PATH],
                           [set mailbox relative path (default: none)]),
            [with_mail_rel_path="$withval"],
            [with_mail_rel_path=nil])
AS_IF([test "x$with_mail_rel_path" != xnil],
      [AC_DEFINE_UNQUOTED([MAILBOX_RELATIVE_PATH],
                          ["$with_mail_rel_path"],
                          [Define to mailbox relative path])
      ],
      [AC_DEFINE([MAILBOX_RELATIVE_PATH],
                 [NIL],
                 [Define to mailbox relative path])
      ])
AC_ARG_WITH(mail-spool-path,
            AS_HELP_STRING([--with-mail-spool-path=PATH],
                           [set mail spool path (default: /var/spool/mail)]),
            [with_mail_spool_path="$withval"],
            [with_mail_spool_path=/var/spool/mail])
AC_DEFINE_UNQUOTED([MAIL_SPOOL_PATH],
                   ["$with_mail_spool_path"],
                   [Define to mail spool path])
