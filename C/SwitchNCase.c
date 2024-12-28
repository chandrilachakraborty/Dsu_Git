#include <stdio.h>
int main()
{
    int genre, seat;
    printf("Choose genre of the movie\n");
    printf("1.Action \n2.Drama \n3.Comedy:\n");
    scanf("%d", &genre);
    switch (genre)
    {
    case 1:
        printf("You chose action movie.\n");
        printf("Choose seat type:\n1.Premiuim \n2.Regular\n");
        scanf("%d", &seat);
        switch (seat)
        {
        case 1:
            printf("You chose premium seat for action movie.\n");
            break;
        case 2:
            printf("You chose regular seat for action movie.\n");
            break;
        }
        break;
    case 2:
        printf("You chose drama movie.\n");
        printf("Choose seat type:\n1.Premiuim \n2.Regular\n");
        scanf("%d", &seat);
        switch (seat)
        {
        case 1:
            printf("You chose premium seat for drama movie.\n");
            break;
        case 2:
            printf("You chose regular seat for drama movie.\n");
            break;
        }
        break;
    case 3:
        printf("You chose comedy movie.\n");
        printf("Choose seat type:\n1.Premiuim \n2.Regular\n");
        scanf("%d", &seat);
        switch (seat)
        {
        case 1:
            printf("You chose premium seat for comedy movie.\n");
            break;
        case 2:
            printf("You chose regular seat for comedy movie.\n");
            break;
        }
        break;
    default:
        printf("Invalid genre choice.\n");
    }
    return 0;
}