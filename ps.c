#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char* argv[]){
  if (argc == 1) {
	  cps(0);
	  exit();
  } else if (argc == 2) {
	  if (!strcmp(argv[1], "s") || !strcmp(argv[1], "S")) {
		  cps(1);
		  exit();
	  } else {
		  printf(2, "Usage: ps [s] \n");
		  exit();
	  }
  } else {
	  printf(2, "Usage: ps [s] \n");
	  exit();
  }

  cps(0);
  exit();
}
