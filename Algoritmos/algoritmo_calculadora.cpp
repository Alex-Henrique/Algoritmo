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
   printf("\n\n\nCalculadora simples - Menu de opções:\n\n\n");
   printf("***********************************\n");
   printf("*  +)Soma                         *\n");
   printf("*  -)Subtração                    *\n");
   printf("*  *)Multiplicação                *\n");
   printf("*  /)Divisão                      *\n");
   printf("*  p)Potenciação                  *\n");
   printf("*  r)Raiz quadrada                *\n");
   printf("*  s)Sair do sistema              *\n");
   printf("***********************************\n");
   printf("Digite o primeiro valor: ");
   scanf("%f",&n1);
   printf("Digite o segundo valor valor: ");
   scanf("%f",&n2);
   printf("Digite a operação desejada: ");
   op = getche();
   switch(op)
   {              
            case '+': res = n1 + n2; { printf("\nSoma = %.1f\n\n",res); break; }
            case '-': res = n1 - n2; { printf("\nSubtração = %.1f\n\n",res); break; }
            case '*': res = n1 * n2; { printf("\nMultiplicação = %.1f\n\n",res); break; }
            case '/': res = n1 / n2; if (n2 == 0){ printf("\nImpossível dividir\n\n") else { res = n1 / n2; printf("\nDivisão = %.1f\n\n",res); } break; }
            case 'p': res = pow (n1,n2); { printf("\nPotenciação = %.1f\n\n",res); break; }
            case 'r': res = sqrt (n1); { printf("\nRaiz quadrada do primeiro número = %.1f\n\n",res); res = sqrt (n2); printf("\nRaiz quadrada do segundo número = %.1f\n\n",res) break; }
            default:{ printf("Opção inválida!!!\n\n"); break; }
   }    
            system ("Pause");
}     
