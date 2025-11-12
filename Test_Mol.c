#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre;
    int i;
    float *tabl_dynamique;

    printf("Saisissez un nombre\n");
    scanf("%d", &nombre);

    tabl_dynamique = (float *)malloc(sizeof(float) * nombre);

    for (i = 0; i < nombre; i++)
    {
        tabl_dynamique[i] = i * 2.5;

        // printf("Les valeurs du tableau dynamique sont : %f\n", tabl_dynamique);
    }

    for (i = 0; i < nombre; i++)
    {
        // tabl_dynamique[i] = i * 2.5

        printf("Les valeurs du tableau dynamique sont : %f\n", tabl_dynamique[i]);
    }

    // void *calloc(size_t nombre, size_t tabl_dynamique);

    // void *realloc(void *nombre, size_t size);

    free(tabl_dynamique);

    return 0;
}
