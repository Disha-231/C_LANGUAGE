

#include<stdio.h>
int main()
{
    int I;
    do
    {
        printf("Enter your choice: ");
        scanf("%d",&I);
        switch(I)
        {
            case 1:
            printf("67\n");
            break;
            case 2:
            printf("45\n");
            break;
            case -1:
            puts("Bye");
            break;
            default:
            printf("default\n");
        }
    }while(I != -1);

}
