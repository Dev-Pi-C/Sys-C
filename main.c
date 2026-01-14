#include <stdio.h>
#include <string.h>

#ifdef __linux__
#include "linux.c"
char* os = "Linux";

#else
#error "Error: Unsupported OS please use Linux!"


#endif

int main(void) {

  sys_struct sys;
  sys_data(&sys);
  
  printf("Opperating System: %s\n", os);
  printf("CPU Architecture: %s\n", arch);
  printf("Processes running: %u\n", sys.proc);
  printf("Total Memory: %lu MB %lu GB\n", (sys.total / 1048576), (sys.total / 1073741824));
  printf("Free Memory %lu MB, %lu GB\n", (sys.freed / 1048576), (sys.freed / 1073741824));

  return 1;
}