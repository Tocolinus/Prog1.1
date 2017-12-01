#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char nome[20];
    int i,j, tam;

    printf("Entre com seu nome:");
    scanf("%s", nome);

    tam = strlen(nome);

    int matA[tam][tam];
    int matB[tam][tam];
    int matC[tam][tam];


    printf("\nEntre com a matriz A:\n");

    for(i=0;i<tam;i++){
    for(j=0;j<tam;j++){
    printf("Entre com o termo %d - %d:", i+1,j+1);
    scanf("%d", &matA[i][j]);
    }}

    printf("\nEntre com a matriz B:\n");
    for(i=0;i<tam;i++){
    for(j=0;j<tam;j++){
    printf("Entre com o termo %d - %d:", i+1,j+1);
    scanf("%d", &matB[i][j]);
    }}

    printf("Matriz C:\n");
     for(i=0;i<tam;i++){
    for(j=0;j<tam;j++){
    matC[i][j] = matA[i][j] - matB[i][j];
    printf("%d", matC[i][j]);}
    printf("\n");}

    system("pause");
    return 0;
}


