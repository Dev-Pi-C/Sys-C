#ifndef LINUX_H
#define LINUX_H

#include <sys/sysinfo.h>

typedef struct {

  unsigned long total;
  unsigned long freed;
  unsigned int proc;

} sys_struct;

#if defined(__x86_64__) || defined(__amd64__)
char* arch = "x86 (64 bit)";

#elif defined(__i386__) || defined(__x86__)
char* arch = "x86 (32 bit)";

#elif defined(__arm__)
char* arch = "ARM (32 bit)";

#elif defined(__aarch64__)
char* arch = "ARM (64 bit)";

#elif defined(__powerpc__)
char* arch = "PowerPC";

#elif defined(__mips__)
char* arch = "MIPS";

#endif

int sys_data(sys_struct* data);
unsigned int process(void);

#endif