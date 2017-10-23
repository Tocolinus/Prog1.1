#include <stdio.h>
#include <string.h>
int main(){
char nome[20];
int tam, i, j=0, palindromo=1;

printf("\n Entre com um numero ou nome:");
scanf("%s", nome);

tam=strlen(nome);

printf("\nO nome da ordem reversa:");

for (i=tam-1; i>=0; i--)
{
    printf("%c", nome[i]);
    if (nome[i] != nome[j])
    {   palindromo = 0;  }
                j++;
}
if (palindromo == 1)
{
               printf("\nEsta palavra EH um palindromo");
               }
               else
               {
                   printf("\nEsta palavra NAO EH um palindromo");
                   }
printf("\n\n");
system("pause");
return 0;
}
