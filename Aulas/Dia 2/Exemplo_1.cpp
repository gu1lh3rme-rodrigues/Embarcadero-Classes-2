#include <stdio.h>


// mostrar todos os numeros pares de 1 a 100

main(){
	
	
	int a;
	float b;
	char c;
	bool d;
	
	printf("Complete as informações abaixo: \n\n\n");
	printf("-----------------------------------------\n\n");
	
	printf("Digite um valor inteiro: \n");
	scanf("%i", &a);
	
	printf("Digite um valor real: \n");
	scanf("%f", &b);
	
	printf("Digite um caracter: \n");
	scanf("%c", &c);
	
	printf("Digite um valor booleano: \n");
	scanf("%d", &d);
	
	printf("----------------\n\n");
	
	printf("Informacoes digitadas abaixo\n\n\n");
	
	printf("Um valor inteiro: %i.\n ",a);
	printf("Um valor decimal: %.2f.\n ",b);
	printf("Um caracter digitado: %c.\n ",c);
	printf("Um valor Booleano: %i.\n ", d);
}