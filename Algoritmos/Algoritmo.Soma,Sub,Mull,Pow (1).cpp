 #include<stdio.h>                                
 #include<stdlib.h>                               
 #include<locale.h>  
 #include<math.h>                             
 main()
   {  
   setlocale(LC_ALL,"Portuguese");
   system("color 71");
      float a, b, result;                              
   printf("Informe o 1o. n�mero: ");
   scanf ("%f",&a);                               
   printf("Informe o 2o. n�mero: ");                  
   scanf ("%f",&b);                                    
   result = a + b;
   printf("Soma = %.2f\n",result); 
   result = a - b; 
   printf("Subtra��o = %.2f\n",result);    
   result = a * b;  
   printf("Multiplica��o = %.2f\n",result);       
      if (b == 0) 
   printf("Impossivel dividir por zero!!\n\n"); 
      else
   {
      result = a / b;
   printf("Divis�o = %.2f\n",result); 
   }
      result = pow(a,b);
   printf("Potencia��o = %.2f\n",result); 
   system("Pause");
}
