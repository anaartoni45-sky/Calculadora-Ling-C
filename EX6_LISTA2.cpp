#include <stdio.h>
#include <math.h>

int main(){
	int num1, num2, opcao, soma;
	int subtrair, multiplicar, dividir;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &num1);
	printf("Digite o segundo valor: ");
	scanf("%d", &num2);
	
	printf("--- ESCOLHA UMA OPCAO ---\n");
	printf("1 - Somar \n2 - Subtrair \n3 - Multiplicar \n4 - Dividir\n");
	scanf("%d", &opcao);
	
	switch (opcao){
		case 1:
			soma = num1 + num2;
			printf("A soma de %d e %d e: %d", num1, num2, soma);
			break;
			
		case 2:
			subtrair = num1 - num2;
			printf("A subtracao de %d e %d e: %d", num1, num2, subtrair);
			break;
		
		case 3:
				multiplicar = num1 * num2;
				printf("A multiplicacao de %d e %d e: %d", num1, num2, multiplicar);
				break;

		case 4:
				dividir = num1 / num2;
				printf("A divisao de %d e %d e: %d", num1, num2, dividir);
				break;
			
		default:
			printf("Opcao invalida!");
	}
	return 0;
}
