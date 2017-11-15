#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "generationCode.C"

void menu()
{
    int choix = 0;
    printf("Veulliez choisir votre paramètrage de LED : \n");
    printf("    1) Allumer en fonction du pouls \n");
    printf("    2) Allumer une LED sur 2 puis 1 sur 3 jusqu'a 10 \n");
    printf("    3) Faire la chenille (autres LEDS)\n");
    scanf("%d", &choix);
    ouvrirFichier(choix);
}
