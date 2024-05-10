#include <stdio.h>
#include "funciones.h"

float calcular_interes_mensual(float i) {
    float Im = i / 12;
    return Im;
}

float calcular_mes_1(float monto, float tasa_anual) {
    float Im = tasa_anual / 12;
    float Im1 = (monto * Im) / 100;
    float Itm1 = monto + Im1;
    return Itm1;
}

float calcular_mes_2(float monto, float tasa_anual) {
    float Im = tasa_anual / 12;
    float Im1 = (monto * Im) / 100;
    float Itm1 = monto + Im1;
    float Ic1 = monto + Itm1;
    float Im2 = (Ic1 * Im) / 100;
    float Itm2 = Ic1 + Im2;
    return Itm2;
}

float calcular_mes_3(float monto, float tasa_anual) {
    float Im = tasa_anual / 12;
    float Im1 = (monto * Im) / 100;
    float Itm1 = monto + Im1;
    float Ic1 = monto + Itm1;
    float Im2 = (Ic1 * Im) / 100;
    float Itm2 = Ic1 + Im2;
    float Ic2 = monto + Itm2;
    float Im3 = (Ic2 * Im) / 100;
    float Itm3 = Ic2 + Im3;
    return Itm3;
}

float calcular_mes_4(float monto, float tasa_anual) {
    float Im = tasa_anual / 12;
    float Im1 = (monto * Im) / 100;
    float Itm1 = monto + Im1;
    float Ic1 = monto + Itm1;
    float Im2 = (Ic1 * Im) / 100;
    float Itm2 = Ic1 + Im2;
    float Ic2 = monto + Itm2;
    float Im3 = (Ic2 * Im) / 100;
    float Itm3 = Ic2 + Im3;
    float Ic3 = monto + Itm3;
    float Im4 = (Ic3 * Im) / 100;
    float Itm4 = Ic3 + Im4;
    return Itm4;
}

float calcular_mes_5(float monto, float tasa_anual) {
    float Im = tasa_anual / 12;
    float Im1 = (monto * Im) / 100;
    float Itm1 = monto + Im1;
    float Ic1 = monto + Itm1;
    float Im2 = (Ic1 * Im) / 100;
    float Itm2 = Ic1 + Im2;
    float Ic2 = monto + Itm2;
    float Im3 = (Ic2 * Im) / 100;
    float Itm3 = Ic2 + Im3;
    float Ic3 = monto + Itm3;
    float Im4 = (Ic3 * Im) / 100;
    float Itm4 = Ic3 + Im4;
    float Ic4 = monto + Itm4;
    float Im5 = (Ic4 * Im) / 100;
    float Itm5 = Ic4 + Im5;
    return Itm5;
}

float calcular_mes_6(float monto, float tasa_anual) {
    float Im = tasa_anual / 12;
    float Im1 = (monto * Im) / 100;
    float Itm1 = monto + Im1;
    float Ic1 = monto + Itm1;
    float Im2 = (Ic1 * Im) / 100;
    float Itm2 = Ic1 + Im2;
    float Ic2 = monto + Itm2;
    float Im3 = (Ic2 * Im) / 100;
    float Itm3 = Ic2 + Im3;
    float Ic3 = monto + Itm3;
    float Im4 = (Ic3 * Im) / 100;
    float Itm4 = Ic3 + Im4;
    float Ic4 = monto + Itm4;
    float Im5 = (Ic4 * Im) / 100;
    float Itm5 = Ic4 + Im5;
    float Ic5 = monto + Itm5;
    float Im6 = (Ic5 * Im) / 100;
    float Itm6 = Ic5 + Im6;
    return Itm6;
}

float calcular_ahorro_seis_meses(float monto) {
    float AH = monto * 6;
    return AH;
}

float calcularInteresGanado(float Im1, float Im2, float Im3, float Im4, float Im5, float Im6) {
    return Im1 + Im2 + Im3 + Im4 + Im5 + Im6;
}

void mostrarInteresGanado(float interesGanado) {
    printf("\nInteres Ganado: %.2f\n", interesGanado);
}





void imprimir_tabla_resultados(float Itm1, float Itm2, float Itm3, float Itm4, float Itm5, float Itm6, float Im1, float Im2, float Im3, float Im4, float Im5, float Im6) {
    printf("Intereses Ganados:\n");
    printf("Interes Mes 1: %.2f\n", Im1);
    printf("Interes Mes 2: %.2f\n", Im2);
    printf("Interes Mes 3: %.2f\n", Im3);
    printf("Interes Mes 4: %.2f\n", Im4);
    printf("Interes Mes 5: %.2f\n", Im5);
    printf("Interes Mes 6: %.2f\n", Im6);

    printf("\nIntereses Mensuales Totales:\n");
    printf("Interes Mes 1: %.2f\n", Itm1);
    printf("Interes Mes 2: %.2f\n", Itm2);
    printf("Interes Mes 3: %.2f\n", Itm3);
    printf("Interes Mes 4: %.2f\n", Itm4);
    printf("Interes Mes 5: %.2f\n", Itm5);
    printf("Interes Mes 6: %.2f\n", Itm6);
}