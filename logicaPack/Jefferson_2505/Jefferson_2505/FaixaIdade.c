#include<stdio.h>
//Comentario
main(){
     int F_1a15=0, F_16a30=0, F_31a45=0, F_46a60=0, Maior70=0, Idade=0;

     int cont=0;

     for (cont=1; cont <= 15; cont++){

          printf("\n Inf. idade ");
          scanf("%i", &Idade);
         
          if (Idade >= 1 && Idade <= 15){
               F_1a15++;
          }else if (Idade >= 16 && Idade <= 30){
               F_16a30++;
          }else if (Idade >= 31 && Idade <= 45){ 
               F_31a45++;      
          }else if (Idade >= 46 && Idade <= 60){ 
               F_46a60++;      
          } else if (Idade > 70){ 
               Maior70++;      
          }         
        
     }
          
     printf ("\n Qtde entre 1 a 15  ==> %i ", F_1a15);
     printf ("\n Qtde entre 16 a 30 ==> %i ", F_16a30);
     printf ("\n Qtde entre 31 a 45 ==> %i ", F_31a45);
     printf ("\n Qtde entre 46 a 60 ==> %i ", F_46a60);    
     printf ("\n Qtde maior 70      ==> %i ", Maior70); 
     
    system("pause"); 
}        
