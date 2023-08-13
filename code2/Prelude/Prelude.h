#ifndef elinc_Prelude_Prelude_h
#define elinc_Prelude_Prelude_h 1

#include <stdbool.h>

typedef struct {
	int _tag;

	int vmargument_count_;    //	Z<Unknown_USER_Type /*SystemInteger*/> 
	char **vmargument_array;  //	Z<Unknown_USER_Type /*C.Array[C.str]*/>  //!!
} Z113;  // class Arguments

 typedef struct {
	int _tag;
} ooZ110;  // class Boolean

typedef int Z110;

 typedef struct {
	int _tag;

} ooZ114;  // class Integer64

typedef int Z114;

Z114 Z113arguments(Z113* vsc);
Z113* ZC113(int, char**);

#endif
