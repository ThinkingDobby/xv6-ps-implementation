#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char* argv[]){
  if (argc == 1) {
	  cps(0);
	  exit(1);
  } else if (argc == 2) {
	  if (argv[1] == 's' || argv[1] == 'S') {
		  cps(0);
		  exit(1);
	  } else {
		  printf("Usage: ps [s] \n");
		  exit(1);
	  }
  } else {
	  printf("Usage: ps [s] \n");
	  exit(1);
  }

  cps(0);
  exit();
}
