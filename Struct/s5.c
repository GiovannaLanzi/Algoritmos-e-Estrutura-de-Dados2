#include <stdio.h>
typedef struct 
{
float Peso; 
int Idade; 
float Altura; 
} Pessoa; 
Pessoa SetPessoa(int idade, float peso, float altura){
Pessoa P;
P.Idade = idade;
P.Peso = peso;
P.Altura = altura;
return P; 
}

void ImprimePessoa(Pessoa P){ 
printf("Idade: %d Peso: %f Altura: %f\n", P.Idade, P.Peso, P.Altura);
}
int main()
{
Pessoa Joao;
Joao = SetPessoa(15,60.5,1.75);
ImprimePessoa(Joao);
return 0;
}