#include <stdio.h>
#include <stdlib.h>
#include "alocacao.h"

int main(){

    int x1 = 10; //Variavel utilizada para armazenar a chave que buscamos em busca2
    printf("Resultado de busca de %d na lista:%d", x1, busca2(x1)); //Exibimos o resultado da funcao busca2 passando o x2

    int x2 = 10; //Variavel utilizada para armazenar a chave que buscamos em busca2
    printf("Resultado de busca de %d na lista:%d", x2, busca2(x2)); //Exibimos o resultado da funcao busca2 passando o x2

    int x3 = 50; 
    printf("Resultado de busca de %d na lista:%d", x3, buscaOrd(x3));

    int x4 = 40; 
    printf("Resultado de busca de %d na lista:%d", x4, buscaBin(x4)); 

    return 0;
}