#include<stdio.h>
main()
{
      int A[10];
      int Cont, Resto, SomaP, SomaI=0;
      
      for(Cont=1; Cont <= 10; Cont++){
          printf("Informe o Valor ");
          scanf("%d", &A[Cont]);
          }
          
// Números Pares          

      for (Cont=1; Cont<=10 ;Cont++ ){
          Resto = Cont % 2;
          if (Resto == 0){
          printf("\n");
          printf("Numero %i", Cont);
          SomaP = (SomaP + Cont);
          }
          }
      
      printf("\n\n");
      printf("A soma dos numeros e %i ", SomaP);
      printf("\n\n");
      
// Números Impares
      
      for (Cont=1; Cont<=10 ;Cont++ ){
          Resto = Cont % 2;
          if (Resto == 1){
          printf("\n");
          printf("Numero %i", Cont);
          SomaI = (SomaI + Cont);
          }
          }
          
      printf("\n\n");
      printf("A soma dos numeros e %i ", SomaI);
      printf("\n\n");
          
      system("pause");
          
}
