#include <stdio.h>
 
 
 
int main(){
   //criando a estrutura para armazenar dados do funcionário
   struct cadastro{
 
       char funcionario[50];
       float salario;
 
 
   };struct cadastro pessoa, *pPessoa; //declarando variável e ponteiros da struct
   pPessoa = &pessoa; //colocando ponteiro para apontar para a variável da struct
 
   float aliquota = 0;
   //capturando dados do usuário
   printf("Digite seu nome: ");
   fgets(pessoa.funcionario,50,stdin);
   //limpando buffer do teclado para remover o '\n'
 
 
 
   printf("Digite seu salário: ");
