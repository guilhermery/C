#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	printf("Digite um n�mero: ");
	scanf("%d", &n);
	if(n>0){
		printf("O n�mero %d � positivo!", n);
	} else if(n == 0){
		printf("O n�mero %d � neutro!", n);
	} else{
		printf("O n�mero %d � negativo!", n);
	}
	return 0;
}
