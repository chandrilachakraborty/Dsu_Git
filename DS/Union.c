#include<stdio.h>
#include<string.h>
#include<stdlib.h>
union student
{
char name [50];
int age;
float percentage;
int dob;
};
void main()
{
union student s;
strcpy(s.name, "Arunkumar");
printf("%s\n",s.name);
s.age=20;
printf("%d\n",s.age); 
s.percentage=66.6;
s.dob=30;
printf("%d\n",s.dob);
printf("%d\n",s.age);
printf("%.2f\n",s.percentage);
printf("%s\n",s.name);
}