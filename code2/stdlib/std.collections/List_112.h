#ifndef elinc_list_112
#define elinc_list_112 1

#include <stdbool.h>


typedef struct {
	int _tag;

} Z112;  // class List

Z112* ZC112();

typedef bool (*Z__543)(void);

// /*267-1*/void* Z112forEach(Z112* vsc, /*543*/Z__543/*<tripleo.elijah.lang.impl.FuncTypeNameImpl@bd4dc25>*/* vaf);
 /*267-1*/void* Z112forEach(Z112* vsc, 
 ///*543*/Z__543/*<tripleo.elijah.lang.impl.FuncTypeNameImpl@bd4dc25>*/*
 
 void (*vaf)(char*)
 );
#endif
