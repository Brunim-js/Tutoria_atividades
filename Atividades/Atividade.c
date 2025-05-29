#include <stdio.h>
int main(){
 int idade;
 float altura;
 char nome[10];

printf("Digite seu primeiro nome: ");
scanf("%s",nome);

printf("Digite sua idade: ");
scanf("%d",&idade);

printf("Digite sua altura: ");
scanf("%f",&altura);


printf("%s tem %d anos e sua altura é %.2fm", nome, idade, altura);




  return 0;
}