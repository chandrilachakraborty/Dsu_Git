#include <stdio.h>
#include <string.h>
struct student
{
char name [50];
int age;
float percentage;
};
int main()
{
struct student s [10];
strcpy(s[0].name, "Sharan");
s[0].age = 34;
s[0].percentage = 45.3;
strcpy(s[1].name, "Tadkal");
s[1].age = 35;
s[1].percentage = 54.3;
printf("name %s\t age %d\t percentage %.2f\n", s[0].name, s[0].age, s[0].percentage);
//printf("name %s\t age %d\t percentage %.2f\n", s[1].name, s[1].age, s[1]. percentage);
return 0;
}