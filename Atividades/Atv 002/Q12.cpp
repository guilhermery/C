#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, n1, n2;
	printf("======================\n");
	printf("     CALCULADORA      \n");
	printf("======================\n");
	printf("OP��O 1: ADI��O\n");
	printf("OP��O 2: SUBTRA��O\n");
	printf("OP��O 3: MULTIPLICA��O");
	printf("\nOP��O 4: DIVIS�O\n");
	printf("======================\n");
	printf("Digite o n�mero da opera��o que deseja realizar: ");
	scanf("%d", &n);
	switch(n){
		case 1:
			printf("Digite o primeiro n�mero: ");
			scanf("%d", &n1);
			printf("Digite o segundo n�mero: ");
			scanf("%d", &n2);
			n1 = n1+n2;
			printf("A soma dos dois n�meros � igual a %d", n1);
			break;
		case 2:
			printf("Digite o primeiro n�mero: ");
			scanf("%d", &n1);
			printf("Digite o segundo n�mero: ");
			scanf("%d", &n2);
			n1 = n1-n2;
			printf("A subtra��o do primeiro numero pelo segundo � igual a %d", n1);
			break;
		case 3:
			printf("Digite o primeiro n�mero: ");
			scanf("%d", &n1);
			printf("Digite o segundo n�mero: ");
			scanf("%d", &n2);
			n1 = n1*n2;
			printf("O resultado da multiplica��o entre os dois n�meros � igual a %d", n1);
			break;
		case 4:
			printf("Digite o primeiro n�mero: ");
			scanf("%d", &n1);
			printf("Digite o segundo n�mero: ");
			scanf("%d", &n2);
			if(n2==0){
				printf("O resultado da divis�o � indefinida");
			} else{
				n1 = n1/n2;
				printf("O resultado da divis�o � igual a %d", n1);
			}
			break;
		default:
			printf("Esse n�mero n�o corresponde a uma opera��o");
	}
	return 0;
}
