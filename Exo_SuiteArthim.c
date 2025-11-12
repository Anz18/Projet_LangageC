#include <stdio.h>

/*But, faire la somme d'une suite arithmetique.*/

int main()
{
    int a = 6;
    int r = 12;
    int somme = 0;
    int i = 0;
    for (i = 0; i < 100; i++)
    {
        somme += a + i * r;
        // printf("Pour i =  %d est : %d\n", i, somme);
        printf("Pour i = %d La somme est : %d\n", i, somme);
    }

    printf("La somme totale est : %d\n", somme);

    return 0;
}