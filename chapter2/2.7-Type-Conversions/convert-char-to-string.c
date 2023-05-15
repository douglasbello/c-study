#include <stdio.h>

int atoi(char s[]);

int main()
{
    char s[] = "String";
    printf("%s", s);
    return 0;
}


/* convert s to string */
int atoi(char s[])
{
    int i, n;
    
    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
	n = 10 * n + (s[i] - '0');

    printf("retorno é: %d\n", n);
    return n;
}
