#ifndef _OPENDIR_H_
#define _OPENDIR_H_

DIR *opendir(char *name);
int closedir(DIR *d);
struct direct *readdir(DIR *d);

#endif /* #ifndef _OPENDIR_H_ */
