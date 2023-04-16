#include<stdio.h>
main()
{
     float N1, N2, Soma;
     char Resp;
     Resp = 's';
     
     while (Resp == 'S' || Resp == 's') {
          system ("cls");
          printf ("\n Inf. valor de N1 ");
          scanf ("%f", &N1);
     
          printf ("\n Inf. valor de N2 ");
          scanf ("%f", &N2);
     
          Soma = N1 + N2;
     
     printf ("\n Soma total %.2f ", Soma);
printf ("\n \n Deseja continuar (S)im ou (N)ao");
scanf("%s", &Resp);
     }
}    






