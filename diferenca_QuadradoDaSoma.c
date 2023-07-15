#include <stdio.h>
#include <math.h>


int main()
{
    int i;   // laço repetição
    int j;   // resultado soma dos quadrados
    int k;   // laço para quadrado da soma
    int l;   // resultado quadrado da soma
    int sub; // diferença entre resultados
    
    for (i = 1; i <= 100; i++){
        j += i * i;
      
    }
    for (i = 1; i <= 100; i++) {
        k += i;
        l = k * k;
    }
       
     printf("soma dos quadrados: \n");
     printf("%d ", j);
     printf("\nquadrado da soma : \n");
     printf("%d ", l);

   if ( l > j){
       sub = l - k;
       printf("\nO quadrado da soma é maior, a diferença entre os dois: \n");
       printf("%d ", sub);
   }
   if ( j > l){
       sub = j - l;
       printf("\nA soma dos dos quadrados é maior, a diferença entre os dois é: \n");
       printf("%d ", sub);
   }
   
    return 0;
}
