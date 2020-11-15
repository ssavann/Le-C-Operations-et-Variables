#include <stdio.h>
#include <stdlib.h>


int main()
{
	int point_vie = 10;
	int potion = 5;
	printf("Point de vie = %d\n", point_vie);

	point_vie = potion++; 	//suffixe incrémentation +1 après

	printf("Point de vie = %d\n", point_vie);
	printf("Potion = %d\n", potion);
	
	
	point_vie = ++potion; 	//Prefixe incrémentation +1 avant

	printf("Point de vie = %d\n", point_vie);
	printf("Potion = %d\n", potion);
	

	return 0;
}
