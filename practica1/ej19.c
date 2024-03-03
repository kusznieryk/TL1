#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generarSuma();
int randToN(int n);
int main(int argc, char *argv[])
{
  srand(time(0));
  int corr=0;
  for (int i =0; i<4; i++) {
    corr+= generarSuma();
  }
  switch (corr) {
    case 0:
      printf("E\n");
      break;
    case 1:
      printf("D\n");
      break;
    case 2:
      printf("C\n");
      break;
    case 3:
      printf("B\n");
      break;
    case 4:
      printf("A\n");
      break;
    default:
      break;
  }

  return 0;
}

int generarSuma(){
  int a= randToN(100);
  int b= randToN(100);
  int result;
  printf("%d + %d =", a,b);
  scanf("%d", &result);
  return result ==(a+b);
}
int randToN(int n){
  return rand() % (n+1);
}
