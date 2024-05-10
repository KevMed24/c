#include <stdio.h>


float calcIntMensual(float cap, float tasa) {
    return (cap * tasa) / 100;
}


float calcIntAcumulado(float cap, float tasa) {
    return cap + calcIntMensual(cap, tasa);
}


float calcAhorro(float cap, int meses) {
    return cap * meses;
}


float calcTotal(float ahorro, float intGanado) {
    return ahorro + intGanado;
}


int main() {
    float cap;
    int meses = 6;
    float tasa, intMes, intAcum;
    float capInt1, capInt2, capInt3, capInt4, capInt5, capInt6; 
    float totInt1, totInt2, totInt3, totInt4, totInt5, totInt6;


    printf("Ingrese el capital a invertir: ");
    scanf("%f", &cap);


    printf("Ingrese la tasa de interes a calcular: ");
    scanf("%f", &tasa);


    // Interes mensual
    intMes = tasa / 12;


    // Calculo de interes en el mes 1
    totInt1 = calcIntMensual(cap, intMes);
    capInt1 = calcIntAcumulado(cap, intMes);


    // Calculo de interes en el mes 2
    capInt2 = calcIntAcumulado(capInt1, intMes);
    totInt2 = calcIntMensual(capInt2, intMes);


    // Calculo de interes en el mes 3
    capInt3 = calcIntAcumulado(capInt2, intMes);
    totInt3 = calcIntMensual(capInt3, intMes);


    // Calculo de interes en el mes 4
    capInt4 = calcIntAcumulado(capInt3, intMes);
    totInt4 = calcIntMensual(capInt4, intMes);


    // Calculo de interes en el mes 5
    capInt5 = calcIntAcumulado(capInt4, intMes);
    totInt5 = calcIntMensual(capInt5, intMes);


    // Calculo de interes en el mes 6
    capInt6 = calcIntAcumulado(capInt5, intMes); 
    totInt6 = calcIntMensual(capInt6, intMes);  
    
    // Interes Ganado
    float intGanado;
    intGanado = totInt1 + totInt2 + totInt3 + totInt4 + totInt5 + totInt6;
    printf("\nInteres Ganado: %.2f\n", intGanado);


    // Ahorro en 6 meses
    float ahorroTotal;
    ahorroTotal = calcAhorro(cap, meses);
    printf("Ahorro en 6 meses: %.2f\n", ahorroTotal);


    // Total
    float total;
    total = calcTotal(ahorroTotal, intGanado);
    printf("TOTAL: %.2f\n", total);


    printf("Intereses Ganados:\n");
    printf("Interes Mes 1: %.2f\n", totInt1);
    printf("Interes Mes 2: %.2f\n", totInt2);
    printf("Interes Mes 3: %.2f\n", totInt3);
    printf("Interes Mes 4: %.2f\n", totInt4);
    printf("Interes Mes 5: %.2f\n", totInt5);
    printf("Interes Mes 6: %.2f\n", totInt6);


    printf("\nIntereses Mensuales Totales:\n");
    printf("Interes Mes 1: %.2f\n", capInt1);
    printf("Interes Mes 2: %.2f\n", capInt2);
    printf("Interes Mes 3: %.2f\n", capInt3);
    printf("Interes Mes 4: %.2f\n", capInt4);
    printf("Interes Mes 5: %.2f\n", capInt5);
    printf("Interes Mes 6: %.2f\n", capInt6);


    return 0;
}