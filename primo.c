#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

int TESTAPRIMO(int p){
	int i,div=0, s=0;
	for (i = 1; i <= p; i++) {
		if (p % i == 0) { 
			div++;
		}
	}
    
	if (div == 2){
		s=s+1;
		//printf("O número %d é primo!", p);
		printf("%d ",s);
	}
	//else
    //printf("O número %d não é primo!", p);

	return 0;
}


int PRIMOS(int INICIO, int QUANTIDADE){
	int i, a[MAX], b[MAX], primo=0, s=0, cont=1;
	for(i=0;i<=QUANTIDADE;i++){
		printf("%d ",INICIO);
		TESTAPRIMO(INICIO);
		INICIO=INICIO+1;
	}
	//printf("A quantidade de primos: %d",s);
	return 0;
}

int main(){
	int i=0, q=0;
	printf("Digite o numero inicial: ",i);
	scanf("%d", &i);
	printf("Digite a quantidade de primos: ",q);
	scanf("%d", &q);
	PRIMOS(i, q);
	return 0;
}