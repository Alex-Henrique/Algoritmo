#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
main ()
{
   setlocale(LC_ALL,"Portuguese");
   float on1, n2, res;
   char op
   printf("\n\n\nCalculadora simples - Menu de op��es:\n\n\n");
   printf("***********************************\n");
   printf("*  +)Soma                         *\n");
   printf("*  -)Subtra��o                    *\n");
   printf("*  *)Multiplica��o                *\n");
   printf("*  /)Divis�o                      *\n");
   printf("*  p)Potencia��o                  *\n");
   printf("*  r)Raiz quadrada                *\n");
   printf("*  s)Sair do sistema              *\n");
   printf("***********************************\n");
   printf("Digite o primeiro valor: ");
   scanf("%f",&n1);
   printf("Digite o segundo valor valor: ");
   scanf("%f",&n2);
   printf("Digite a opera��o desejada: ");
   op = getche();
   switch(op)
   {              
            case '+': res = n1 + n2; { printf("\nSoma = %.1f\n\n",res); break; }
            case '-': res = n1 - n2; { printf("\nSubtra��o = %.1f\n\n",res); break; }
            case '*': res = n1 * n2; { printf("\nMultiplica��o = %.1f\n\n",res); break; }
            case '/': res = n1 / n2; if (n2 == 0){ printf("\nImposs�vel dividir\n\n") else { res = n1 / n2; printf("\nDivis�o = %.1f\n\n",res); } break; }
            case 'p': res = pow (n1,n2); { printf("\nPotencia��o = %.1f\n\n",res); break; }
            case 'r': res = sqrt (n1); { printf("\nRaiz quadrada do primeiro n�mero = %.1f\n\n",res); res = sqrt (n2); printf("\nRaiz quadrada do segundo n�mero = %.1f\n\n",res) break; }
            default:{ printf("Op��o inv�lida!!!\n\n"); break; }
   }    
            system ("Pause");
}     
