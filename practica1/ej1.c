#include <stdio.h>
// Al compilar, un error es una razon por la cual el codigo no compila. Y un warning es una recomendacion de algo que no es seguro
// Se puede compilar con warnings pero no con errores/
/*
int main(){
  double pi= 3.14;
  //int y= 5 //<-le falta el ;
  printf("pi= %d\n", pi);//No tiene sentido pasar el double a imprimir como float, no lo va a imprimir bien
 //return 0; //<- no tenia el return 0
}
*/
int main(){
    int x=10;
    if (x=5) //el resultado de la asignacion entre parentesis W
      printf("x = 5\n");
    return 0;
}

