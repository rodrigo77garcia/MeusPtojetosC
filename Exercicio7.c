#include<stdio.h>
#include<stdlib.h>

int main()
{
   int vet[10];         // Declara��o do vetor
   int maior, menor, i;   // Declara��o das vari�veis
   
   //preenchimento do vetor de 10 posi��es
   for(i = 0; i < 10; i++){
        
        printf("vet[%d]: ", i);
        scanf("%d", &vet[i]);
        
      }
   //inicializando as vari�veis maior e menor
   maior = vet[0]; 
   menor = vet[0];

   //imprimindo os valores das vari�veis maior e menor
    for (int i = 0; i < 10; ++i) {
        if (vet[i] > maior) 
           maior = vet[i];
        if (vet[i] < menor) 
           menor = vet[i];
    }

    printf("\n\n %d %d", menor, maior);
 
    

    return 0;
}

