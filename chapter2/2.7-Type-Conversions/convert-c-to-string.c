#include <stdio.h>

int lower(int c);

int main()
{
    return 0;
}

int lower(int c)
{
    if (c >= 'A' && c <= 'Z')
	return c + 'a' - 'A';
    else
	return c;
}
