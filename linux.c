#include "linux.h"

int sys_data(sys_struct* data) {

  struct sysinfo info;

  if (sysinfo(&info) != 0) return -1;

  data->total = info.totalram * info.mem_unit;
  data->freed = info.freeram * info.mem_unit;
  data->proc = info.procs;

  return 0;

}