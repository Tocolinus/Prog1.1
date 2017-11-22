#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include <locale.h> //necessário para usar setlocale.



int main()
{
char palavra_a[50]="casa",letra_a[50],lacuna_a[50];
char palavra_b[50]="paralelepipedo",letra_b[50],lacuna_b[50];
char palavra_c[50]="professor",letra_c[50],lacuna_c[50];
char palavra_d[50]="universidade",letra_d[13],lacuna_d[50];
char palavra_e[50]="celular",letra_e[50],lacuna_e[50];
char palavra_g[50]="amendoim",letra_g[50],lacuna_g[50];
int vida=5,x=0,i,pontos=0,forca=1,ale,duvida=1;
int iDecisaoMenu;




printf("",setlocale(LC_ALL,"")); //Para definir a lingua, mas não sei usar.
system("title Jogo da forca");//Comando para colocar o titulo no exe

//_______________________________________________INTRODUÇÃO-CARREGAMENTO__________________________________

system("cls");
printf("\t\t\t\tCarregando.");
printf("\a");
sleep(1);
system("cls");
printf("\t\t\t\tCarregando..");
printf("\a");
sleep(1);
system("cls");
printf("\t\t\t\tCarregando...");
printf("\a");
sleep(1);
system("cls");

//_______________________________________________INTRODUÇÃO-CARREGAMENTO__________________________________
//____________________________________________________TITULO______________________________________________



                                                         
                                                         
printf("\a");printf("\a");printf("\a");printf("\a");printf("\a");
printf("  o__ __o__/_                                                 \n");
printf(" <|    v                                                      \n");
printf(" < >                                                          \n");
printf("  |              o__ __o     \o__ __o       __o__     o_____o/ \n");
printf("  o__/_         /v     v\\    |     |>     />  \      /v     |  \n");
sleep(1);
printf("  |            />       <\\   / \\  < >   o/         />     / \\ \n");
printf(" <o>           \\        //   \o/        <|          \\      \\o/ \n");
printf("  |             o       o    |          \\           o      |  \n");
printf(" / \\            <\\____//>   / \\         _\\o__</     <\\__  / \\ \n");
                                                              
                                                              
                                                              

                                                         
printf("\n");
system("pause");
printf("\a");
//____________________________________________________TITULO______________________________________________
//__________________________________________________MENU__________________________________________________
MENUPRINCIPAL:
	printf("\a");
	system("cls");
printf("Jogo da forca \n\n\n");
printf("1-Começar jogo\n");
printf("2-Configurações\n");
printf("3-Créditos\n");
printf("4-Sair\n");
scanf("%d", &iDecisaoMenu);
printf("\a");
system("cls");
if (iDecisaoMenu == 1) goto GAMESTART;
if (iDecisaoMenu == 2) goto CONFIGURACOES;
else if (iDecisaoMenu == 3) goto CREDITOS;
else if (iDecisaoMenu == 4)  exit(1);
//__________________________________________________MENU__________________________________________________
//____________________________________________________SUBMENU_____________________________________________

CONFIGURACOES: printf("\n\n\t\tDificuldade: Fácil\n\n");
system("pause");
goto MENUPRINCIPAL;
CREDITOS: printf("\n\nCriador: \nDavid Gagliano\nWilliam Vargas\nGlaucia Loureiro\nCamylla de Souza\n\n");
system("pause");
goto MENUPRINCIPAL;
//____________________________________________________SUBMENU_____________________________________________

GAMESTART:
	
while(duvida==1)
{
system("cls");
vida=5,x=0,pontos=0,forca=1,duvida=1;
srand ( time(NULL) );
//printf ("Um numero entre 0 e 6: %d\n", rand()%6*10);
ale = rand()%6*10;				

			
/////0000A////////////////////////////////////////////////////////////////////////////////////////////////////////				

if(ale==0){

for(i=0;i<4;i++)
lacuna_a[i]='-';


while(vida>0)
{
 
 	printf("\n\n\n");
																	    printf("\t#######################\n");
														 			    printf("\t//////JOGO DA FORCA////\n");
														 	 		    printf("\t***********************\n");
  														  	 		    printf("\t*          ___        *\n");
                 										     		    printf("\t*         |   |       *\n");
if(vida<=4)  {	    printf("\t*         |   O       *\n");} else		printf("\t*         |           *\n");
if(vida<=3)  {      printf("\t*         |  /|\\      *\n");} else		printf("\t*         |           *\n");
if(vida<=2)  {      printf("\t*         |   |       *\n");} else 		printf("\t*         |           *\n");
if(vida<=1)  {      printf("\t*         |  / \\      *\n");} else    	printf("\t*         |           *\n");   
																		printf("\t*         |______     *\n");
                 										  	 			printf("\t*                     *\n");
                  										  	 			printf("\t*                     *\n");
                										   	 			printf("\t***********************\n");

                    
	x=0;
	printf("\n\n%s\n", lacuna_a);
	printf("\n digite uma letra: ");
	scanf("%s", letra_a);

for(i=0;i<4;i++)
{
if(letra_a[0]==palavra_a[i])
{
lacuna_a[i]=palavra_a[i];
pontos++;
x++;
system("cls");
}
}
if(x==0) {
vida=vida-1;
system("cls");
if(vida==0) {
printf("\n\n VOCE FOI ENFORCADO!");
printf("\n A PALAVRA ERA: %s\n\n",palavra_a);


printf("\t#######################\n");
printf("\t//////JOGO DA FORCA////\n");
printf("\t***********************\n");
printf("\t*          _          *\n");
printf("\t*     ____| |____     *\n");
printf("\t*    |____   ____|    *\n");
printf("\t*         | |         *\n");
printf("\t*         | |         *\n");
printf("\t*         | |         *\n");
printf("\t*         |_|         *\n");
printf("\t*      GAME OVER      *\n");
printf("\t*                     *\n");
printf("\t***********************\n");

break;
}

else
printf("\n VOCE ERROU! RESTAM %d VIDA(S)",vida); }

else{
if(pontos==4) {

printf("\n A PALAVRA E: %s",palavra_a);

printf("\n\n");

printf("\t#######################\n");
printf("\t//////JOGO DA FORCA////\n");
printf("\t***********************\n");
printf("\t*                     *\n");
printf("\t*        \O//         *\n");
printf("\t*         |           *\n");
printf("\t*         |           *\n");
printf("\t*        / \\         *\n");
printf("\t*                     *\n");
printf("\t*    PARABENS VOCE    *\n");
printf("\t*      ACERTOU!!!     *\n");
printf("\t*                     *\n");
printf("\t***********************\n");

break;}

else {
printf("\n VOCE ACERTOU UMA LETRA!");

}
}
}
}

/////00010B////////////////////////////////////////////////////////////////////////////////
if(ale==10){

for(i=0;i<14;i++)
lacuna_b[i]='-';


while(vida>0)
{
 
 	printf("\n\n\n");
																	    printf("\t#######################\n");
														 			    printf("\t//////JOGO DA FORCA////\n");
														 	 		    printf("\t***********************\n");
  														  	 		    printf("\t*          ___        *\n");
                 										     		    printf("\t*         |   |       *\n");
if(vida<=4)  {	    printf("\t*         |   O       *\n");} else		printf("\t*         |           *\n");
if(vida<=3)  {      printf("\t*         |  /|\\      *\n");} else		printf("\t*         |           *\n");
if(vida<=2)  {      printf("\t*         |   |       *\n");} else 		printf("\t*         |           *\n");
if(vida<=1)  {      printf("\t*         |  / \\      *\n");} else    	printf("\t*         |           *\n");   
																		printf("\t*         |______     *\n");
                 										  	 			printf("\t*                     *\n");
                  										  	 			printf("\t*                     *\n");
                										   	 			printf("\t***********************\n");

                    
x=0;
printf("\n %s \n",lacuna_b);
printf("\n digite uma letra: ");
scanf("%s", letra_b);

for(i=0;i<14;i++)
{
if(letra_b[0]==palavra_b[i])
{
lacuna_b[i]=palavra_b[i];
pontos++;
x++;
system("cls");
}
}
if(x==0) {
vida=vida-1;
system("cls");
if(vida==0) {
printf("\n\n VOCE FOI ENFORCADO!");
printf("\n A PALAVRA ERA: %s\n\n",palavra_b);


printf("\t#######################\n");
printf("\t//////JOGO DA FORCA////\n");
printf("\t***********************\n");
printf("\t*          _          *\n");
printf("\t*     ____| |____     *\n");
printf("\t*    |____   ____|    *\n");
printf("\t*         | |         *\n");
printf("\t*         | |         *\n");
printf("\t*         | |         *\n");
printf("\t*         |_|         *\n");
printf("\t*      GAME OVER      *\n");
printf("\t*                     *\n");
printf("\t***********************\n");

break;
}

else
printf("\n VOCE ERROU! RESTAM %d VIDA(S)",vida); }

else{
if(pontos==14) {

printf("\n A PALAVRA E: %s",palavra_b);

printf("\n\n");

printf("\t#######################\n");
printf("\t//////JOGO DA FORCA////\n");
printf("\t***********************\n");
printf("\t*                     *\n");
printf("\t*        \O//         *\n");
printf("\t*         |           *\n");
printf("\t*         |           *\n");
printf("\t*        / \\         *\n");
printf("\t*                     *\n");
printf("\t*    PARABENS VOCE    *\n");
printf("\t*      ACERTOU!!!     *\n");
printf("\t*                     *\n");
printf("\t***********************\n");

break;}

else {
printf("\n VOCE ACERTOU UMA LETRA!");

}
}
}
}
/////00020C///////////////////////////////////////////////////////////////////////////////////////

if(ale==20){

for(i=0;i<9;i++)
lacuna_c[i]='-';


while(vida>0)
{
 
 	printf("\n\n\n");
																	    printf("\t#######################\n");
														 			    printf("\t//////JOGO DA FORCA////\n");
														 	 		    printf("\t***********************\n");
  														  	 		    printf("\t*          ___        *\n");
                 										     		    printf("\t*         |   |       *\n");
if(vida<=4)  {	    printf("\t*         |   O       *\n");} else		printf("\t*         |           *\n");
if(vida<=3)  {      printf("\t*         |  /|\\      *\n");} else		printf("\t*         |           *\n");
if(vida<=2)  {      printf("\t*         |   |       *\n");} else 		printf("\t*         |           *\n");
if(vida<=1)  {      printf("\t*         |  / \\      *\n");} else    	printf("\t*         |           *\n");   
																		printf("\t*         |______     *\n");
                 										  	 			printf("\t*                     *\n");
                  										  	 			printf("\t*                     *\n");
                										   	 			printf("\t***********************\n");


                    
x=0;
printf("\n %s \n",lacuna_c);
printf("\n digite uma letra: ");
scanf("%s", letra_c);

for(i=0;i<9;i++)
{
if(letra_c[0]==palavra_c[i])
{
lacuna_c[i]=palavra_c[i];
pontos++;
x++;
system("cls");
}
}
if(x==0) {
vida=vida-1;
system("cls");

if(vida==0) {
printf("\n\n VOCE FOI ENFORCADO!");
printf("\n A PALAVRA ERA: %s\n\n", palavra_c);


printf("\t#######################\n");
printf("\t//////JOGO DA FORCA////\n");
printf("\t***********************\n");
printf("\t*          _          *\n");
printf("\t*     ____| |____     *\n");
printf("\t*    |____   ____|    *\n");
printf("\t*         | |         *\n");
printf("\t*         | |         *\n");
printf("\t*         | |         *\n");
printf("\t*         |_|         *\n");
printf("\t*      GAME OVER      *\n");
printf("\t*                     *\n");
printf("\t***********************\n");

break;
}


else
printf("\n VOCE ERROU! RESTAM %d VIDA(S)",vida); }

else{
if(pontos==9) {

printf("\n A PALAVRA E: %s",palavra_c);

printf("\n\n");

printf("\t#######################\n");
printf("\t//////JOGO DA FORCA////\n");
printf("\t***********************\n");
printf("\t*                     *\n");
printf("\t*        \O//         *\n");
printf("\t*         |           *\n");
printf("\t*         |           *\n");
printf("\t*        / \\         *\n");
printf("\t*                     *\n");
printf("\t*    PARABENS VOCE    *\n");
printf("\t*      ACERTOU!!!     *\n");
printf("\t*                     *\n");
printf("\t***********************\n");

break;}

else {
printf("\n VOCE ACERTOU UMA LETRA!");

}
}
}
}
////00030D//////////////////////////////////////////////////////////////////////////////////////

if(ale==30){

for(i=0;i<12;i++)
lacuna_d[i]='-';


while(vida>0)
{
 
 	printf("\n\n\n");
																	    printf("\t#######################\n");
														 			    printf("\t//////JOGO DA FORCA////\n");
														 	 		    printf("\t***********************\n");
  														  	 		    printf("\t*          ___        *\n");
                 										     		    printf("\t*         |   |       *\n");
if(vida<=4)  {	    printf("\t*         |   O       *\n");} else		printf("\t*         |           *\n");
if(vida<=3)  {      printf("\t*         |  /|\\      *\n");} else		printf("\t*         |           *\n");
if(vida<=2)  {      printf("\t*         |   |       *\n");} else 		printf("\t*         |           *\n");
if(vida<=1)  {      printf("\t*         |  / \\      *\n");} else    	printf("\t*         |           *\n");   
																		printf("\t*         |______     *\n");
                 										  	 			printf("\t*                     *\n");
                  										  	 			printf("\t*                     *\n");
                										   	 			printf("\t***********************\n");

                    
x=0;
printf("\n %s \n",lacuna_d);
printf("\n digite uma letra: ");
scanf("%s", letra_d);

for(i=0;i<12;i++)
{
if(letra_d[0]==palavra_d[i])
{
lacuna_d[i]=palavra_d[i];
pontos++;
x++;
system("cls");
}
}
if(x==0) {
vida=vida-1;
system("cls");
if(vida==0) {
printf("\n\n VOCE FOI ENFORCADO!");
printf("\n A PALAVRA ERA: %s\n\n",palavra_d);


printf("\t#######################\n");
printf("\t//////JOGO DA FORCA////\n");
printf("\t***********************\n");
printf("\t*          _          *\n");
printf("\t*     ____| |____     *\n");
printf("\t*    |____   ____|    *\n");
printf("\t*         | |         *\n");
printf("\t*         | |         *\n");
printf("\t*         | |         *\n");
printf("\t*         |_|         *\n");
printf("\t*      GAME OVER      *\n");
printf("\t*                     *\n");
printf("\t***********************\n");

break;
}

else
printf("\n VOCE ERROU! RESTAM %d VIDA(S)",vida); }

else{
if(pontos==12) {

printf("\n A PALAVRA E: %s",palavra_d);

printf("\n\n");

printf("\t#######################\n");
printf("\t//////JOGO DA FORCA////\n");
printf("\t***********************\n");
printf("\t*                     *\n");
printf("\t*        \O//         *\n");
printf("\t*         |           *\n");
printf("\t*         |           *\n");
printf("\t*        / \\         *\n");
printf("\t*                     *\n");
printf("\t*    PARABENS VOCE    *\n");
printf("\t*      ACERTOU!!!     *\n");
printf("\t*                     *\n");
printf("\t***********************\n");

break;}

else {
printf("\n VOCE ACERTOU UMA LETRA!");

}
}
}
}
//////00040E/////////////////////////////////////////////////////////////////////////////////////////////

if(ale==40){

for(i=0;i<7;i++)
lacuna_e[i]='-';


while(vida>0)
{
 
 	printf("\n\n\n");
																	    printf("\t#######################\n");
														 			    printf("\t//////JOGO DA FORCA////\n");
														 	 		    printf("\t***********************\n");
  														  	 		    printf("\t*          ___        *\n");
                 										     		    printf("\t*         |   |       *\n");
if(vida<=4)  {	    printf("\t*         |   O       *\n");} else		printf("\t*         |           *\n");
if(vida<=3)  {      printf("\t*         |  /|\\      *\n");} else		printf("\t*         |           *\n");
if(vida<=2)  {      printf("\t*         |   |       *\n");} else 		printf("\t*         |           *\n");
if(vida<=1)  {      printf("\t*         |  / \\      *\n");} else    	printf("\t*         |           *\n");   
																		printf("\t*         |______     *\n");
                 										  	 			printf("\t*                     *\n");
                  										  	 			printf("\t*                     *\n");
                										   	 			printf("\t***********************\n");

                    
x=0;
printf("\n %s \n",lacuna_e);
printf("\n digite uma letra: ");
scanf("%s", letra_e);

for(i=0;i<7;i++)
{
if(letra_e[0]==palavra_e[i])
{
lacuna_e[i]=palavra_e[i];
pontos++;
x++;
system("cls");
}
}
if(x==0) {
vida=vida-1;
system("cls");
if(vida==0) {
printf("\n\n VOCE FOI ENFORCADO!");
printf("\n A PALAVRA ERA: %s\n\n",palavra_e);


printf("\t#######################\n");
printf("\t//////JOGO DA FORCA////\n");
printf("\t***********************\n");
printf("\t*          _          *\n");
printf("\t*     ____| |____     *\n");
printf("\t*    |____   ____|    *\n");
printf("\t*         | |         *\n");
printf("\t*         | |         *\n");
printf("\t*         | |         *\n");
printf("\t*         |_|         *\n");
printf("\t*      GAME OVER      *\n");
printf("\t*                     *\n");
printf("\t***********************\n");

break;
}

else
printf("\n VOCE ERROU! RESTAM %d VIDA(S)",vida); }

else{
if(pontos==7) {

printf("\n A PALAVRA E: %s",palavra_e);

printf("\n\n");

printf("\t#######################\n");
printf("\t//////JOGO DA FORCA////\n");
printf("\t***********************\n");
printf("\t*                     *\n");
printf("\t*        \O//         *\n");
printf("\t*         |           *\n");
printf("\t*         |           *\n");
printf("\t*        / \\         *\n");
printf("\t*                     *\n");
printf("\t*    PARABENS VOCE    *\n");
printf("\t*      ACERTOU!!!     *\n");
printf("\t*                     *\n");
printf("\t***********************\n");

break;}

else {
printf("\n VOCE ACERTOU UMA LETRA!");

}
}
}
}

///////00050G//////////////////////////////////////////////////////////////////////////////////////

if(ale==50){

system("cls");

for(i=0;i <8;i++)
lacuna_g[i]='-';


while(vida>0)
{
 
 	printf("\n\n\n");
 	
																	    printf("\t######################\n");
														 			    printf("\t/////JOGO DA FORCA////\n");
														 	 		    printf("\t***********************\n");
  														  	 		    printf("\t*          ___        *\n");
                 										     		    printf("\t*         |   |       *\n");
if(vida<=4)  {	    printf("\t*         |   O       *\n");} else		printf("\t*         |           *\n");
if(vida<=3)  {      printf("\t*         |  /|\\      *\n");} else		printf("\t*         |           *\n");
if(vida<=2)  {      printf("\t*         |   |       *\n");} else 		printf("\t*         |           *\n");
if(vida<=1)  {      printf("\t*         |  / \\      *\n");} else    	printf("\t*         |           *\n");   
																		printf("\t*         |______     *\n");
                 										  	 			printf("\t*                     *\n");
                  										  	 			printf("\t*                     *\n");
                										   	 			printf("\t***********************\n");

                    
x=0;
printf("\n %s \n",lacuna_g);
printf("\n digite uma letra: ");
scanf("%s", letra_g);

for(i=0;i<8;i++)
{
if(letra_g[0]==palavra_g[i])
{
lacuna_g[i]=palavra_g[i];
pontos++;
x++;
system("cls");
}
}
if(x==0) {
vida=vida-1;
system("cls");
if(vida==0) {
printf("\n\n VOCE FOI ENFORCADO!");
printf("\n A PALAVRA ERA: %s\n\n",palavra_g);


printf("\t#######################\n");
printf("\t//////JOGO DA FORCA////\n");
printf("\t***********************\n");
printf("\t*          _          *\n");
printf("\t*     ____| |____     *\n");
printf("\t*    |____   ____|    *\n");
printf("\t*         | |         *\n");
printf("\t*         | |         *\n");
printf("\t*         | |         *\n");
printf("\t*         |_|         *\n");
printf("\t*      GAME OVER      *\n");
printf("\t*                     *\n");
printf("\t***********************\n");

break;
}

else
printf("\n VOCE ERROU! RESTAM %d VIDA(S)",vida); }

else{
if(pontos== 8) {

printf("\n A PALAVRA E: %s",palavra_g);

printf("\n\n");

printf("\t#######################\n");
printf("\t//////JOGO DA FORCA////\n");
printf("\t***********************\n");
printf("\t*                     *\n");
printf("\t*        \O//         *\n");
printf("\t*         |           *\n");
printf("\t*         |           *\n");
printf("\t*        / \\         *\n");
printf("\t*                     *\n");
printf("\t*    PARABENS VOCE    *\n");
printf("\t*      ACERTOU!!!     *\n");
printf("\t*                     *\n");
printf("\t***********************\n");

break;}

else {
printf("\n VOCE ACERTOU UMA LETRA!");

}
}
}
}
printf("\n Deseja continuar, digite (1)Sim ou (2)Nao:");
scanf("%d", &duvida);

}

system("cls");


printf("\n\n______________________________________________________________________________\n" );
printf("|||||||||||||             |||            ||||||         ||||||    |||||||||||| \n");                    
printf("||                       || ||           ||  |||       |||  ||    ||           \n");
printf("||                      ||   ||          ||   |||    |||    ||    ||           \n");
printf("||                     ||     ||         ||     ||| |||     ||    ||           \n");
printf("||                    ||       ||        ||       |||       ||    |||||||||||| \n");       
printf("||        ||||       |||||||||||||       ||                 ||    ||           \n");
printf("||         ||       ||           ||      ||                 ||    ||        \n");
printf("||         ||      ||             ||     ||                 ||    ||        \n"); 
printf("|||||||||||||     ||               ||    ||                 ||    |||||||||||||\n\n");  

                 
printf("|||||||||||||   ||                 ||   |||||||||||||    |||||||||||     \n");                
printf("||         ||    ||               ||    ||               ||         ||   \n");
printf("||         ||     ||             ||     ||               ||         ||   \n"); 
printf("||         ||      ||           ||      ||               ||         ||   \n");            
printf("||	   ||       ||         ||       |||||||||||||    |||||||||||     \n");//Ta errado aqui, mas ta certo no exe (não sei oq houve) 
printf("||         ||        ||       ||        ||               ||    ||        \n"); 
printf("||         ||         ||     ||         ||               ||     ||       \n"); 
printf("||         ||          ||   ||          ||               ||      ||      \n");   
printf("||         ||           || ||           ||               ||       ||     \n");     
printf("|||||||||||||            |||            ||||||||||||||   ||        ||    \n"); 
printf("______________________________________________________________________________\n" );

printf("\n\n");


system("pause");
return 0; }
