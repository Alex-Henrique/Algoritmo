 #include<stdio.h>                                //BIBBLIOTECA PARA FUNÇÃO printf() E scanf()
 #include<stdlib.h>                               //BIBLIOTECA PARA FUNÇÃO system()
 #include<locale.h>                               //BIBLIOTECA PARA FUNÇÃO set_locale()
 main()
   {  //ALGORITMO
   setlocale(LC_ALL,"Portuguese");
   system("color 71");
   float sal_atual, novo_sal;                     //ESCREVA "informe o salario atual:"   
   printf ("informe o salário atual: ");
   scanf ("%f",&sal_atual);                       //LEIA sal_atual
   if (sal_atual < 0)                             //SE (SAL_ATUAL < 0)
      printf("salário inválido\n");               //ENTAO ESCREVA "salario invalido"
   else                                           //SENAO
   {                                              //INICIO
       if (sal_atual > 500)                       //SE (SAL_ATUAL > 500)
       novo_sal = sal_atual * 1.10;               //ENTAO NOVO_SAL < SAL ATUAL * 1,10
       else                                       //SENAO
       novo_sal = sal_atual * 1.20;               //ENTAO NOVO SAL < SAL_ATUAL * 1,20
       printf("salário novo = %.2f\n", novo_sal); //ESCREVA "salario novo = ", novo_sal
       }                                          //FIM 
   system ("PAUSE");                              //FUNÇÃO PARA PAUSAR O PROGRAMA
   }  //FIM_ALGORITMO                             
