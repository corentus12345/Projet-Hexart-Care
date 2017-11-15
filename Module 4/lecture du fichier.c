#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, const char * argv[])
{
    FILE* fichier = NULL;
    int i;
    char tableau[100][28];
    int battement[20];
    int temps[20] ;


    fichier = fopen("Battements.csv", "r");

    if (fichier != NULL)
    {
       for(i = 0; i <10; i++)
       {
       fscanf(fichier, "%s", tableau[i]);

       battement[i]=strtok(tableau[i],";");
       temps[i]=strtok(NULL,";");
       printf("%s\n",temps[i] );//lignes printf pour verifier si les variables sont bien stockes
       printf("%s\n",battement[i] );
       }
        fclose(fichier);
    }

    return 0;
}



