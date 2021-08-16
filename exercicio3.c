#include <stdio.h>
 
void calc_soma(int *mat_A, int *mat_B, int *mat_C){ //parametros para receber a referencia aos enderecos das matrizes
   for(int i = 0; i < 4; i++){ //loop para as linhas
       for(int j = 0; j < 4; j++){ //loop para as colunas
           mat_C[i*4+j] = mat_A[i*4+j] + mat_B[i*4+j]; //somando respectivos elementos em linhas e colunas e atribuindo resultado a matriz C
       }
   }
}
 
int main(){
   int mA[4][4],mB[4][4],mC[4][4]; //declarando matrizes bases
 
   printf("Insira os números da matriz A\n\n");
   // loop para armazenar os números inseridos pelo usuário
   for(int i = 0; i < 4; i++){ //loop para linhas
       for(int j = 0; j < 4; j++){ //loop para colunas
           printf("Insira o num da linha -> %d; coluna -> %d: ",i+1,j+1); //mostrando informações de onde estão posicionadas a informação em que o usuário irá preencher
           scanf("%d", &mA[i][j]);  //#armazenando valores na matriz A
           if(mA[i][j]< 0){ //verificando se o valor digitado pelo usuário é negativo
               return 0; //encerra o programa
           }
       }
 
   }
   //repetindo a mesma operacao acima com a matriz B
   printf("\nInsira os números da matriz B\n\n");
   for(int i = 0; i < 4; i++){
       for(int j = 0; j < 4; j++){
           printf("Insira o elemento da linha -> %d coluna -> %d: ",i+1,j+1);
           scanf("%d", &mB[i][j]);
           if(mB[i][j]< 0){
               return 0;
           }
       }
 
   }
   printf("\nSomando matrizes A e B...\n");
   calc_soma(&mA,&mB,&mC); //direcionando programa para a função de soma
   printf("\nExibindo resultado na MATRIZ C\n\n");
   //loop para mostrar a matriz C na tela
   for(int i = 0; i < 4; i++){ //loop para controlar linhas
       for(int j = 0; j < 4; j++){ // loop para controlar colunas
           printf(" %d", mC[i][j]); //mostrando na tela elemento a elemento
       }
       printf("\n");
   }
   printf("\n\n");
   return 0;
}
