#include<stdio.h>
main()
{
      int A[10], B[10];
      int cont;
      
      for(cont=0; cont < 10; cont++){
          printf("Informe um Valor Para o Elemento do Vetor A ");
          scanf("%d", &A[cont]);
          }
          
      for(cont=0; cont < 10; cont++){
          B[cont] = A[cont];
          }
          
      for(cont=0; cont < 10; cont++){
          printf("\n");
          printf("Valor do Vetor B %d ", B[cont]);
          }
          
      printf("\n\n");
      system("pause");

}
