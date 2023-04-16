#include<stdio.h>
main()
{
     int cont, soma=0;
     for (cont=0; cont <= 100; cont++){
           soma = soma + cont;
          printf ("\n cont %i", cont);    
     }
     printf ("Total da soma %i", soma);
     printf ("\n");
     system("pause");   
}
