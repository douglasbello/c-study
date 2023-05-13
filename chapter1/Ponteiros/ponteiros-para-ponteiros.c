#include <stdio.h>

typedef struct no
{
    int valor;
    struct no *proximo;
}No;

No* inserir(No *inicio, int x)
{
    No *novo = mallao(sizeof(No));
    if (novo)
    {
        novo->valor = x;
        novo->proximo = inicio;
    }
    return novo;
}

int main() 
{
	return 0;
}