#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int c, l, a, v;
	printf("Digite, respectivamente, os valores de comprimento, largura e altura da caixa: ");
	scanf("%d%d%d", &c, &l, &a);
	v = c*l*a;
	printf("O volume dessa caixa é aproximadamente igual a %d", v);
	return 0;
}
