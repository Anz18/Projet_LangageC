#include <stdio.h>

// Programme d'une dichotomie en C.

int main(void)

{
    int a;
    char b = '0';
    int i = 0;
    int maximum = 100;
    int minimum = 0;
    char n = '1';
    int chiffre = 1;

    printf("Choisissez un chiffre entre 0 et 100, sans le communiquer. \n");

    while (chiffre != maximum && minimum != maximum)
    {
        maximum = (minimum + maximum) / 2;

        printf("Est-ce que le chiffre Choisi est %d ? \n", maximum);
        printf("Si Oui, tappez sur 0. \n");
        scanf(" %c", &b);

        if (b == '0')
        {
            printf("Le chiffre choisi est bel bien %d ! \n", maximum);
            return 0;
        }

        else if (b != '0')

        {

            printf("Si votre chiffre est supérieur à %d, tappez sur 1. \n", maximum);
            scanf(" %c", &n);

            if (n == '1')

            {

                minimum = maximum + 1;
                maximum = maximum + (minimum / 2);
            }

            else

            {

                maximum = maximum - (maximum / 2);
            }
        }
    }

    i = i + 1;

    return 0;
}