//Pesquisado da internet
//https://pt.wikihow.com/Fazer-um-Delay-em-C
#include <STDIO.H>
#include <TIME.H>
 
int main()
{
int i;
for(i = 100; i >= 0; i--)
{
printf("%i\n",i); // Escreve na tela o número atual da 'contagem'
sleep(1); // Espera 1 segundo
}
return 0;
}
