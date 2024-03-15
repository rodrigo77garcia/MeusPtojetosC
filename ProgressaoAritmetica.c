#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 1000

int PA(int n){
	float a1,r,a[MAX];
	int i;
	printf("\nEntre com o valor do primeiro termo: ");
        scanf("%f",&a1);
 	printf("\nEntre com o valor da razao: ");
	scanf("%f",&r);
	for(i=1; i<=n; i++){
		a[i]=a1+(i-1)*r;
		printf("\nOs termos sao: %f ",a[i]);
		
	}
	return 0;
	
}

int main(){
	int n;
	printf("\nEntre com o numero de termos: ");
	scanf("%d",&n);
	PA(n);
	return 0;

}