#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 main() 
{
  //declaracao das variaveis

   int n, count;
   float y;
   float deposito, x;
   float sacar;
   float investi;  
   float resgatar;
   y = 0.00;
   deposito = 0.00;
   count = 0;

   printf("      Menu \n");
   printf("  1 - Depositar \n");
   printf("  2 - Sacar \n");
   printf("  3 - Investir \n");
   printf("  4 - Resgatar \n");
   printf("  5 - Sair \n");

   
do{
    //printf("Digite sua opcao no Menu: \n");
    scanf("%d", &n); 

    switch(n){
    
     case 1:   //funcao  1 - deposito

      //printf("deposite o valor: ");
      scanf("%f", &x);
      deposito = deposito + x;
      y = investi*pow(1.10,count);
      //count = count + 1;
      printf("%.2f %.2f \n",deposito, y);

     break;
  
     case 2: //funcao 2 - sacar

     //printf("digite o valor de saque: ");
     scanf("%f", &sacar);
     if(deposito < sacar)
      {
        printf("Valor Invalido \n"); 
      }
     else 
      {
        deposito = deposito - sacar;
        y = investi*pow(1.10,count);
        //count = count + 1;
        printf("%.2f %.2f \n",deposito, y);
   
       }

     break; 

     case 3:  //funcao 3 - investir
 
     //printf("digite o valor de investimento: ");
     scanf("%f", &investi);
     if(deposito < investi){
       printf("Valor Invalido \n"); 
     }
     else{

       deposito = deposito - investi;
       y = (investi + y)*pow(1.10,count);
       count = count + 1;
       printf("%.2f %.2f \n",deposito, y);
     }
    break;

    case 4:   //funcao 4 - resgatar

     //printf("digite o valor de resgate: ");
     scanf("%f", &resgatar);
     if(y < resgatar)
      {
        printf("Valor Invalido \n"); 
      }
     else 
      {
        y = investi*pow(1.10,count);
        count = count + 1;
        y = y - resgatar;
        printf("%.2f %.2f \n",deposito, y);
      }

    break;
  } 
   //printf("Digite sua opcao no Menu: \n");
   //scanf("%d", &n);
 } while(n != 5);
   count = count + 1;
   y = investi*pow(1.10,count);
   //count = count + 1;
   printf("%.2f %.2f \n",deposito, y);
   printf("Fim \n");
  
   system("pause");
   return 0;

}