#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fact=0;
    printf("entrer un chiffre dont vous voulez la factoriel: ");
    scanf("%i",&fact);
    int total=fact;
    for (int i=fact-1; i>0; i--) {
        total=total * i;
    }
    printf("%d! = %d \n", fact, total);
    return 0;
}
