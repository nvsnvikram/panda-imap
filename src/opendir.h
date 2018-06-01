#ifndef _OPENDIR_H_
#define _OPENDIR_H_

#include <dirent.h>
#include <sys/types.h>

#define DIR DIR_
#define direct dirent
typedef struct _dirdesc {
  int dd_fd;
  long dd_loc;
  long dd_size;
  char *dd_buf;
} DIR;

DIR *bsd_opendir(char *name);
int bsd_closedir(DIR *d);
struct direct *bsd_readdir(DIR *d);

#endif /* #ifndef _OPENDIR_H_ */
