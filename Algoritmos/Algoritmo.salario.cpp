 #include<stdio.h>                                //BIBBLIOTECA PARA FUN��O printf() E scanf()
 #include<stdlib.h>                               //BIBLIOTECA PARA FUN��O system()
 #include<locale.h>                               //BIBLIOTECA PARA FUN��O set_locale()
 main()
   {  //ALGORITMO
   setlocale(LC_ALL,"Portuguese");
   system("color 71");
   float sal_atual, novo_sal;                     //ESCREVA "informe o salario atual:"   
   printf ("informe o sal�rio atual: ");
   scanf ("%f",&sal_atual);                       //LEIA sal_atual
   if (sal_atual < 0)                             //SE (SAL_ATUAL < 0)
      printf("sal�rio inv�lido\n");               //ENTAO ESCREVA "salario invalido"
   else                                           //SENAO
   {                                              //INICIO
       if (sal_atual > 500)                       //SE (SAL_ATUAL > 500)
       novo_sal = sal_atual * 1.10;               //ENTAO NOVO_SAL < SAL ATUAL * 1,10
       else                                       //SENAO
       novo_sal = sal_atual * 1.20;               //ENTAO NOVO SAL < SAL_ATUAL * 1,20
       printf("sal�rio novo = %.2f\n", novo_sal); //ESCREVA "salario novo = ", novo_sal
       }                                          //FIM 
   system ("PAUSE");                              //FUN��O PARA PAUSAR O PROGRAMA
   }  //FIM_ALGORITMO                             
