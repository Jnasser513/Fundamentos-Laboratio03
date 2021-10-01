/* Programa que pide numeros y realiza la suma de los numeros pares hasta que se ingrese un numero negativo */

#include <stdio.h>
#include <stdbool.h>

int isPair(int num);

int main(int argc, char const *argv[]) {
    int number, accum = 0;

    do {
        printf("\nIngrese un numero: ");
        scanf("%d", &number);
        if(number % 2 == 0) {
            accum += number;
        }
    } while (number > 0);
    
    printf("%d", accum);

    return 0;
}
