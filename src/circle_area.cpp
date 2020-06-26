#include <stdio.h>
int main(){
	float circle_area, r, pi=3.14;
	printf("User enter Radius pls. : ");
	scanf("%f",&r);
	circle_area = (pi*(r*r))/2;
	printf("%f", circle_area);
	
}
