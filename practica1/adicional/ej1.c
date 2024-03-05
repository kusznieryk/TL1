#include <stdio.h>

void procesar(int total,int *min1, int*min2, double *porcentaje);
void cargarPais(int *codigo, int *cantAves);
int main(int argc, char *argv[])
{
  int min1, min2;
  double porcentaje;
  procesar(14, &min1,&min2, &porcentaje);

  printf("Los paises con menor cantidad de especies son: %d y %d \n", min1, min2);
  printf("El porcentaje de paises que tiene menos de 40 especies es: %1.2lf", porcentaje);
  return 0;
}
void cargarPais(int *codigo, int *cantAves){
  printf("Ingrese el codigo del Pais: ");
  scanf("%d", codigo);
  printf("Ingrese la cantidad de aves que posee: ");
  scanf("%d", cantAves);
  printf("------------------------------------------------------------");
}


void procesar(int total, int *min1, int*min2, double *porcentaje){
  int cant1=10000,cant2= 10000, contMenosCuarenta=0, pais, cant;
  for (int i=0; i<total; i++) {
    cargarPais(&pais, &cant);
    if(cant<cant1){
      cant2=cant1;
      *min2=*min1;
      cant1=cant;
      *min1=pais;
    } else if(cant < cant2){
      cant2=cant;
      *min2=pais;
    }
    if(cant<40) contMenosCuarenta++;
  }
  *porcentaje=(double)contMenosCuarenta/total;
}
