#include <stdio.h>
#include<string.h>
union student
{
    int id;
    int marks;
    char fav_char;
    char name[30];
};
int main()
{
    union student std;
    strcpy(std.name,"Rahul");
    std.fav_char='p';
    std.marks=45;
    std.id=1;
    printf("The id is %d\n",std.id);
    printf("The marks is %d\n",std.marks);
    printf("The fav_char is %c\n",std.fav_char);
    printf("The name is %s\n",std.name);
    return 0;
}