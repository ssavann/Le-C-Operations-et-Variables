#include <stdio.h>
#include <stdlib.h>


int main()
{
	int age_utilisateur = 0;

	printf("Quel age avez-vous?\n");
	scanf("%d", &age_utilisateur);

	printf("Vous avez %d ans\n", age_utilisateur);

	return 0;
}
