#include<stdio.h>
#include"Pi.h"

int main()
{
	float rayon;
	printf("rayon ?");
	scanf("%f",&rayon);
	printf(" %f %f \n",circ(rayon),surf(rayon));
	return 0;
}
