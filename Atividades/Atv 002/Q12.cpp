#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, n1, n2;
	printf("======================\n");
	printf("     CALCULADORA      \n");
	printf("======================\n");
	printf("OP플O 1: ADI플O\n");
	printf("OP플O 2: SUBTRA플O\n");
	printf("OP플O 3: MULTIPLICA플O");
	printf("\nOP플O 4: DIVIS홒\n");
	printf("======================\n");
	printf("Digite o n�mero da opera豫o que deseja realizar: ");
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
			printf("A subtra豫o do primeiro numero pelo segundo � igual a %d", n1);
			break;
		case 3:
			printf("Digite o primeiro n�mero: ");
			scanf("%d", &n1);
			printf("Digite o segundo n�mero: ");
			scanf("%d", &n2);
			n1 = n1*n2;
			printf("O resultado da multiplica豫o entre os dois n�meros � igual a %d", n1);
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
			printf("Esse n�mero n�o corresponde a uma opera豫o");
	}
	return 0;
}
