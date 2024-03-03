#include <stdio.h>
void nmaxmin(int n, float *max, float *min);
int main(int argc, char *argv[])
{
  float min,max;
  int n;
  printf("Ingrese la cantidad de numeros que desea leer: ");
  scanf("%d", &n);
  nmaxmin(n, &max, &min);
  printf("El maximo numero leido fue: %f y el minimo %f", max, min);
  return 0;
}
void nmaxmin(int n, float*max, float*min){
  if(n>0){
    float read;
    printf("Ingrese un numero: ");
    scanf("%f", &read);
    *max=read;
    *min=read;
    n--;
    while(n>0){
    printf("Ingrese un numero: ");
      scanf("%f", &read);
      if(read>*max) *max=read;
      else if(read<*min) *min= read;
      n--;
    }
  }
}
