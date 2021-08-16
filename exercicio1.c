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
   scanf("%f",&pessoa.salario);
 
   //calculando alíquota baseada no salário
   if(pPessoa->salario >=0 &&pPessoa->salario <= 1903.98){
       aliquota = 0;
   }else{
       if(pPessoa->salario <= 2826.65){
           aliquota = 7.5;
       }else{
           if(pPessoa->salario <= 3751.05){
               aliquota = 15.0;
           }else{
               if(pPessoa->salario <= 4664.68){
                   aliquota = 22.5;
               }else{
                   aliquota = 27.5;
               }
           }
       }
   }
   //Exibindo todos as informações e calculando valor a ser deduzido do salário
   printf("Nome do funcionario: %sSalario: %.2f\nAliquota: %.1f\nValor a ser deduzido do salario: %.2f\n\n", pPessoa->funcionario,pPessoa->salario,aliquota, (pPessoa->salario*aliquota/100));
 
 
 
}

