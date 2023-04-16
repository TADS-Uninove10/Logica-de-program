#include<stdio.h>

main()
{
    // int voto;  
    int  voto=0, c1=0, c2=0, c3=0, c4=0, vn5=0, vb6=0,vv=0;    
    //int cont=0;
    char resp ;
    resp ='s';
    while (resp=='S' || resp== 's'){
    system("cls");
   
          printf("\n Informe o numero do candidato");
          scanf("%i", &voto);
          if (voto == 1){
              c1++;
          }else if (voto == 2){
               c2++;
          }else if (voto ==3){
               c3++;
          }else if (voto == 4){
               c4++;
          } else if (voto ==5){
               vn5++;
          } else if (voto ==6){
               vb6++;
              
          }
     printf ("\n Qtde de candidato 1 ==> %i ", c1);
     printf ("\n Qtde de candidato 2 ==> %i ", c2);
     printf ("\n Qtde de candidato 3 ==> %i ", c3);
     printf ("\n Qtde de candidato 4 ==> %i ", c4);
     printf ("\n Qtde de votos nulos ==> %i ", vn5);
     printf ("\n Qtde de votos em branco==> %i ", vb6);
     
    printf ("\n deseja continuar sim (s) nao (n)");
    scanf ("%s" , &resp);
     }
}
 

