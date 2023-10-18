#ifndef elinc_dir
#define elinc_dir 1

#include <dirent.h>
#include <sys/types.h>

#include "stdlib/std.collections/List_112.h"

typedef struct {
	int _tag;
	char *____fn;
	DIR *____dir;
} Z107;  // class Directory

Z112* z107listFiles(Z107* vsc, Z__543* filterFunction);
Z107* ZC107(char* vadir);

#endif
