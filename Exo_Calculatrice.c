#include <stdio.h>

// Programme d'une calculatrice simple en C.
int main(void)
{
    char ret = ';';
    float nombreN;
    float nombreM;

    printf("Veuillez saisir un nombre N : \n");

    scanf(" %f", &nombreN);

    while (ret != '+' && ret != '-' && ret != '*' && ret != '/')
    {
        printf("Voulez-vous faire une addition (+), une soustraction (-), multiplication (*) ou bien une division (/) ? \n ");
        scanf(" %c", &ret);
    }

    printf("Merci, saisir un autre nombre M : \n");
    scanf(" %f", &nombreM);

    if (ret == '+')
    {
        float addition = nombreN + nombreM;
        printf("L'addition donne %.3f\n", addition);
    }
    else if (ret == '-')
    {
        float soustraction = nombreN - nombreM;
        printf("La soustraction donne %.3f\n", soustraction);
    }
    else if (ret == '*')
    {
        float multiplication = nombreN * nombreM;
        printf("La multiplication donne %.3f\n", multiplication);
    }
    else if (ret == '/')
    {
        if (nombreM == 0)
        {
            printf("Erreur impossible d'effectuer cette opération. \n");
            return -1;
        }

        float division = nombreN / nombreM;
        printf("La division donne %.3f\n", division);
    }

    return 0;
}