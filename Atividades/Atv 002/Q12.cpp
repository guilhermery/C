#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, n1, n2;
	printf("======================\n");
	printf("     CALCULADORA      \n");
	printf("======================\n");
	printf("OPÇÃO 1: ADIÇÃO\n");
	printf("OPÇÃO 2: SUBTRAÇÃO\n");
	printf("OPÇÃO 3: MULTIPLICAÇÃO");
	printf("\nOPÇÃO 4: DIVISÃO\n");
	printf("======================\n");
	printf("Digite o número da operação que deseja realizar: ");
	scanf("%d", &n);
	switch(n){
		case 1:
			printf("Digite o primeiro número: ");
			scanf("%d", &n1);
			printf("Digite o segundo número: ");
			scanf("%d", &n2);
			n1 = n1+n2;
			printf("A soma dos dois números é igual a %d", n1);
			break;
		case 2:
			printf("Digite o primeiro número: ");
			scanf("%d", &n1);
			printf("Digite o segundo número: ");
			scanf("%d", &n2);
			n1 = n1-n2;
			printf("A subtração do primeiro numero pelo segundo é igual a %d", n1);
			break;
		case 3:
			printf("Digite o primeiro número: ");
			scanf("%d", &n1);
			printf("Digite o segundo número: ");
			scanf("%d", &n2);
			n1 = n1*n2;
			printf("O resultado da multiplicação entre os dois números é igual a %d", n1);
			break;
		case 4:
			printf("Digite o primeiro número: ");
			scanf("%d", &n1);
			printf("Digite o segundo número: ");
			scanf("%d", &n2);
			if(n2==0){
				printf("O resultado da divisão é indefinida");
			} else{
				n1 = n1/n2;
				printf("O resultado da divisão é igual a %d", n1);
			}
			break;
		default:
			printf("Esse número não corresponde a uma operação");
	}
	return 0;
}
