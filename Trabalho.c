#include <stdio.h>
#include <stdlib.h>
#define MAX 100

main() 
{
	int i, j, linha, matriz[MAX][MAX];
        matriz[0][0] = 1;
	printf("Digite o número de linhas: ");
	scanf("%d", &linha);
	for(i = 1; i < linha; i++)
         {
                matriz[i][0] = 1;
                matriz[i][i] = 1;
		for (j = 1; j < i; j++) 
		{
	           matriz[i][j] = matriz[i - 1][j] + matriz[i - 1][j - 1];
                }
         }
        for (i = 0; i < linha; i++) 
         {
               
               for (j = 0; j <= i; j++) 
                  {
                        printf("%d ",matriz[i][j]);
                  }
                printf("\n");
         }
	system("pause");
	return 0;

}