#ifndef elinc_Prelude_Prelude_h
#define elinc_Prelude_Prelude_h 1

#include <stdbool.h>
#define None NULL

typedef struct {
	int _tag;

	int vmargument_count_;    //	Z<Unknown_USER_Type /*SystemInteger*/> 
	char **vmargument_array;  //	Z<Unknown_USER_Type /*C.Array[C.str]*/>  //!!
} Z113;  // class Arguments

typedef bool Z110;  // class Boolean
typedef int  Z114;  // class Integer64

Z114 Z113arguments(Z113* vsc);
Z113* ZC113(int, char**);
char* z113argument_string(Z113*, int vaindex);


#endif
