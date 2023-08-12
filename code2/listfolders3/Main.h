#ifndef elinc_lf3_M
#define elinc_lf3_M 1


#include <stdbool.h>
#include <gc.h>
//#include "Prelude.h"

#include <stdlib.h>

#define ExitSuccess EXIT_SUCCESS

typedef struct {
	int _tag;

	int vmExitCode;

} Z102;  // class Main

void/*Unit*/ Z102main(Z102* vsc);
Z102* ZC102();

#endif
