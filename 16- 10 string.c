#include <stdio.h>
#include <string.h>


int main()
{
    char nome[20];
    int volta, tam,i;
    
    do
    {
    printf("Qual o seu nome:\n");
    scanf("%s", nome);
    
    tam =  strlen(nome);
    
    printf("\nBoa noite %s\n", nome);
    printf("\nO seu nome tem %d caracteres\n", tam);
    
    
    printf("\nA primeira letra do seu nome eh \t%c", nome[0]);
    printf("\nA segunda letra do seu nome eh  \t%c", nome[1]);
    printf("\nA terceira letra do seu nome eh \t%c", nome[2]);
    printf("\nA quarta letra do seu nome eh   \t%c", nome[3]);
    printf("\nA quinta letra do seu nome eh   \t%c", nome[4]);
    printf("\nA sexta letra do seu nome eh    \t%c\n\n", nome[5]);
    {
    for(i=0; i<tam; i++)
    {
             printf("\n%c", nome[i]);
}}
printf("\n");
    printf("\nPressione 1 para voltar\n");
    scanf("%d", &volta);
}
while (volta == 1);

    system("pause");
    return 0;
}
