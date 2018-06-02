AC_ARG_WITH(ca-path,
            AS_HELP_STRING([--with-ca-path],
                           [set CA certificate path (default: /etc/ssl/certs)]),
            [with_ca_path="$withval"],
            [with_ca_path=/etc/ssl/certs])
AC_DEFINE_UNQUOTED([SSL_CA_PATH],
                   ["$with_ca_path"],
                   [Define to CA certificate path])
