#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number=0;
    printf("Please enter a number: ");
    scanf("%i",&number);
    factoriel(number);
    return 0;
}

void factoriel(int fact)
{
    int total=fact;
    for (int i=fact-1; i>0; i--)
    {
        total=total * i;
    }
    printf("%d! = %d \n", fact, total);
    return 0;
}
