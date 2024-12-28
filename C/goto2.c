#include <stdio.h>
int main()
{
    int itemcode, quantity;
    
    printf("Enter the itemcode: ");
    scanf("%d", &itemcode);

    if (itemcode<1 || itemcode>100)
    {
        printf("Invalid itemcode.\n");
        goto retry_code;
    }
retry_quantity:
    printf("Enter the quantity: ");
    scanf("%d",&quantity);

    if (quantity<=0)
    {
        printf("Invalid quantity.Please re-enter.\n");
        goto retry_quantity;
    }
    printf("item code: %d , quantity: %d\n",itemcode,quantity);
    printf("Item is successfully added to the inventory.");
    
    return 0;
retry_code:
    printf("Enter a valid item code between 1 and 100: ");
    scanf("%d",&itemcode);

    goto retry_quantity;
}