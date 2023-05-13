#include <stdio.h>

void descobrirValores(int *v, int *me, int *ma, int tam)
{

    int i;
    *me = v[0];
    *ma = v[0];
    for (i = 1; i < tam; i++)
    {
	if (v[i] < *me)
	    *me = v[i];
	if (v[i] > *ma)
	    *ma = v[i];
    }
    printf("Na funcao: Menor: %d\tMaior: %d\n",*me ,*ma);
    printf("Na funcao -> Endereco de me: %p\tEndereco de ma: %p\n", &me, &ma); // o endereço
    printf("Na funcao -> Conteudo de me: %p\tConteudo de ma: %p\n", me, ma); // o conteúdo


}


int main() 
{
    int valor = 10;
    int menor,maior;
    
    int vet[] = {50,10,250,500,25};
    int *p;

    p = &valor;		// p recebe o endereço de valor

    printf("Valor %d\tEndereco de valor: %p\n", valor, &valor);
    printf("Endereco de p: %p\n", &p);
    printf("Conteudo de p: %p\n", p);
    printf("Conteudo apontado por p: %d\n", *p);

    descobrirValores(vet, &menor, &maior, 5);
    printf("Em main: Menor: %d\tMaior: %d\n",menor ,maior);
    printf("Endereco de menor: %p\tEndereco de maior: %p\n", &menor, &maior);


    return 0;
}
