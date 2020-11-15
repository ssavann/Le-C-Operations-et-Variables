#include <stdio.h>
#include <stdlib.h>


int main()
{
	int point_vie = 10;
	int degats = 5;
	printf("Point de vie = %d\n", point_vie);

	point_vie = point_vie - degats;
	printf("Point de vie = %d\n", point_vie); 

	printf("5 + 3 = %d\n", 5+3 );
	printf("5 - 3 = %d\n", 5-3 );
	printf("5 * 3 = %d\n", 5*3 );
	printf("5 / 3 = %d\n", 5/3 );
	printf("5 %% 3 = %d\n", 5%3 );

	return 0;
}
