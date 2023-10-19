#include <gc.h>
#include <stdbool.h>

#include "stdlib/std.collections/List_112.h"

Z112 *ZC112() {
  Z112 *R = (Z112*)GC_malloc(sizeof(Z112));
  R->_tag = 112;
  R->head = NULL;//g_slist_alloc();
  R->tail = NULL;
  return R;
} // class List

void z112forEach(Z112 *vsc, void (*vaf)(char *)) {
  GSList *ptr = vsc->head;
  while (ptr != NULL) {
    (*vaf)((char*)ptr->data);
    ptr = ptr->next;
  }
}

void z112add(Z112* vsc, void *datum) {
  GSList *ptr = vsc->head;

  // there might be a better way to do this
  if (ptr == NULL) {
    ptr = g_slist_alloc();
    vsc->tail = ptr;
    vsc->head = ptr;
    ptr->data = datum;
  } else {
    GSList* ptr2 = g_slist_alloc();
    ptr2->data = datum;
    vsc->tail->next = ptr2;
    vsc->tail = ptr2;
  }
}
