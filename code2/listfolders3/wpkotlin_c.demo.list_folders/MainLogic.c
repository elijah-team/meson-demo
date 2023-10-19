#include <gc.h>
#include <stdbool.h>

#include <stdio.h>

#include "Prelude/Prelude.h"
#include "stdlib/std.io/Directory.h"
#include "stdlib/std.collections/List_111.h"
#include "stdlib/std.collections/List_112.h"

#include "listfolders3/wpkotlin_c.demo.list_folders/MainLogic.h"

Z105* ZC105() {
	Z105* R = (Z105*)GC_malloc(sizeof(Z105));
	R->_tag = 105;
	return R;
} // class MainLogic

bool __f1(char *c) {
	return true;
}

bool __neq__(void* p1, void* p2) {
	return p1 != p2;
}

void p1(char *p) {
	printf("%s\n", p);
}

void z105main(Z105* vsc, Z113* vaargs) {
	bool vsb;
__label1:
	{
		Z__543 vvfun = __f1;
		Z112* vvfolders = z107listFiles(ZC107(z113argument_string(vaargs, 1)), &vvfun);
		{
			Z110 vt1;
			vt1 = __neq__(vvfolders, None);
			vsb = vt1 == true;
			//if (!vsb) goto __label0;
			{
				{
					z112forEach(vvfolders, p1);
				}
__label0:
				;
			}
		}
	}
}
