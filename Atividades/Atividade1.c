#include <stdio.h>
int main(){
float n1, n2, x;

printf("---Multiplicador de dois fatores---\nDigite o primeiro valor: ");
scanf("%f",&n1);

printf("Digite o segundo valor: ");
scanf("%f",&n2);

x=n1*n2;

printf("O resultado da multiplicação de %.1f x %.1f é: %.1f",n1,n2,x);



return 0;
}
