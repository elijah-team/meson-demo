#define z112forEach Z112forEach
#define z107listFiles Z107listFiles

#include <gc.h>
#include <stdio.h>
#include "MainLogic.h"
#include "stdlib/std.io/Directory.h"
#include "stdlib/std.collections/List_111.h"
#include "stdlib/std.collections/List_112.h"
#include <stdbool.h>

#define None NULL


Z105* ZC105() {
	Z105* R = GC_malloc(sizeof(Z105));
	R->_tag = 105;
	return R;
} // class MainLogic

bool __f1(/*char *c*/) {
	return false;
}

bool __neq__(void* p1, void* p2) {
	return p1 != p2;
}

void p1(char *p) {
	printf("%s", p);
}

 void/*Unit*/ Z105main(Z105* vsc, /*395*/Z111* vaargs) {
__label1:
	bool vsb;
	//Z105 vsr;
	{
		///*8889*//*552*/void (*vvfun)(void) /*879*/;//vvfun;

		Z__543 vvfun = __f1;
		Z112* /*879*/vvfolders;
		/*267*//*879*/vvfolders = /*827*/z107listFiles(ZC107(), /*853*//*879*/&vvfun);
		{
			//Z110*
			bool /*879*/vt1;
			/*267*//*879*/vt1 = /*684*/__neq__/*810*/(/*853*//*879*/vvfolders, /*748*/None);;
			vsb = /*879*/vt1 != true;
			if (!vsb) goto __label0;
			{
				{
					/*427-2*/z112forEach(vvfolders, /*673*//*!!!vvfun*/p1);
				}
__label0:
			}
		}
	}
}
