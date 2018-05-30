  mail_link (&mboxdriver);		/* link in the mbox driver */
  mail_link (&imapdriver);		/* link in the imap driver */
  mail_link (&nntpdriver);		/* link in the nntp driver */
  mail_link (&mixdriver);		/* link in the mix driver */
  mail_link (&mxdriver);		/* link in the mx driver */
  mail_link (&mbxdriver);		/* link in the mbx driver */
  mail_link (&mtxdriver);		/* link in the mtx driver */
  mail_link (&mhdriver);		/* link in the mh driver */
  mail_link (&mmdfdriver);		/* link in the mmdf driver */
  mail_link (&unixdriver);		/* link in the unix driver */
  mail_link (&newsdriver);		/* link in the news driver */
  mail_link (&dummydriver);		/* link in the dummy driver */
  auth_link (&auth_md5);		/* link in the md5 authenticator */
  auth_link (&auth_pla);		/* link in the pla authenticator */
  mail_versioncheck (CCLIENTVERSION);
  ssl_onceonlyinit ();
  mail_parameters (NIL,SET_DISABLEPLAINTEXT,(void *) 2);
