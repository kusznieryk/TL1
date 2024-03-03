#include "stdio.h"
int damePar();
int main(int argc, char *argv[])
{
  int n;
  printf("Ingrese la cantidad de numeros pares que quiere: ");
  scanf("%d", &n);

  for (int i=0; i<n; i++) {
    printf("%d \n", damePar());
  }
  return 0;
}
int damePar(){
  static int n=-2;
  n+=2;
  return n;
}
