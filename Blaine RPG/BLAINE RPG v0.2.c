/*
David Gagliano
*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <unistd.h>
#include <time.h> //Tentativa de usar um comando para esperar.
#include <stdlib.h>
#include <locale.h> //necess�rio para usar setlocale.

/*
m1=Lestrigones;
m2=Godizika;
m3=Ness;
N�o estou conseguindo colocar os nomes dos monstros
*/
// printf("A localidade corrente agora � %s \n",setlocale(LC_ALL,""));

int main(){
char nome[15], m1,m2[15],m3[15];
int ataque, vida, classe,decisao1,decisao2;


printf("",setlocale(LC_ALL,"")); //Para definir a lingua, mas n�o sei usar.

printf("Bem vindo!\nEsse � o mundo imaginario.\n Nosso her�i vive no vilarejo alfa e ir� para o castelo do demonio.\n"), m3;
printf("Entre com o nome do seu personagem:\n");

scanf("%s", &nome);


printf("Escolha entre Aventureiro(1), Engenheiro(2), Arqueiro(3)\n");
scanf("%d", &classe );

ataque= classe*3;
vida= 50/classe;

printf("----------------------------------------------\n");
printf("%s | Ataque = %d | Vida = %d |\n", nome, ataque, vida);
printf("----------------------------------------------");

printf("\n%s saiu do vilarejo em busca de sua jornada...", nome);

printf("\n");//Simples pulador de linha
system("pause");//A��o para continuar a historia devagar

printf("\nSeguindo seu caminho, andando tranquilamente com seus equipamentos, %s avista um monstro.\n", nome);
printf("Com extremo receio, nosso her�i se v� impotente diante do monstro.\n");
printf("Decis�o:\n Ir de encontro com o monstro.(1) | Pegar um contorno.(2)\n");
scanf("%d", &decisao1);

if (decisao1 == 1) goto MORREU; //Termos de condi��o
else (printf("Voc� pegou um caminho de terra em dire��o a montanha.")); //Termos de condi��o

printf("\n");
system("pause");

printf("\nSeguindo o caminho de terra. Ao olhar para esquerda, � poss�vel ver um vilarejo desconhecido.");
printf("Deseja ir no vilarejo?");
printf("Decis�o:\n Ir ao vilarejo.(1) | Continuar seguindo em frente.(2)\n");
scanf("%d", &decisao1);

if(decisao1 == 1) goto vilarejoestranho; //Mapa do vilarejo

vilarejoestranho0: printf("\nHavia alguma coisa estranha naquele lugar...\nAinda bem que evitamos ir l�.\n");

printf("\n");
system("pause");
printf("\n");//Simples pulador de linha

printf("A estrada de terra acabou.\nLogo a frente h� uma montanha que parece cortar um bom caminho.\nNa direita h� uma mans�o de um duque, podemos tentar pedir estadia.\n");
printf("Decis�o:\nSubir a montanha(1) | Ir para mans�o(2)\n");
scanf("%d", &decisao1);

if(decisao1 ==2) goto mansaodomal;

mansaodomal0:
	
printf("Seguindo o caminho escalando a montanha, percebe que o clima ficou escuro.\n");
printf("O tempo fechou e estava prestes a chover\n");











goto final;
//--------------------------------CENARIOS
vilarejoestranho:  printf("Chegando perto do vilarejo, nosso her�i sente um cheiro estranho.\n� possivel que seja de cad�ver.");

printf("\n");//Simples pulador de linha
system("pause");//A��o para continuar a historia devagar

printf("� possiv�l que tenha pistas do ocorrido dentro do vilarejo, mas muito arriscado...");
printf("Decis�o:\n Entrar no vilarejo mesmo assim(1) | Dar meia volta e continuar o caminho de onde parou (2)");
scanf("%d", &decisao2);

if(decisao2 ==2) goto vilarejoestranho0;
else (printf("Voc� foi avisado...\n"));
 goto MORREU;
//----------------------------------------------------------------------------------------------
mansaodomal: printf("Chegando perto da mans�o, aparentemente normal, ele para e reflete.\n");
printf("Nosso her�i fica observando se h� alguem morando na mans�o, mas aparenta estar abandonada.\n");
printf("\tDecis�o:\n Entrar na mansao(1) | Voltar e subir a montanha(2)\n");
scanf("%d", &decisao1);
	
	if(decisao1 == 2) goto mansaodomal0;
printf("Nosso her�i abriu a porta e adentrou ao local\n");
printf("Come�ou a andar pelos c�modos e achou um local bom para dormir\n");
printf("Parece que vai chover essa noite!\n");
//----------------------------------------------------------------------------------------------
//--------------------------------CENARIOS

//Finais do jogoo
final:
MORREU: printf("\n\n\t\t Voc� morreu...\n\n");
VIVEU: printf("\n\n\t\tEspere o pr�ximo cap�tulo. |:D|\n\n");

system("pause");
return 0;
}
