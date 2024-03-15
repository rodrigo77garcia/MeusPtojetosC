#include <stdio.h>
#include <stdlib.h>

int SOMAIMP(int imp, int fim){
	int s=0, i;
	for(i=imp;i<=fim;i++){
		imp=imp+1;
		if(imp%2!=0){
			s=s+imp;
		}
	}
	printf("Soma: %d",s);
	return 0;
}

int main(){
	int inicio, fim;
	printf("digite o inicio da serie: ");
	scanf("%d",&inicio);
	printf("digite o fim da serie: ");
	scanf("%d",&fim);
	SOMAIMP(inicio, fim);
	return 0;
}