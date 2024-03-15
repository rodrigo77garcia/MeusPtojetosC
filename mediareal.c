#include <stdio.h>
#include <stdlib.h>

int MEDIAREAL(int qtd){
	int i;
	float md, s=0;
	for(i=0;i<qtd;i++){
		printf("Digite o numero: ");
		scanf("%f",&md);
		s=s+md;
	}
	printf("a media: %.1f",(s/qtd));
	return 0;
}

int main(){
	int qtd;
	printf("quantos numeros deseja informar para calcular a media: ");
	scanf("%d",&qtd);
	MEDIAREAL(qtd);
	return 0;
}