#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, n1, d, t;
	printf("Digite dois n�meros: ");
	scanf("%d%d", &n, &n1);
	d = n*2;
	t = n1*3;
	printf("O dobro do n�mero %d � %d", n, d);
	printf("\nO triplo do n�mero %d � %d", n1, t);
}
