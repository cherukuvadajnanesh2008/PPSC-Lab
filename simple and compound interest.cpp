#include <stdio.h>
#include <math.h>

int main(){
	float P, R, T, A, CI,SI;
	scanf("%f", &P);
	scanf("%f", &T);
	scanf("%f", &R);
	SI = (P * R * T) / 100;
	
	printf("Simple Interest = %f\n", SI);
	A = P * pow((1 + R / 100), T);
	CI = A - P;
	
	printf("Compund Interest = %f\n", CI);
	printf("Total Amount = %f\n", A);
	
	return 0;
	}
