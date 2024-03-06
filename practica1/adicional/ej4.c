#include <stdio.h>
int sumarDigitos(int n);
void imprimirDigitos(int n);
int main(int argc, char *argv[])
{
  int num;
  do{
  printf("Ingrese un numero a descomponer: ");
  scanf("%d", &num);
  imprimirDigitos(num);
  }
  while (num!=0);
  return 0;
}
void imprimirDigitos(int n){
  printf("·");
  while(n>10){
    printf("%d » ", n);
    n=sumarDigitos(n);
  }
    printf("%d \n", n);
  
}
int sumarDigitos(int n){
  return n<10? n: n%10+sumarDigitos(n/10);
}
