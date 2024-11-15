#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    int c;
    printf("Digite um numero: ");
    scanf("%d", &c);
    printf("O numero e %d", c);
    return (0);
}