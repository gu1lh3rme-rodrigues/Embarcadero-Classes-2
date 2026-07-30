#include <stdio.h>

main(){
	
	int a;
	
	printf("Numero par ou impar!!\n\n");
	
	
	printf("Digite um numero: \n");
	scanf("%i", &a);
	
	if(a%2==0){
		printf("O numero %i eh par", a);
	}
	else {
		printf("O numero %i eh impar",a);
	}
}