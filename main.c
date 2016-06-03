#include <stdio.h>
#include <stdlib.h>
#include "menu.h"


int main(){

    switch (Menu()){
        case 1: printf("Jogar"); break;
        case 2: printf("Instrucoes"); break;
        case 3: printf("Recordes"); break;
        case 4: printf("Sair"); break;
        default: printf("Opcao inválida!");
        }

    printf("\n");

    return 0;
}
