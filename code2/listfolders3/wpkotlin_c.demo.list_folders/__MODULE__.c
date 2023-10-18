#include <gc.h>
#include "__MODULE__.h"

ZN109* ZNC109() {
	ZN109* R = (ZN109*)GC_malloc(sizeof(ZN109));
	
	zN__MODULE___instance = R;
	return R;
} // namespace `__MODULE__'
