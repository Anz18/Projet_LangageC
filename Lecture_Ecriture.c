#include <stdio.h>
#include <string.h>
int main()
{
    int ret = 0;
    int nombre;

    // FILE *f = fopen("fichier.txt", "r");
    printf("Donne-moi un nombre : "); // Pour l'écriture et la demande à l'utilisateur de saisir un nombre
    scanf("%d", &nombre);             // Pour lire la valeur du nombre saisi par l'utilisateur.
    scanf("%d", &ret);
    printf("Tu m'as donné %d comme nombre.\n", nombre);
    printf("Le placement du nombre donné, est : %d .\n", ret);
    return ret;
}