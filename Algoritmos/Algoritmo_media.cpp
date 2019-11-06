 #include<stdio.h>                                //BIBLIOTECA PARA USAR A FUNÇÃO printf() E scanf()
 #include<stdlib.h>                               //BIBLIOTECA PARA USAR A FUNÇÃO system()
 
 main()
   {  //ALGORITMO
       float n1, n2, m;                           //DECLARE N1, N2 E M NUMÉRICO
       printf("informe 1o. numero: ");            //ESCREVA "INFORME O NÚMERO:"
       scanf("%f", &n1);                          //LEIA N1
       printf("informe 2o. numero: ");            //ESCREVA "INFORME O NÚMERO:"
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
       system ("PAUSE");                          //FUNÇÃO PARA PAUSAR O PROGRAMA
   }  //FIM_ALGORITMO
     
       
       
       
