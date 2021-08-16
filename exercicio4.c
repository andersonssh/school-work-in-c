#include <stdio.h>
int calc_potencia(int base, int expoente){
   if (expoente <= 1)//quando o expoente for 1 ele encerra a funcao recursiva retornando para os blocos anteriores a base
       return base;
   return base * calc_potencia(base,--expoente);//diminui o expoente para servir de criterio para fim da função recursiva
}
int main(){
   int base, expoente, resultado; // incia variaveis
   printf("Insira a base: ");
   scanf("%d",&base); // armazena número da base
   printf("Insira o expoente: ");
   scanf("%d",&expoente); //armazena número do expoente
   resultado = calc_potencia(base,expoente); //atribui o resultado da função a variavel resultado
   printf("O resultado é: %d\n\n", resultado); // mostra o resultado
   return 0;
}
