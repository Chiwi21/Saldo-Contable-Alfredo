#include <stdio.h>
#include "funciones.h"

float gastoslogistico(){
  float gastoslog;
  printf("Ingrese los gastos de logística: \n");
  scanf("%f", &gastoslog);
  return gastoslog;
}

float gastosmercadeo(){
  float gastosmer;
  printf("Ingrese los gastos de mercadeo: \n");
  scanf("%f", &gastosmer);
  return gastosmer;
}

float ingresoventas(){
  float ventas;
  printf("Ingrese las ventas: \n");
  scanf("%f", &ventas);
  return ventas;
}

float ingresoinversiones(){
  float inversiones;
  printf("Ingrese las inversiones: \n");
  scanf("%f", &inversiones);
  return inversiones;
}

void calcular_saldo_contable(int num_meses){
  float gastoslog, gastosmer, sueldo=3600, servibasi = 100, arriendo = 500, ventas, inversiones, saldocontable, saldomesant = 0, total, totalgastos, totalingresos;

  for (int i = 1; i <= num_meses; i++) {
    gastoslog = gastoslogistico();
    gastosmer = gastosmercadeo();

    totalgastos = servibasi + arriendo + sueldo + gastoslog + gastosmer;
    printf("Mes %d - Gastos\nArriendo: $%f\nSueldo: $%f\nGastos Logística: $%f\nGastos de Mercadeo: $%f\nTotal Gastos: $%f\n\n", i, arriendo, sueldo, gastoslog, gastosmer, totalgastos);

    saldomesant = saldocontable;

    ventas = ingresoventas();
    inversiones = ingresoinversiones();
    totalingresos = ventas + inversiones;

    printf("Mes %d - Ingresos\nVentas: $%f\nInversiones: $%f\nTotal Ingresos: $%f\n", i, ventas, inversiones, totalingresos);

    saldocontable = saldomesant + totalingresos - totalgastos;
    printf("Saldo contable: $%f\n\n", saldocontable);
  }
}