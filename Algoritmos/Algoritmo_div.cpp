 #include<stdio.h>                                //BIBBLIOTECA PARA USAR A FUN��O printf() E scanf()
 #include<stdlib.h>                               //BIBLIOTECA PARA USAR A FUN��O system()
 
 main()
   {  //ALGORITMO
       int n1, n2, d;                             //DECLARE N1, N2 E M NUM�RICO
       printf("informe 1o. numero: ");            //ESCREVA "INFORME O N�MERO:"
       scanf("%d", &n1);                          //LEIA N1
       printf("informe 2o. numero: ");            //ESCREVA "INFORME O N�MERO:"
       scanf("%d", &n2);                          //LEIA N2
       if (n2 == 0)                               //SE (N2=0)
       printf("Impossivel dividir\n");
       else                                       //SENAO
       {                                          //INICIO
           d=n1/n2;                               // D < n1 /n2
       printf("Resultado = %d\n",d);              //ESCREVA "Resultado"
       }                                          //FIM                 
       system ("PAUSE");                          //FUN��O PARA PAUSAR O PROGRAMA
   }  //FIM_ALGORITMO
     
       
       
       
