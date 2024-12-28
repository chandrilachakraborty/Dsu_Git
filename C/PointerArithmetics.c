#include <stdio.h>
int main()
{
    char a='34';
    char *ptra=&a;
    printf("%p\n",ptra);
    ptra++;
    printf("%p\n",ptra);
    ptra--;
    printf("%p\n",ptra);
    printf("%p\n",ptra-2);
    return 0;
}