#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
main ()
{
   setlocale(LC_ALL,"Portuguese");
   int a;
   printf("Digite um n�mero entre 1 e 12 para saber o dia do m�s:\n");
   scanf("%d",&a);
   switch(a)
   {
            case 1: { printf("Janeiro\n\n"); break; }
            case 2: { printf("Fevereiro\n\n"); break; }
            case 3: { printf("Mar�o\n\n"); break; }
            case 4: { printf("Abril\n\n"); break; }
            case 5: { printf("Maio\n\n"); break; }
            case 6: { printf("Junho\n\n"); break; }
            case 7: { printf("Julho\n\n"); break; }
            case 8: { printf("Agosto\n\n"); break; }
            case 9: { printf("Setembro\n\n"); break; }
            case 10: { printf("Outubro\n\n"); break; }
            case 11: { printf("Novembro\n\n"); break; }
            case 12: { printf("Dezembro\n\n"); break; }
            default:{ printf("Dia do m�s inv�lido!!!\n\n"); break; }
   }
            system ("Pause");
}  
