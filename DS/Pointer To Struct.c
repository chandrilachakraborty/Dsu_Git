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
struct student s;
strcpy(s.name, "Sharan");
s.age = 23;
s.percentage = 45.3;
printf("name %s\t age %d\t percentage %.2f\n", s.name, s.age, s.percentage);
struct student *p = &s;
strcpy((*p).name, "T");
p->age=75;
p->percentage=66.6;
printf("name %s\t age %d\t percentage %.2f\n", s.name, s.age, s.percentage);
}