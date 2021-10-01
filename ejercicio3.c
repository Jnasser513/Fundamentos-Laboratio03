#include <stdio.h>

void menuTopping();
void options();

int main(int argc, char const *argv[]) {
    int option;

    menuTopping();

    printf("Ingrese el topping que desea ponerle a su sorbete: ");
    scanf("%d", &option);
    options(option);
    /*if(option == 1){
        printf("El precio del helado sin topping es de $1.90");
    } else if(option == 2) {
        printf("El precio del helado con topping de oreo es de $2.90");
    } else if(option == 3) {
        printf("El precio del helado con topping de KitKat es de $3.40");
    } else if(option == 4) {
        printf("El precio del helado con topping de brownie es de $2.65");
    } else if(option == 5) {
        printf("El precio del helado con topping de lacacitos es de $2.85");
    } else {
        printf("El topping seleccionado no se encuentra en las opciones");
    }*/
    
    return 0;
}

void menuTopping() {
    printf("1. Sin topping\n");
    printf("2. Topping de oreo\n");
    printf("3. Topping de kit/kat\n");
    printf("4. Topping de brownie\n");
    printf("5. Topping de lacacitos\n");
}

void options(int opt) {
    switch (opt)
    {
    case 1:
        printf("El precio del helado sin topping es de $1.90");
        break;
    case 2:
        printf("El precio del helado con topping de oreo es de $2.90");
        break;
    case 3:
        printf("El precio del helado con topping de KitKat es de $3.40");
        break;
    case 4:
        printf("El precio del helado con topping de brownie es de $2.65");
        break;
    case 5:
        printf("El precio del helado con topping de lacacitos es de $2.85");
        break;
    default:
        printf("El topping seleccionado no se encuentra en las opciones");
        break;
    }
}