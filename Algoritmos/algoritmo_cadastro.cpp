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
   printf("*  2)Alteração de dados           *\n");
   printf("*  3)Exclusão de cliente          *\n");
   printf("*  4)Pesquisa de cliente          *\n");
   printf("*  5)Relatório de cliente         *\n");
   printf("*  6)Configurações                *\n");
   printf("*  7)Finalizar o sistema          *\n");
   printf("***********************************\n");
   printf("Digite a opção desejada: ");
   scanf("%d",&op);
   switch(op)
   {    
            case 1: { printf("Você selecionou o cadastro cliente\n\n"); break; }
            case 2: { printf("Você selecionou a alteração de dados do cliente\n\n"); break; }
            case 3: { printf("Você selecionou a exclusão de cliente\n\n"); break; }
            case 4: { printf("Você selecionou a pesquisa de cliente\n\n"); break; }
            case 5: { printf("Você selecionou o relatório de cliente\n\n"); break; }
            case 6: { printf("Você selecionou configurações\n\n"); break; }
            case 7: { printf("Você selecionou finalizar o sistema\n\n"); break; }
            default:{ printf("Você selecionou a opção inexistente!!!\n\n"); break; }
   }
            system ("Pause");
}
