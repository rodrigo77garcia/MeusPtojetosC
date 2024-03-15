#include <stdio.h>
#include <stdlib.h>

int POTENCIA(float x, float z){
	float i=1;
	do{
		i=i*x;
		z--;
	}while(0<z);
	printf("Resultado: %.2f",i);
	return 0;
}

int main(){
	float X,Z;
	printf("digite a base de sua potencia: ");
	scanf("%f",&X);
	printf("Digite o expoente: ");
	scanf("%f",&Z);
	POTENCIA(X,Z);
	return 0;
}