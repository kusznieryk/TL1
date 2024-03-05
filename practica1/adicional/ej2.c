#include <math.h>
#include <stdio.h>

void imprimirRec(int num);
void imprimirBucle(int num);
int main(int argc, char *argv[])
{
  int numero;
  printf("Ingrese un valor para convertir a binario: ");
  scanf("%d", &numero);
  printf("La solucion iterativa imprime: ");
  imprimirBucle(numero);
  printf("\n La solucion recursiva imprime: ");
  imprimirRec(numero);
  return 0;
}

void imprimirBucle(int num){
  int potencia10=0;
  int numero=0;
  while (num >0) {
    numero+=num%2* pow(10, potencia10++);
    num/=2;
  }
  printf("%d", numero);
}
void imprimirRec(int num){
  if(num ==1) printf("%d", num);
  else{
    imprimirRec(num/2);
    printf("%d", num %2);
  }
}

