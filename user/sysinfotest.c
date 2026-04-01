#include "kernel/sysinfo.h"
#include "user/user.h"

int
main(int argc, char *argv[]) {
  struct sysinfo info;
  sysinfo(&info);
  printf("Number of byte(s) of free memory: %ld\n", info.freemem);
  printf("Number of process(es) whose state is not UNUSED: %ld\n", info.nproc);
  printf("Number of opening file(s) in whole system: %ld\n", info.nproc);

  exit(0);
}