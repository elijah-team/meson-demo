#ifndef elinc_list_112
#define elinc_list_112 1

#include <stdbool.h>
#include <glib.h>

typedef struct {
	int _tag;
	GSList *head;
	GSList *tail;
} Z112;  // class List

Z112* ZC112();

typedef bool (*Z__543)(char*);

void z112forEach(Z112* vsc, void (*vaf)(char*));
void z112add(Z112* vsc, void* e);

#endif
