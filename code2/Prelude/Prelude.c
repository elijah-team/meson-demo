#include <gc.h>
#include "Prelude.h"

Z113* ZC113() {
	Z113* R = GC_malloc(sizeof(Z113));
	R->_tag = 113;
	R->vmargument_array = 0;
	R->vmargument_count_ = 0;
	return R;
} // class Arguments

/*
 Z110* ZC110() {
	Z110* R = GC_malloc(sizeof(Z110));
	R->_tag = 110;
	return R;
} // class Boolean
*/
/*
 Z114* ZC114() {
	Z114* R = GC_malloc(sizeof(Z114));
	R->_tag = 114;
	return R;
} // class Integer64
*/
Z114 Z113arguments(Z113* vsc) {
//	bool vsb;
	Z114 vsr;
	{
		/*267*//*879*/vsr = /*124*/vsc->vmargument_count_;
	}
	
	return vsr;
}
