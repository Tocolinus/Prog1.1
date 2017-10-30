/*
Autor: David Gagliano Florencio
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
iDecisaoMenu = getch();
*/
// printf("A localidade corrente agora � %s \n",setlocale(LC_ALL,""));

int main(){


char nome[15], m1,m2[15],m3[15];
int ataque, vida, classe,decisao1,decisao2,restart;
int iDecisaoMenu;

m2[15] = 'n';

do{ //N�o se esque�a de fechar esse aqui no final

printf("",setlocale(LC_ALL,"")); //Para definir a lingua, mas n�o sei usar.
//_______________________________________________INTRODU��O-CARREGAMENTO__________________________________



printf("%s", m2);
printf("\n");
system("pause");
//Vou por o contador temporizador aqui



//_______________________________________________INTRODU��O-CARREGAMENTO__________________________________
//____________________________________________________TITULO______________________________________________

printf("\n\n______________________________________________________________________________\n");
printf("|||||||||||     ||                 |          ||   ||||        ||  |||||||||| \n");
printf("||         ||   ||                | |         ||   || ||       ||  ||         \n");
printf("||         ||   ||               |   |        ||   ||  ||      ||  ||         \n");
printf("||         ||   ||              |     |       ||   ||   ||     ||  ||         \n");
printf("|||||||||||     ||             |       |      ||   ||    ||    ||  |||||||||  \n");
printf("||         ||   ||            |||||||||||     ||   ||     ||   ||  ||         \n");
printf("||         ||   ||           |           |    ||   ||      ||  ||  ||         \n");
printf("||         ||   ||          |             |   ||   ||       || ||  ||         \n");
printf("|||||||||||     ||||||||   |               |  ||   ||        ||||  |||||||||| \n");
printf("______________________________________________________________________________\n\n\t\t");


system("pause");
system("cls");

//____________________________________________________TITULO______________________________________________
//__________________________________________________MENU__________________________________________________
MENUPRINCIPAL:
	system("cls");
printf("BLAINE RPG v0.3.2\n\n\n");
printf("1-Come�ar jogo\n");
printf("2-Configura��es\n");
printf("3-Cr�ditos\n");
printf("4-Sair\n");
scanf("%d", &iDecisaoMenu);

system("cls");
if (iDecisaoMenu == 1) goto GAMESTART;
if (iDecisaoMenu == 2) goto CONFIGURACOES;
else if (iDecisaoMenu == 3) goto CREDITOS;
else if (iDecisaoMenu == 4) exit(1);
//__________________________________________________MENU__________________________________________________
//____________________________________________________SUBMENU_____________________________________________

CONFIGURACOES: printf("\n\n\t\tAqui ficar� a dificuldade e o Load\n\n");
system("pause");
goto MENUPRINCIPAL;
CREDITOS: printf("\n\n\t\tCriador: David Gagliano Florencio\n\n");
system("pause");
goto MENUPRINCIPAL;
//____________________________________________________SUBMENU_____________________________________________

GAMESTART:
	
printf("Bem vindo!\nEsse � o mundo imaginario.\n Nosso her�i vive no vilarejo alfa e ir� para o castelo do demonio.\n"), m3;
printf("Entre com o nome do seu personagem:\n");

scanf("%s", nome);


printf("Escolha entre Aventureiro(1), Engenheiro(2), Arqueiro(3)\n");
scanf("%d", &classe );

ataque= classe*3;
vida= 50/classe;

printf("----------------------------------------------\n");
printf("%s | Ataque = %d | Vida = %d |\n", nome, ataque, vida);
printf("----------------------------------------------");

system("cls"); //Apaga as linhas anteriores

printf("\n%s saiu do vilarejo em busca de sua jornada...", nome);

printf("\n");//Simples pulador de linha
system("pause");//A��o para continuar a historia devagar
printf("\n");//Simples pulador de linha

printf("\nSeguindo seu caminho, andando tranquilamente com seus equipamentos, %s avista um monstro.\n", nome);
printf("Com extremo receio, nosso her�i se v� impotente diante do monstro.\n");
printf("Decis�o:\n Ir de encontro com o monstro.(1) | Pegar um contorno.(2)\n");
scanf("%d", &decisao1);

if (decisao1 == 1){


 //N�o esta funcionando bem do jeito que eu queria

 printf("\nO Mostro atacou, porem voce defendeu com o escudo");
 	printf("\nPredeu 5 vida");
 	vida=vida-5;
 	printf("\ntotal ###vida: %d ####",vida);


 printf("\nVoce esta de cara com o mostro... Deseja ataca-lo? (1)sim ou (2)nao: "); //Termos de condi��o
 scanf("%d",&decisao1);

 printf("\nVoce ganhou 10 vida");
 vida=vida+10;
 printf("\ntotal ###vida: %d ####",vida);
 printf("\nDeseja ataca-lo novamente ou usar o escudo? (1)atacar ou (2)escudo:");
 scanf("%d",&decisao1);
 printf("\nO mostro te atacou tambem e voce perdeu 10 vida");
 vida=vida-10;
 printf("\ntotal ###vida: %d ####",vida);
 printf("\nDeseja ataca-lo novamente ou usar o escudo? (1)atacar ou (2)escudo:");
 scanf("%d",&decisao1);
 printf("\nVenceu o mostro ganhou 20 vida");
 vida=vida+20;
 printf("\ntotal ###vida: %d ####",vida);

 }



 printf("Voc� pegou um caminho de terra em dire��o a montanha."); //Termos de condi��o


printf("\n");
system("PAUSE > NULL");

printf("\nSeguindo o caminho de terra. Ao olhar para esquerda, � poss�vel ver um vilarejo desconhecido.");
printf("Deseja ir no vilarejo?\n");
printf("Decis�o:\n Ir ao vilarejo.(1) | Continuar seguindo em frente.(2)\n");
scanf("%d", &decisao1);

if(decisao1 == 1) goto vilarejoestranho; //Mapa do vilarejo

vilarejoestranho0: printf("\nHavia alguma coisa estranha naquele lugar...\nAinda bem que evitamos ir l�.\n");

printf("\n");
system("PAUSE > NULL");
printf("\n");//Simples pulador de linha

printf("A estrada de terra acabou.\nLogo a frente h� uma montanha que parece cortar um bom caminho.\nNa direita h� uma mans�o de um duque, podemos tentar pedir estadia.\n");
printf("Decis�o:\nSubir a montanha(1) | Ir para mans�o(2)\n");
scanf("%d", &decisao1);

if(decisao1 ==2) goto mansaodomal;

mansaodomal0:

printf("Seguindo o caminho escalando a montanha, percebe que o clima ficou escuro.\n");
printf("O tempo fechou e estava prestes a chover\n");

system("PAUSE > NULL");

printf("� necess�rio encontrar um local para passar a tempestade!\n");
printf("H� um barraco logo a esquerda da montanha.\n");
printf("Decis�o:\nDar meia volta e ir para mans�o do duque (1) | Ir para esquerda e procurar por abrigo no barraco (2)\n");
scanf("%d", &decisao1);

if(decisao1 == 1) goto mansaodomal;
else if (decisao1 != 1) goto barracohumilde;










goto final;
//-------------------------------------------------------------------------------------CENARIOS
//-------------------------------------------------------------------------------------CENARIOS
vilarejoestranho:  printf("Chegando perto do vilarejo, %s sente um cheiro estranho.\n� possivel que seja de cad�ver.", nome);

printf("\n");//Simples pulador de linha
system("PAUSE > NULL");//A��o para continuar a historia devagar

printf("� possiv�l que tenha pistas do ocorrido dentro do vilarejo, mas muito arriscado...");
printf("Decis�o:\n Entrar no vilarejo mesmo assim(1) | Dar meia volta e continuar o caminho de onde parou (2)");
scanf("%d", &decisao2);

if(decisao2 ==2) goto vilarejoestranho0;
else (printf("Voc� foi avisado...\n"));
 goto MORREU;
//----------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------
mansaodomal: printf("Chegando perto da mans�o, aparentemente normal, ele para e reflete.\n");
printf("Nosso her�i fica observando se h� alguem morando na mans�o, mas aparenta estar abandonada.\n");
printf("\tDecis�o:\n Entrar na mansao(1) | Voltar e subir a montanha(2)\n");
scanf("%d", &decisao1);

	if(decisao1 == 2) goto mansaodomal0;
printf("Nosso her�i abriu a porta e adentrou ao local\n");
printf("Come�ou a andar pelos c�modos e achou um local bom para dormir\n");
printf("Parece que vai chover essa noite!\n");

printf("\n");
system("PAUSE > NULL");
printf("%s dormiu...", nome);
system("PAUSE > NULL");
printf("No meio da noite, %s ouviu um barulho dentro da mans�o", nome);
printf("");
//----------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------
barracohumilde: printf("%s chegou perto e viu luz acessa na janela\n", nome);
printf("\nDecis�o:\nBater na porta (1) | Voltar a subir a montanha (2)");
scanf("%d", &decisao1);

if (decisao1 == 2) {morreumontanha: printf("Voltando a subir a montanha, a chuva come�ou a cair...\n");
system("PAUSE > NULL");
printf("A chuva ficou muito forte!\n");
system("PAUSE > NULL");
printf("Houve um deslizamento na montanha e levou %s junto.\n", nome); goto MORREU;}


printf("\nUm senhor e sua esposa atendem a porta.\n");
system("PAUSE > NULL");
printf("Apesar de n�o ter muito espa�o, eles oferecem um lugar para passar a tempestade.\n");
printf("\nDecis�o:\nAgradecer e sair (1) | Ficar (2)");
scanf("%d", &decisao1);

if (decisao1 == 1) {printf ("\nDecis�o:\n Voltar e ir na mansao do duque (1) | Voltar a subir a montanha (2)");
scanf("%d", &decisao2);
if (decisao2 == 2) goto morreumontanha;
else if (decisao2 == 1) goto mansaodomal;
}
printf("%s dormiu no barraco");


//----------------------------------------------------------------------------------------------
//--------------------------------CENARIOS


//Finais do jogoo
MORREU: printf("\n\n\t\t Voc� morreu...\n\n");
final:
VIVEU: printf("\n\n\t\tEspere o pr�ximo cap�tulo. |:D|\n\n");
printf("\t\t\t\tDeseja tentar novamente?\n\t\t\t\tSIM(1) | N�O(2)\n\t\t\t\t\t");
scanf("%d", &restart);
printf("\n");
}
while (restart == 1);
system("PAUSE > NULL");
return 0;
}
