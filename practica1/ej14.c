#include <stdio.h>
#include <math.h>
int inverse_p(int num, double *curr);
int inverse(int num);
int main(int argc, char *argv[])
{
  int x;
  printf("Ingrese el caracter a invertir: ");
  scanf("%d", &x);
  printf("El numero invertido es: %d", inverse(x));
  return 0;
}
int inverse_p( int num, double *curr){
  if(num <10){
    return num;
    ++*curr;
  }
  else{
    return inverse_p(num/10, curr)+ num%10*pow(10, ++*curr);
  }
}
int inverse(int num){
  double curr=0;
  return inverse_p(num, &curr);
}
