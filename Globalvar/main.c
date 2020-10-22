#include <stdio.h>
#include <stdlib.h>


//arreglo de caracteres global

char publicText[]={"Texto en una variable global"};


void check()
{
    printf("\n Imprimir desde la funcion: check");

    printf("variable global: \n");
    printf("%s", publicText);

    printf("Varibale local: \n");
    //printf("%s", privateText);
}


int main()
{
    printf("Variables globales\n");

    char privateText[] = {"Texto en una variable local. \n"};

    printf("variable global: \n");
    printf("%s", publicText);

    printf("Varibale local: \n");
    printf("%s", privateText);

    check();
    return 0;
}
