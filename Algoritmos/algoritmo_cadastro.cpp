#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
main ()
{
   setlocale(LC_ALL,"Portuguese");
   int op;
   printf("\n\n\nSistemas de controle de clientes:\n\n\n");
   printf("***********************************\n");
   printf("*  1)Cadastro de cliente          *\n");
   printf("*  2)Altera��o de dados           *\n");
   printf("*  3)Exclus�o de cliente          *\n");
   printf("*  4)Pesquisa de cliente          *\n");
   printf("*  5)Relat�rio de cliente         *\n");
   printf("*  6)Configura��es                *\n");
   printf("*  7)Finalizar o sistema          *\n");
   printf("***********************************\n");
   printf("Digite a op��o desejada: ");
   scanf("%d",&op);
   switch(op)
   {    
            case 1: { printf("Voc� selecionou o cadastro cliente\n\n"); break; }
            case 2: { printf("Voc� selecionou a altera��o de dados do cliente\n\n"); break; }
            case 3: { printf("Voc� selecionou a exclus�o de cliente\n\n"); break; }
            case 4: { printf("Voc� selecionou a pesquisa de cliente\n\n"); break; }
            case 5: { printf("Voc� selecionou o relat�rio de cliente\n\n"); break; }
            case 6: { printf("Voc� selecionou configura��es\n\n"); break; }
            case 7: { printf("Voc� selecionou finalizar o sistema\n\n"); break; }
            default:{ printf("Voc� selecionou a op��o inexistente!!!\n\n"); break; }
   }
            system ("Pause");
}
