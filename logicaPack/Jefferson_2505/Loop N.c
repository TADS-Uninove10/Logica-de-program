#include<stdio.h>
main()
{
    int V_Fim=0, Cont=0, Resto=0;

    printf("Por favor informe o valor final do loop");
    scanf("%i", &V_Fim);
    
    for (Cont=1; Cont<=V_Fim ;Cont++ ){
        Resto = Cont % 2;
        if (Resto == 1){
 	         printf("\n Numero  %i", Cont);
        } //fecha o if
    }// fecha o for 
    printf ("\n\n");
    system("pause");
}
