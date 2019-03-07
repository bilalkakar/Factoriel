#include <stdio.h>
#include <stdlib.h>

int main()
{
   int fact =5;
   printf("%d! = %d \n", fact, factoriel(fact));
    return 0;
}

int factoriel(int f)
{
    // add a comment
    if(f == 1)
    {
        return 1;
    }
    return (f*factoriel(f-1));
}
