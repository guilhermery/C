#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	printf("Digite um número: ");
	scanf("%d", &n);
	n = pow(n, 3);
	printf("O cubo do número digitado é igual a %d", n);
	return 0;
}
