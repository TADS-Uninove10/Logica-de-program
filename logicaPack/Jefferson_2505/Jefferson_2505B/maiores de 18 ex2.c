#include<stdio.h>

main()
{
     int Idade=0, maior=0;
     int cont=0;
     
     for (cont=1; cont <= 15; cont++){

          printf("\n Inf. idade ");
          scanf("%i", &Idade);
          
               if (Idade >=18){
               maior++;
               }
               }
               
          
          printf ("%i maiores de 18 \n ", maior);


          
    system("pause"); 
}        

      
      
      
      
      
