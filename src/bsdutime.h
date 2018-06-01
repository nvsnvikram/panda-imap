#ifndef _BSDUTIME_H_
#define _BSDUTIME_H_

#include <sys/types.h>

int bsd_utime(char *file, time_t timep[2]);

#endif /* #ifndef _BSDUTIME_H_ */
