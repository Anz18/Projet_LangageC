#include <stdio.h>
// #include <string.h>
#include <stdlib.h>
// #include <string.h>
// #include <time.h>

int main()
{
    int n;

    for (int i = 1; i < 101; i++)
    {

        n = rand() % 1000 + 1; // Génère un nombre aléatoire entre 1 et 1000

        if (n % 2 == 0)
        {
            printf("Le nombre %d est pair.\n", n);
        }

        else
        {
            printf("Le nombre %d est impair.\n", n);
        }
    }

    return 0;
}