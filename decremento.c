#include <stdio.h>
#include <stdlib.h>

int PROCESSA(int p){
	do{
		printf("%d ", p--);
	}while(1<=p);
	return 0;
}

int main(){
	int p;
	printf("Digite o valor a ser decrescido: ");
	scanf("%d",&p);
	while(1<=p){
		PROCESSA(p);
		printf("\n");
		p=p-1;
	}
	return 0;
}