#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
main ()
{
   setlocale(LC_ALL,"Portuguese");
   int a;
   printf("Digite um n�mero entre 1 e 7 para saber o dia da semana:\n");
   scanf("%d",&a);
   switch(a)
   {
            case 1: { printf("Domingo\n\n"); break; }
            case 2: { printf("Segunda-Feira\n\n"); break; }
            case 3: { printf("Ter�a-Feira\n\n"); break; }
            case 4: { printf("Quarta-Feira\n\n"); break; }
            case 5: { printf("Quinta-Feira\n\n"); break; }
            case 6: { printf("Sexta-Feira\n\n"); break; }
            case 7: { printf("S�bado\n\n"); break; }
            default:{ printf("Dia da semana inv�lido!!!\n\n"); break; }
   }
system ("Pause");
}             
