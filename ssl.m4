AC_ARG_WITH(ca-path,
            AS_HELP_STRING([--with-ca-path=PATH],
                           [set SSL CA certificate path (default: /etc/ssl/certs)]),
            [with_ca_path="$withval"],
            [with_ca_path=/etc/ssl/certs])
AC_DEFINE_UNQUOTED([SSL_CA_PATH],
                   ["$with_ca_path"],
                   [Define to CA certificate path])

AC_ARG_WITH(private-key-path,
            AS_HELP_STRING([--with-private-key-path=PATH],
                           [set SSL private key path (default: /etc/ssl/private)]),
                           [with_private_key_path="$withval"],
                           [with_private_key_path=/etc/ssl/private])
AC_DEFINE_UNQUOTED([SSL_PRIVATE_KEY_PATH],
                   ["$with_private_key_path"],
                   [Define to private key path])
