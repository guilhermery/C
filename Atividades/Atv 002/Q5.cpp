#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	printf("Digite um n�mero: ");
	scanf("%d", &n);
	n = pow(n, 3);
	printf("O cubo do n�mero digitado � igual a %d", n);
	return 0;
}
