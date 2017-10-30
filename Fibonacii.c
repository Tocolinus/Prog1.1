#include <stdio.h>
#include <math.h>

 int main(){
     int an = 0, an1 = 1, ap, ate;
     printf("Fazer ate o numero: ");
     scanf("%d",&ate);
     printf("\n%d\n", an);
     
     {do
     {ap=(an+an1);
     printf("\n%d", ap);
 
 
     
     
     an1 = an;
     
     an = ap;
     }
     while( ate > ap);}
     
     system("pause");
     return 0;
     }
