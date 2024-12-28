#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student
{
char name [50];
int age;
float percentage;
};
int main()
{
struct student *ptr;
ptr=(struct student *)malloc(sizeof(struct student));
strcpy(ptr->name, "Arunkumar");
ptr->age=75;
ptr->percentage=66.6;
printf("name %s\t age %d\t percentage %.2f\n", ptr->name, ptr->age, ptr->percentage);
free(ptr);
}