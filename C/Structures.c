#include <stdio.h>
#include <string.h>
#define max 3
struct students
{
    int id;
    int marks;
    char fav_char;
    char name[30];
}s[max];

void print(struct students s[],int count)
{
    for(int i=0;i<count;i++)
    {
        printf("student name is %s\n", s[i].name);
        printf("student id is %d\n", s[i].id);
        printf("%s's favourite character is %c\n", s[i].name,s[i].fav_char);
        printf("%s got %d\n", s[i].name,s[i].marks);
    }
}
int main()
{

    s[0].id=1;
    s[1].id=2;
    s[2].id=3;
    s[0].marks=45;
    s[1].marks=50;
    s[2].marks=48;
    s[0].fav_char='p';
    s[1].fav_char='q';
    s[2].fav_char='r';
    strcpy(s[0].name, "Alex Blaze");
    strcpy(s[1].name, "Jordan Christ");
    strcpy(s[2].name, "Messi Leo");
    print(s,max);
    
    return 0;
}