#include<stdio.h>

int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}

int main()
{
    int a=20, b=10, choice;

    while(1)   // infinite loop until user exits
    {
        printf("\n=== Simple Calculator ===\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Result: %d\n", add(a,b));
                break;
            case 2:
                printf("Result: %d\n", sub(a,b));
                break;
            case 3:
                printf("Result: %d\n", mul(a,b));
                break;
            case 4:
                printf("Exiting program...\n");
                return 0;   // exit the program
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}


