#include "listfolders3/Main.h"
#include "listfolders3/wpkotlin_c.demo.list_folders/MainLogic.h"

Z102* ZC102(Z113 *vsargs) {
	Z102* R = (Z102*)GC_malloc(sizeof(Z102));
	R->_tag = 102;
	R->vsargs = vsargs;
	return R;
} // class Main

void Z102main(Z102* vsc) {
	Z113* vt1 = (Z113*)vsc->vsargs;
	z105main(ZC105(), vt1);
	vsc->vmExitCode = ExitSuccess;
}
