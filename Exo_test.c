#include <stdio.h>
int main()
{
    int somme = 0;
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        somme = somme + i;
    }
    printf("La somme est : %d\n", somme);
    return 0;
}