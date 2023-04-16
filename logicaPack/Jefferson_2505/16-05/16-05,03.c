#include<stdio.h>
main()
{
      
      float n1,n2,n3,n4,media;
      char tot;
      tot='S'; 
      while(tot=='S'||tot=='s'){
      system("cls");
      printf ("\n inf valor de n1 ");
      scanf ("%f",  &n1);
      printf ("\n inf valor de n2 ");
      scanf ("%f", &n2);
      printf ("\n inf valor de n3 ");
      scanf ("%f",&n3);
      printf ("\n inf valor de n4 ");
      scanf ("%f",&n4);
      media=((n1+n2+n3+n4)/4);
      if(media>=5){
      printf("\n aluno aprovado%.2f",media);
      }else if (media<5){
      printf("\n aluno reprovado %.2f",media); 
      }
      printf("\n\n deseja continuar (s)im ou (n)ao");
      scanf("%s",&tot);
      }
      }                                            
