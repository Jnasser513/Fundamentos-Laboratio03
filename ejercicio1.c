/* Programa que calcula una cantidad de numeros de la serie de fibonacci */

#include <stdio.h>

void calcularSucesion(int num);

int main(int argc, char const *argv[]) {
    int numero;

    printf("Ingrese cuantos numeros de la sucesion quiere calcular: ");
    scanf("%d", &numero);
    calcularSucesion(numero);

    return 0;
}

void calcularSucesion(int num) {
    int siguiente = 0, a = 0, b = 1;
    printf("%d\n", a);
    for(int i = 1; i < num; i++) {
        siguiente = a + b;
        printf("%d\n", siguiente);
        a = b;
        b = siguiente;
    }
}