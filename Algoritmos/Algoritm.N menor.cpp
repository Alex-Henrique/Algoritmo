 #include<stdio.h>                                
 #include<stdlib.h>                               
 #include<locale.h>  
 #include<math.h>                             
 main()
   {  
   setlocale(LC_ALL,"Portuguese");
   system("color 71");
      int n1, n2, n3, n4;                              
   printf("digite o numero: ");
   scanf ("%d",&n1);
   printf("digite o numero: ");
   scanf ("%d",&n2);
   printf("digite o numero: ");
   scanf ("%d",&n3);
   printf("digite o numero: ");
   scanf ("%d",&n4);
       if (n1 <= n2 && n1<= n3 && n1 <= n4)
       printf ("n1 menor");
       
   system("Pause");
}
