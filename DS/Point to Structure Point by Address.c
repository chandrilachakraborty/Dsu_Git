#include<stdio.h>
#include<stdlib.h>
struct student
{
char name [50];
int age;
float percentage;
};
int main()
{
struct student s1;
strcpy(s1.name, "Arunkumar");
s1.age=25;
s1.percentage=66.6;
display(&s1);
printf("Name in main function %s\n",s1.name);
}
void display (struct student *stu)
{
strcpy((*stu).name, "Gopu");
printf("Name in display function %s\n", stu->name);
}