#include <stdio.h>

int main()
{
    char x[10];

    int i = 0;
    while ((x[i] = getchar()) != '\n' && i < 8) // nesse while, quebro o loop no nono caracter, ou seja, reservo o décimo caracter.
    {
	i++;
    }

    x[++i] = '\0'; // aqui defino o décimo caracter como nulo.

    printf("%s",x);

    return 0;
}
