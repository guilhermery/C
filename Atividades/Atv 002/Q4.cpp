#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, n1, d, t;
	printf("Digite dois números: ");
	scanf("%d%d", &n, &n1);
	d = n*2;
	t = n1*3;
	printf("O dobro do número %d é %d", n, d);
	printf("\nO triplo do número %d é %d", n1, t);
}
