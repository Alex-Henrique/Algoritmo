 #include<stdio.h>                                //BIBLIOTECA PARA USAR A FUN��O printf() E scanf()
 #include<stdlib.h>                               //BIBLIOTECA PARA USAR A FUN��O system()
 
 main()
   {  //ALGORITMO
       float n1, n2, m;                           //DECLARE N1, N2 E M NUM�RICO
       printf("informe 1o. numero: ");            //ESCREVA "INFORME O N�MERO:"
       scanf("%f", &n1);                          //LEIA N1
       printf("informe 2o. numero: ");            //ESCREVA "INFORME O N�MERO:"
       scanf("%f", &n2);                          //LEIA N2
       if (n1>10 || n1 < 0 || n2 > 10 || n2 < 0 ) //M < N1 * N2
       printf("notas invalidas");                 //ENTAO ESCREVA "NOTAS"
       else                                       //SENAO
       {                                          //INICIO
           m = (n1 + n2) /2;                      //M < (N1 + N2) /2
           printf("Media = %2.1f\n",m);           //ESCREVA A MEDIA = ",M
           if (m >= 6)                            //SE (M >=6)
           printf( "Aprovado\n");                 //ESCREVA "APROVADO          
       else                                       //SENAO      
           printf("Reprovado\n");                 //ESCREVA "REPROVADO
           }                                      //ESCREVA "RESULTADO = "
       system ("PAUSE");                          //FUN��O PARA PAUSAR O PROGRAMA
   }  //FIM_ALGORITMO
     
       
       
       
