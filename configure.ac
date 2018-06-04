AC_PREREQ([2.67])
AC_INIT([panda-imap], [421], [bugs@sequencedsystems.com])
AC_CONFIG_SRCDIR([src/imapd.c])
AM_INIT_AUTOMAKE([-Wall -Werror])
AM_PROG_CC_C_O
AM_PROG_AR

AC_CONFIG_HEADERS([src/config.h])
AC_CONFIG_FILES([Makefile src/Makefile])

# Customises settings.
m4_include([tls.m4])
m4_include([mail.m4])

# Checks for programs.
AC_PROG_LN_S
AC_PROG_RANLIB

# Checks for libraries.
AC_CHECK_LIB(ssl, SSL_CTX_new,, AC_MSG_FAILURE([cannot find libssl]))
AC_CHECK_LIB(crypto, BIO_f_base64,, AC_MSG_FAILURE([cannot find libcrypto]))

# Checks for typedefs, structures, and compiler characteristics.
AC_C_INLINE
AC_TYPE_PID_T
AC_TYPE_UID_T

# Checks for library functions.
AC_FUNC_FORK
AC_CHECK_FUNCS([memset strstr malloc])

AC_OUTPUT
