#include "stdlib/std.collections/List_111.h"
#include <gc.h>

Z111* ZC111() {
	Z111* R = (Z111*)GC_malloc(sizeof(Z111));
	R->_tag = 111;
	return R;
} // class List

