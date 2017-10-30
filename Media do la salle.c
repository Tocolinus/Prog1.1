#include <stdio.h>
#include <math.h>

 int main(){
     int av1,av2,av3,t1,t2,t3;
     int media = 0;
     printf("Entre com a AV1:");
     scanf("%d", &av1);
     printf("Entre com a AV2:");
     scanf("%d", &av2);
     printf("Entre com a AV3:\n [Use ZERO se não ter feito}\n");
     scanf("%d", &av3);
     {
     if(av3>av2){
     t1 = ((av1+av3)/2);
     media = t1;}
     else if (av3>av1){
          t2 = ((av3+av2)/2);
          media = t2;}
          else if((av3<av2)/2){
               t3=((av1+av2)/2);
               media = t3;}
               }
               {
                     if (media>= 6){printf("\nPassou!\n");}
                     else printf("\nReprovado!\n");
                     }
                     system ("pause");
                     return 0;
                     }
     
     
     
     
     
     
