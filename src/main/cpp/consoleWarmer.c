#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>


int main()
{
  time_t t;
  srand((unsigned) time(&t));

  int n = 60;
  int n2 = 20;
  int thisn = 0;
  while (1==1) {
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
  
  
    for (int i = 0 ;i < n; i++){
      printf(" ");
    }
    printf("█\n");

    usleep(500000);
  }
}
