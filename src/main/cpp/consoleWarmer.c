#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>


int main()
{
  time_t t;
  srand((unsigned) time(&t));

  int n = 40;
  int n2 = 41;

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
    nmod = rand() % 2;

    if(nmod == 0) {
      nmod = -1;
    }
    n2 = n2 + nmod;
    if(n2 < 0) {
      n2 = 0;
    }
    if(n2 > 80){
      n2 = 80;
    }

    int nl = n;
    int nr = n2;
    if(n > n2){
      nl = n2;
      nr = n;
    }

    for (int i = 0 ;i < nl; i++){
      printf(" ");
    }
    if(n <= n2){
      printf("█");
    }
    else{
     printf("░");
    }

    for (int i = nl ;i < nr; i++){
      printf(" ");
    }
    if(n >= n2){
      printf("█\n");
    }
    else{
     printf("░\n");
    }

    usleep(500000);
  }
}
