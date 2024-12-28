#include <stdio.h>
#include <string.h>
#define No_Of_Drivers 3
struct TravelAgency
{
    char name;
    char dlNo;
    char route;
    int kms;
};
struct TravelAgency agents[No_Of_Drivers];
void print_driver_info(struct TravelAgency agents[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Name of driver %d is %s.\n", i + 1, agents[i].name);
        printf("Driving license number of driver %d is %s.\n", i + 1, agents[i].dlNo);
        printf("Route of driver %d is %s.\n", i + 1, agents[i].route);
        printf("Number of kms of driver %d is %d.\n", i + 1, agents[i].kms);
    }
}
void input_driver_info(struct TravelAgency agents[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of driver %d : ", i + 1);
        scanf("%d", &agents[i].name);
        printf("Enter the driving license number of driver %d : ", i + 1);
        scanf("%s", &agents[i].dlNo);
        printf("Enter the route of driver %d : ", i + 1);
        scanf("%s", &agents[i].route);
        printf("Enter the number of kms of driver %d : ", i + 1);
        scanf("%d", &agents[i].kms);
    }
}
int main()
{
    input_driver_info(agents, No_Of_Drivers);
    print_driver_info(agents, No_Of_Drivers);

    return 0;
}