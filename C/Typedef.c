#include <stdio.h>
typedef struct students
{
    int id;
    int marks;
    char fav_char;
    char name[30];
}std;
int main()
{
    std s1,s2;
    s1.id=1;
    s2.id=2;
    printf("%d",s1.id);
    return 0;
}