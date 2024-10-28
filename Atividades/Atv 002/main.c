#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Hello, World!\n");
	printf("\nHello,\nWorld!\n");
	printf("\n\tHello, World!");
	printf("\nHello,\n\tWorld!");
	return(0);
}