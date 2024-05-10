#include <stdio.h>
#include "funciones.h"

int main() {

    float monto;
    float tasa_anual;
    float Im, Itm1, Itm2, Itm3, Itm4, Itm5, Itm6, Im1, Im2,  Im3, Im4,  Im5, Im6;
    float AH, total; 
    float monto, tasa_anual;
    
    printf("Ingrese el monto a invertir: ");
    scanf("%f", &monto);

    printf("Ingrese el interes a calcular: ");
    scanf("%f", &tasa_anual);


    Im = calcular_interes_mensual(tasa_anual);
    Itm1 = calcular_mes_1(monto, tasa_anual);
    Itm2 = calcular_mes_2(monto, tasa_anual);
    Itm3 = calcular_mes_3(monto, tasa_anual);
    Itm4 = calcular_mes_4(monto, tasa_anual);
    Itm5 = calcular_mes_5(monto, tasa_anual);
    Itm6 = calcular_mes_6(monto, tasa_anual);
    AH = calcular_ahorro_seis_meses(monto); 
    float interes_ganado = Itm1 + Itm2 + Itm3 + Itm4 + Itm5 + Itm6;
    imprimir_tabla_resultados(Itm1, Itm2, Itm3, Itm4, Itm5, Itm6, Im1, Im2,  Im3, Im4,  Im5, Im6);
    printf("\nAhorro total despues de seis meses: %.2f\n", AH);
   
    return 0;
}


