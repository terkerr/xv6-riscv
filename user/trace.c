#include "kernel/types.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  if (argc < 3) {
    printf("trace error");
    exit(1);
  }

  int tracemask = atoi(argv[1]);
  trace(tracemask);

  exec(argv[2], &argv[2]);
  
  exit(0);
}