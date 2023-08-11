#include "MainLogic.h"
#include "stdlib/std.collections/List_111.h"

#define None NULL


Z105* ZC105() {
	Z105* R = GC_malloc(sizeof(Z105));
	R->_tag = 105;
	return R;
} // class MainLogic

 void/*Unit*/ Z105main(Z105* vsc, /*395*/Z111* vaargs) {
__label1:
	bool vsb;
	Z105 vsr;
	{
		/*8889*//*552*/void (*)() /*879*/vvfun;
		Z112* /*879*/vvfolders;
		/*267*//*879*/vvfolders = /*827*/z107listFiles(ZC107(), /*853*//*879*/vvfun);
		{
			Z110* /*879*/vt1;
			/*267*//*879*/vt1 = /*684*/__neq__/*810*/(/*853*//*879*/vvfolders, /*748*/None);;
			vsb = /*879*/vt1 != true;
			if (!vsb) goto __label0;
			{
				{
					/*427-2*/z112forEach(vvfolders, /*673*/vvfun);
				}
__label0:
			}
		}
	}
}
