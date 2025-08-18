#ifndef ALOCACAO_H
#define ALOCACAO_H

typedef struct no{
    int chave;
    int valor;
}No;

extern No L[5];
extern No L1[6];
extern int n;
extern int n2;
extern int m;

int busca1(int x);
int busca2(int x);
int buscaOrd(int x);
int buscaBin(int x);
int insere(No no);

#endif