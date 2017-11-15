#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DELIM ";"

int main(void)
{
	FILE *fichier = NULL;
	
	fichier = fopen("bpm.csv", "r");

	char tableau[100][100];

	if (fichier != NULL)
	{
		// Lecture Possible
		for (int i = 0; i < 2; i++)
		{
			fscanf(fichier, "%s", &tableau[i]);
		}
		fclose(fichier);
	}
	else 
	{
		//Lecture Impossible
		printf("La lecture du fichier est Impossible");
	}
	printf("%s\n%s", tableau[0], tableau[1]);

	return 0;
}