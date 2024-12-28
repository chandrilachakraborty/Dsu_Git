#include <stdio.h>
void printStr(char hunt[])
{
    int i=0;
    while (i!='\0')
    {
        printf("%c",hunt[i]);
        i++;
    }
    printf("\n");
}

int main()
{
    char str[]="jordon";
    char poi[6]={'l','a','s','s','i'};
    printf("%s",str);
    printf("\n");
    printf("%s\n\n",poi);
    char hunt[10];
    fgets(hunt,sizeof(hunt),stdin);
    char guts[8];
    printStr(guts);
    puts(hunt);
    return 0;
}