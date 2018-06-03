AC_ARG_WITH(ca-path,
            AS_HELP_STRING([--with-ca-path=PATH],
                           [set TLS CA certificate path (default: /etc/ssl/certs)]),
            [with_ca_path="$withval"],
            [with_ca_path=/etc/ssl/certs])
AC_DEFINE_UNQUOTED([TLS_CA_PATH],
                   ["$with_ca_path"],
                   [Define to CA certificate path])

AC_ARG_WITH(priv-key-path,
            AS_HELP_STRING([--with-priv-key-path=PATH],
                           [set TLS private key path (default: /etc/ssl/private)]),
                           [with_priv_key_path="$withval"],
                           [with_priv_key_path=/etc/ssl/private])
AC_DEFINE_UNQUOTED([TLS_PRIVATE_KEY_PATH],
                   ["$with_priv_key_path"],
                   [Define to private key path])
