#include<stdio.h>
#include<locale.h>
int main (){
    setlocale(LC_ALL, "Portuguese");
    int minhaIdade, maeidade, paiIdade;
    minhaIdade = 19;
    maeidade = 39;
    paiIdade = 43;
    printf("Minha idade e' %d \n Pai idade: %d \n Mae idade: %d", minhaIdade, maeidade, paiIdade);
    return (0);
}