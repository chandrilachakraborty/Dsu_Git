#include <stdio.h>
int func1(int arr[])
{
    for(int i=0;i<4;i++)
    {
        printf("The value at %d is %d\n",i,arr[i]);
    }
    arr[3]=5678;        //very important point that if you change any value here, it gets reflected in main().
    
    return 0;
}

void func2(int *ptr)
{
    for(int i=0;i<4;i++)
    {
        printf("The value at %d is %d\n",i,*(ptr+i));   // ptr[i]
    }
    *(ptr+2)=20;        //very important point that if you change any value here, it gets reflected in main().
}

void func3(int bray[][2])
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("The value at %d,%d is %d\n",i,j,bray[i][j]); //*(rtr+i*2+j)
        }
    }
}
int main()
{
    int array[4]={1,2,3,4};
    int bray[][2]={{10,20},{30,40}};
    printf("The value at index 0 is %d\n",array[0]);
    func1(array);
    printf("The value at index 0 is %d\n",array[0]);
    func2(array);
    printf("The value at index 2 is %d\n",array[2]);
    func3(bray);
    return 0;
}