 #include<stdio.h>                                //BIBBLIOTECA PARA USAR A FUN��O printf() E scanf()
 #include<stdlib.h>                               //BIBLIOTECA PARA USAR A FUN��O system()
 
 main()
   {  //ALGORITMO
       int n1, n2, m;                             //DECLARE N1, N2 E M NUM�RICO
       printf("informe 1o. numero: ");            //ESCREVA "INFORME O N�MERO:"
       scanf("%d", &n1);                          //LEIA N1
       printf("informe 2o. numero: ");            //ESCREVA "INFORME O N�MERO:"
       scanf("%d", &n2);                          //LEIA N2
       m = n1 * n2;                               //M < N1 * N2
       printf("Resultado = %d\n", m);             //ESCREVA "RESULTADO = "
       system ("PAUSE");                          //FUN��O PARA PAUSAR O PROGRAMA
   }  //FIM_ALGORITMO
     
       
       
       
