#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

int Menu(){
    int opcao=0;
    do {
        printf("Escolha uma opcao:\n");
        printf("1-JOGAR \n2-INSTRUCOES \n3-Salvar \n4-SAIR \n");
        scanf("%i", &opcao);
    } while ((opcao<1)||(opcao>4));
}
