/*
Autor: David Gagliano Florencio
*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <unistd.h>
#include <time.h> //Tentativa de usar um comando para esperar.
#include <stdlib.h>
#include <locale.h> //necessário para usar setlocale.

/*
m1=Lestrigones;
m2=Godizika;
m3=Ness;
Não estou conseguindo colocar os nomes dos monstros
iDecisaoMenu = getch();
*/
// printf("A localidade corrente agora é %s \n",setlocale(LC_ALL,""));

int main(){


char nome[15], m1,m2[15],m3[15];
int ataque, vida, classe,decisao1,decisao2,restart;
int iDecisaoMenu;

m2[15] = 'n';

do{ //Não se esqueça de fechar esse aqui no final

printf("",setlocale(LC_ALL,"")); //Para definir a lingua, mas não sei usar.
//_______________________________________________INTRODUÇÃO-CARREGAMENTO__________________________________



printf("%s", m2);
printf("\n");
system("pause");
//Vou por o contador temporizador aqui



//_______________________________________________INTRODUÇÃO-CARREGAMENTO__________________________________
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
printf("1-Começar jogo\n");
printf("2-Configurações\n");
printf("3-Créditos\n");
printf("4-Sair\n");
scanf("%d", &iDecisaoMenu);

system("cls");
if (iDecisaoMenu == 1) goto GAMESTART;
if (iDecisaoMenu == 2) goto CONFIGURACOES;
else if (iDecisaoMenu == 3) goto CREDITOS;
else if (iDecisaoMenu == 4) exit(1);
//__________________________________________________MENU__________________________________________________
//____________________________________________________SUBMENU_____________________________________________

CONFIGURACOES: printf("\n\n\t\tAqui ficará a dificuldade e o Load\n\n");
system("pause");
goto MENUPRINCIPAL;
CREDITOS: printf("\n\n\t\tCriador: David Gagliano Florencio\n\n");
system("pause");
goto MENUPRINCIPAL;
//____________________________________________________SUBMENU_____________________________________________

GAMESTART:
	
printf("Bem vindo!\nEsse é o mundo imaginario.\n Nosso herói vive no vilarejo alfa e irá para o castelo do demonio.\n"), m3;
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
system("pause");//Ação para continuar a historia devagar
printf("\n");//Simples pulador de linha

printf("\nSeguindo seu caminho, andando tranquilamente com seus equipamentos, %s avista um monstro.\n", nome);
printf("Com extremo receio, nosso herói se vê impotente diante do monstro.\n");
printf("Decisão:\n Ir de encontro com o monstro.(1) | Pegar um contorno.(2)\n");
scanf("%d", &decisao1);

if (decisao1 == 1){


 //Não esta funcionando bem do jeito que eu queria

 printf("\nO Mostro atacou, porem voce defendeu com o escudo");
 	printf("\nPredeu 5 vida");
 	vida=vida-5;
 	printf("\ntotal ###vida: %d ####",vida);


 printf("\nVoce esta de cara com o mostro... Deseja ataca-lo? (1)sim ou (2)nao: "); //Termos de condição
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



 printf("Você pegou um caminho de terra em direção a montanha."); //Termos de condição


printf("\n");
system("PAUSE > NULL");

printf("\nSeguindo o caminho de terra. Ao olhar para esquerda, é possível ver um vilarejo desconhecido.");
printf("Deseja ir no vilarejo?\n");
printf("Decisão:\n Ir ao vilarejo.(1) | Continuar seguindo em frente.(2)\n");
scanf("%d", &decisao1);

if(decisao1 == 1) goto vilarejoestranho; //Mapa do vilarejo

vilarejoestranho0: printf("\nHavia alguma coisa estranha naquele lugar...\nAinda bem que evitamos ir lá.\n");

printf("\n");
system("PAUSE > NULL");
printf("\n");//Simples pulador de linha

printf("A estrada de terra acabou.\nLogo a frente há uma montanha que parece cortar um bom caminho.\nNa direita há uma mansão de um duque, podemos tentar pedir estadia.\n");
printf("Decisão:\nSubir a montanha(1) | Ir para mansão(2)\n");
scanf("%d", &decisao1);

if(decisao1 ==2) goto mansaodomal;

mansaodomal0:

printf("Seguindo o caminho escalando a montanha, percebe que o clima ficou escuro.\n");
printf("O tempo fechou e estava prestes a chover\n");

system("PAUSE > NULL");

printf("É necessário encontrar um local para passar a tempestade!\n");
printf("Há um barraco logo a esquerda da montanha.\n");
printf("Decisão:\nDar meia volta e ir para mansão do duque (1) | Ir para esquerda e procurar por abrigo no barraco (2)\n");
scanf("%d", &decisao1);

if(decisao1 == 1) goto mansaodomal;
else if (decisao1 != 1) goto barracohumilde;










goto final;
//-------------------------------------------------------------------------------------CENARIOS
//-------------------------------------------------------------------------------------CENARIOS
vilarejoestranho:  printf("Chegando perto do vilarejo, %s sente um cheiro estranho.\nÉ possivel que seja de cadáver.", nome);

printf("\n");//Simples pulador de linha
system("PAUSE > NULL");//Ação para continuar a historia devagar

printf("É possivél que tenha pistas do ocorrido dentro do vilarejo, mas muito arriscado...");
printf("Decisão:\n Entrar no vilarejo mesmo assim(1) | Dar meia volta e continuar o caminho de onde parou (2)");
scanf("%d", &decisao2);

if(decisao2 ==2) goto vilarejoestranho0;
else (printf("Você foi avisado...\n"));
 goto MORREU;
//----------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------
mansaodomal: printf("Chegando perto da mansão, aparentemente normal, ele para e reflete.\n");
printf("Nosso herói fica observando se há alguem morando na mansão, mas aparenta estar abandonada.\n");
printf("\tDecisão:\n Entrar na mansao(1) | Voltar e subir a montanha(2)\n");
scanf("%d", &decisao1);

	if(decisao1 == 2) goto mansaodomal0;
printf("Nosso herói abriu a porta e adentrou ao local\n");
printf("Começou a andar pelos cômodos e achou um local bom para dormir\n");
printf("Parece que vai chover essa noite!\n");

printf("\n");
system("PAUSE > NULL");
printf("%s dormiu...", nome);
system("PAUSE > NULL");
printf("No meio da noite, %s ouviu um barulho dentro da mansão", nome);
printf("");
//----------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------
barracohumilde: printf("%s chegou perto e viu luz acessa na janela\n", nome);
printf("\nDecisão:\nBater na porta (1) | Voltar a subir a montanha (2)");
scanf("%d", &decisao1);

if (decisao1 == 2) {morreumontanha: printf("Voltando a subir a montanha, a chuva começou a cair...\n");
system("PAUSE > NULL");
printf("A chuva ficou muito forte!\n");
system("PAUSE > NULL");
printf("Houve um deslizamento na montanha e levou %s junto.\n", nome); goto MORREU;}


printf("\nUm senhor e sua esposa atendem a porta.\n");
system("PAUSE > NULL");
printf("Apesar de não ter muito espaço, eles oferecem um lugar para passar a tempestade.\n");
printf("\nDecisão:\nAgradecer e sair (1) | Ficar (2)");
scanf("%d", &decisao1);

if (decisao1 == 1) {printf ("\nDecisão:\n Voltar e ir na mansao do duque (1) | Voltar a subir a montanha (2)");
scanf("%d", &decisao2);
if (decisao2 == 2) goto morreumontanha;
else if (decisao2 == 1) goto mansaodomal;
}
printf("%s dormiu no barraco");


//----------------------------------------------------------------------------------------------
//--------------------------------CENARIOS


//Finais do jogoo
MORREU: printf("\n\n\t\t Você morreu...\n\n");
final:
VIVEU: printf("\n\n\t\tEspere o próximo capítulo. |:D|\n\n");
printf("\t\t\t\tDeseja tentar novamente?\n\t\t\t\tSIM(1) | NÃO(2)\n\t\t\t\t\t");
scanf("%d", &restart);
printf("\n");
}
while (restart == 1);
system("PAUSE > NULL");
return 0;
}
