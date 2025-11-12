#include <stdio.h>

/*Toujours déclarer la bibliothèque sinon ça ne fonctionne pas.*/
#include <string.h>
int main()
{

    char nom[100];
    strcpy(nom, "Adam ANzilati, alias Lukiti ! \n");
    printf("Mon nom est %s", nom);
    return 0;
}
