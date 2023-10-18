#include "stdlib/std.io/Directory.h"

#include <gc.h>
#include <stdbool.h>

#include <errno.h>
#include <stdio.h>

Z107 *ZC107(char *vadir) {
  Z107 *R = (Z107*)GC_malloc(sizeof(Z107));
  R->_tag = 107;
  R->____fn = vadir;
  return R;
} // class Directory

Z112 *z107listFiles(Z107 *vsc, Z__543 *filterFunction) {
  bool vsb;

  Z112 *vsr = ZC112();

  {
    struct dirent *entry;

    vsc->____dir = opendir(vsc->____fn);
    vsb = vsc->____dir != NULL;

    if (!vsb) {
      perror("opendir");
    } else {
      puts("listing:");

      do {      
        entry = readdir(vsc->____dir);
        vsb = entry != NULL;

        if (vsb) {
          if ((*filterFunction)(entry->d_name)) {
            z112add(vsr, g_strdup(entry->d_name));
          }
        }
      } while (vsb);

      closedir(vsc->____dir);
    }
  }

  return vsr;
}
