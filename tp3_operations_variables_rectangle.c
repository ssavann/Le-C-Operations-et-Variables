#include <stdio.h>
#include <stdlib.h>


int main()
{
	printf("TP3: Operations sur les variables sur un rectangle\n");

	//déclaration des variables
	int largeur = 0, hauteur = 0;
	int perimetre = 0, surface = 0;


	//saisie utilisateur
	printf("Quel est la largeur et la hauteur du rectangle ? ");
	scanf("%d%d", &largeur, &hauteur);

	//calcul geometriques
	perimetre = 2*largeur + 2*hauteur;
	surface = largeur * hauteur;

	//affichage resultat
	printf("Perimetre = %d\n", perimetre);
	printf("Surface = %d\n", surface);


	return 0;
}
 