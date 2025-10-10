#include<stdio.h>
int main(){
	float mass, accn, force;
	
	printf("Enter the mass(in kg): ");
	scanf("%f", &mass);
	
	printf("Enter acceleration(in ms^2):", &accn);
	scanf("%f", &accn);
	
	force = mass*accn;
	
	printf("Force = %.2f Newtons\n", force);
	
	return 0;
}
