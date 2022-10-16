#include <stdio.h>

int main() {
    int numero;
    for (int i = 0; i < 10; ++i) {
        printf("Introduzca un numero entre 1 y 50: ");
        scanf("%d",&numero);
        fflush(stdin);
        while (numero<1 || numero>50){
            printf("Numero introducido invalido, introduzca un numero entre 1 y 50: ");
            scanf("%d",&numero);
            fflush(stdin);
        }
        if (numero>0 && numero<=10)
            printf("El numero pertenece a la primera decena\n");
        else if (numero>10 && numero<=20)
            printf("El numero pertenece a la segunda decena\n");
        else if (numero>20 && numero<=30)
            printf("El numero pertenece a la tercera decena\n");
        else if (numero>30 && numero<=40)
            printf("El numero pertenece a la cuarta decena\n");
        else if (numero>40 && numero<=50)
            printf("El numero pertenece a la quinta decena\n");
    }
    return 0;
}
