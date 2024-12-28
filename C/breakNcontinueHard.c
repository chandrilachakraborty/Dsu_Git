#include <stdio.h>
#include <string.h>

int main()
{
    char pass[20];
    const char crt_pass[]="12345";
    int attempts;
    for (attempts=3;attempts>0;attempts--)
    {
        printf("Enter the password: ");
        scanf("%s",&pass);
        if (strcmp(pass, crt_pass)==0)
        {
            printf("Correct Password...Exiting!");
            break;
        }
        else
        {
            if (attempts>1){
                printf("Incorrect Password...Attempts left: %d\n",attempts-1);
            }
            else
            {
                printf("You have exhausted all attempts...Exiting!\n");
                break;
            }
        }
    }
    return 0;
}