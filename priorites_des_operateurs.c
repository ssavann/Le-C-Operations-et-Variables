#include <stdio.h>
#include <stdlib.h>


int main()
{
	int point_vie = 10;
	int degats = 5;
	printf("Point de vie = %d\n", point_vie);

	point_vie = point_vie - degats;
	printf("Point de vie = %d\n", point_vie); 
	
	int point_magie = 0;
	point_magie = 10 * 5 - 4;
		printf("Point de magie = %d\n", point_magie); 

	point_magie = 10 * (5 - 4);
			printf("Point de magie 2 = %d\n", point_magie); 

	

	return 0;
}
