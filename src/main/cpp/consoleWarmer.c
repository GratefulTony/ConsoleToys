#include <time.h>
#include <stdlib.h>
#include <unistd.h>

srand(5);

int n = 60;
int n2 = 20;
int thisn = 0;
while (true) {
  int nmod = rand() % 2;
  if(nmod == 0) {
    nmod = -1;
  }
  n = n + nmod;
  if(n < 0) {
    n = 0;
  }
  if(n > 80){
    n = 80;
  }
  
  
  for (i = 0 ;n < 80; n++){
    printf(" ");
  }
  printf("█\n");

  usleep(500000);
}
