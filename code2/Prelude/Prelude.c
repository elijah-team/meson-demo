#include <gc.h>
#include "Prelude.h"

Z113* ZC113(int _argc, char **_argv) {
	Z113* R = (Z113*)GC_malloc(sizeof(Z113));
	R->_tag = 113;
	R->vmargument_array = _argv;
	R->vmargument_count_ = _argc;
	return R;
} // class Arguments

Z114 Z113arguments(Z113* vsc) {
	Z114 vsr;

	vsr = vsc->vmargument_count_;
	
	return vsr;
}

char* z113argument_string(Z113* vsc, int vaindex) {
	if (vaindex <= vsc->vmargument_count_ && vaindex >= 0) {
		return vsc->vmargument_array[vaindex];
		//return "."; //vscode: ugh: vsc->vmargument_array[vaindex];
	} else
		return NULL;
}
