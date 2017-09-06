#include <stdio.h>
int main()
{
    double number;

    printf("Enter a number: ");
    scanf("%lf",&number);

    if (number<=0.0)
    {
        if (number==0.0)
            printf("You ented 0.");
    else
     printf("You entered a ngaive number.");
    }
    else
    printf("You entered a positive number.");
    return 0;
}
