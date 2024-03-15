#include <stdlib.h>
#include <stdio.h>    //bibliotecas

//Programa Principal

  int main(){
	int A[10];
	int i, ord, aux;
	//inserindo dados no vetor
	for (i = 1; i <= 10; i++){
		//printf("Digite um numero:");
		scanf("%d",&A[i]);
	}

	// Ordenação do Vetor 
	ord=10;
	while (ord>1){
		for (i=1;i<=10; i++){
			if (A[i] > A[i + 1]){
				aux=A[i];
				A[i]=A[i + 1];
				A[i + 1]=aux;
			}
		}
		ord=ord-1;
	}

	// imprimindo o Vetor Ordenado 
	//printf("Vetor em ordem crescente: \n");
        for (i = 1; i <= 10; i++){
		printf("%d ",A[i]);
	}

	return 0;
  }