#include <stdio.h>
 
int main(){
   char ru[7];//criando array para armazenar o RU
   char *pRu; // criando ponteiro para apontar para o array do RU
   pRu = ru; //apontando pRu para o vetor ru
   printf("Digite seu RU: ");
   fgets(ru, 8, stdin);//Recebendo RU do usuario
   int soma = 0; //variavel que ira guardar a soma de todos os algarismos do RU
   for(int i = 0; i < 7; i++){
       soma += *pRu++ - '0';//somando todos os elementos no array
   }
   printf("\nA soma de todos os algarismos resulta em %d\n", soma);//exibindo resultado
 
   return 0;
}
