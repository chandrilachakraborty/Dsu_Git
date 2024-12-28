#include <stdio.h>
#include<string.h>
char* concatenation(char str[], char rtr[])
{
    strcat(str,rtr);
    return str;
}
char* upstr(char str[])
{
    return strupr(str);
}
char* lowrtr(char rtr[])
{
    return strlwr(rtr);
}
char* revstr(char str[])
{
    return strrev(str);
}
char* revrtr(char rtr[])
{
    return strrev(rtr);
}
int comparison(char str[], char rtr[])
{
    int funcComparison=strcmp(str,rtr);
    return funcComparison;
}
int length(char test[])
{
    int funcLength=strlen(test);
    return funcLength;
}
void userinput(char *Input, int size)
{
    printf("Enter a string: ");
    fgets(Input, size, stdin);
    Input[strcspn(Input, "\n")]=0;
}
int main()
{
    char str[50];
    userinput(str, sizeof(str));
    printf("String Entered is: ",str);
    puts(str);
    int actualLength=length(str);
    printf("length of string str = %d\n",actualLength);
    char rtr[]="COOKS";
    char gtr[50];
    strcpy(gtr,str);
    puts(gtr);
    printf("Comparison of str and rtr results in %d\n", comparison(str,rtr));
    printf("Reverse of %s is ",str);
    puts(revstr(str));
    printf("Reverse of %s is ",rtr);
    puts(revrtr(rtr));
    printf("Uppercase of %s is ",str);
    puts(upstr(str));
    printf("Lowercase of %s is ",rtr);
    puts(lowrtr(rtr));
    printf("Concatenation of %s and %s is ",str,rtr);
    puts(concatenation(str,rtr));
    return 0;
}