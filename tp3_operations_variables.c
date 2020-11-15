#include <stdio.h>
#include <stdlib.h>


int main()
{
	printf("TP3: Operations sur les variables\n");

	//déclaration des variables
	int cote_carre = 0;
	int perimetre = 0, surface = 0;


	//saisie utilisateur
	printf("Quel est la taille d'un cote du carre ? ");
	scanf("%d", &cote_carre);

	//calcul geometriques
	perimetre = 4 * cote_carre;
	surface = cote_carre * cote_carre;

	//affichage resultat
	printf("Perimetre = %d\n", perimetre);
	printf("Surface = %d\n", surface);


	return 0;
}
 