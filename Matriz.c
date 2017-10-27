#include<windows.h>
#include<stdio.h>
#include<stdlib.h>

int main(){
    int matA [3][3];
    int i;
    int j;
    
    for(i=0; i<3;i++){
    for (j=0;j<3;j++){
    printf("\nEntre com o elemento %d-%d : ", i,j);
     scanf("%d", &matA[i][j]);
    }}
    printf("\nA matriz lida eh:\n");
                 
    printf("|");
    for(i=0;i<3;i++){
                     printf("|");
    for(j=0;j<3;j++){
    printf("%d", matA[i][j]);
    
    }
    printf("|");
    printf("\n");
    
    }
    printf("\n");
    system("pause");
}
    
