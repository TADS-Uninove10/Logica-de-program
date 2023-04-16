#include<stdio.h>
main(){
       float n1,n2,n3,n4,media;
       char Resp;
       Resp = 'S';
       
       while (Resp == 'S' || Resp == 's'){
           system ("cls");
           printf("\n Inf. n1  ");
           scanf("%f", &n1);

           printf("\n Inf. n2  ");
           scanf("%f", &n2);

           printf("\n Inf. n3  ");
           scanf("%f", &n3);

           printf("\n Inf. n4  ");
           scanf("%f", &n4);
           media = ((n1+n2+n3+n4)/4);
           if (media < 5){
               printf("\n Aluno Reprovado");
           } else {
               printf("\n Aluno Aprovado");
           }
printf ("\n\n Deseja continuar (S)im ou (N)ao ");
           
           scanf ("%s", &Resp);
       }
}






