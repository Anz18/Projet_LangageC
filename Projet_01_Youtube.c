#include <stdio.h>

int main(void)

{

    float nombre;
    float farenheit = 0.0;
    float convertisseur = 0.000;

    printf("Veuillez saisir une valeur de température en degrée celsius : \n");
    scanf("%f", &nombre);

    farenheit = (nombre * 1.8) + 32;
    convertisseur = nombre - 273.15;
    printf("La valeur de la température %.2f °C en farenheit est de : %.2f °F\n", nombre, farenheit);
    printf("Quant en kelvin, elle est de : %.3f K\n", convertisseur);

    return 0;
}