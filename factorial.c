#include <stdio.h>
#include <stdlib.h>

int factorial(int y);

int main (int argc, char *argv[]){
  int x = atoi(argv[1]);
  int answer=factorial(x);
  printf("The factorial of %d is: %d\n",x, answer);
  return 0;
}

int factorial (int y){
  int jack=1;
  while (y>1) {
    jack= jack * y;
    y=y-1;
  }

  return jack;
}
