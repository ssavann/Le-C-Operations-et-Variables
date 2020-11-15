#include <stdio.h>
#include <stdlib.h>


int main()
{
	int point_vie = 10;
	int degats = 5;
	printf("Point de vie = %d\n", point_vie);

	//point_vie = point_vie + 5;
	point_vie += 5;
	printf("Point de vie = %d\n", point_vie); 
	point_vie -= 5;
	printf("Point de vie = %d\n", point_vie); 
	point_vie *= 5;
	printf("Point de vie = %d\n", point_vie); 
	point_vie /= 5;
	printf("Point de vie = %d\n", point_vie); 
	point_vie %= 5;
	printf("Point de vie = %d\n", point_vie); 
	
	
	

	

	return 0;
}
