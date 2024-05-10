#include <stdio.h>
#include "funciones.h"

int main(void) {
  int meses;
  printf("Ingrese el número de meses para calcular el saldo contable: ");
  scanf("%d", &meses);

  calcular_saldo_contable(meses);

  return 0;
}


