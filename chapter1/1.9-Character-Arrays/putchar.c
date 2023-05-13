#include <stdio.h>

int main()
{
    int i = 0;
    char x;

    while ((x = getchar()) != '\n')
    {
	putchar(x);
    }

    printf("%c",x);
    return 0;
}

