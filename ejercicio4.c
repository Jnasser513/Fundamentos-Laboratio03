#include <stdio.h>

int main(int argc, char const *argv[]) {
    int num1, num2;

    printf("Ingrese el primer año: ");
    scanf("%d", &num1);

    printf("\nIngrese el segundo año: ");
    scanf("%d", &num2);
    printf("\n");

    while(num1 != num2) {
        if(num1 % 4 == 0) {
            printf("\nEl año %d es bisiesto \n", num1);
        } else {
            printf("\nEl año %d no es bisiesto\n", num1);
        }
        num1--;
    }

    return 0;
}
