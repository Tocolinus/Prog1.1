//GERA NUMERO RANDOMICO E IMPRIME, COM GOTO

#include <STDIO.H>

 
int main()

{
	int aleatorio;
	goto PRINCIPAL;
	ZERO:
printf("_______________________________ ________   \n");
printf("|____    /|_   _____/|______   ||_____  |  \n");
printf("  /     /  |    __)_  |       _/ /   |   | \n");
printf(" /     /_  |        | |    |   |/    |    |\n");
printf("/_______ |/_______  / |____|_  /|_______  /\n");
printf("        |/        |/         |/         |/ \n");
	system("pause");
	goto PRINCIPAL;
DOIS:
printf("________   ________  .___  _________\n");
printf("|______ |  |_____  | |   |/   _____/\n");
printf(" |    |  |  /   |   ||   ||_____  | \n");
printf(" |    `   |/    |    |   |/        |\n");
printf("/_______  /|_______  /___/_______  /\n");
printf("        |/         |/            |/ \n");
	system("pause");
	goto PRINCIPAL;
TRES:
printf("________________________________ _________\n");
printf("|__    ___/|______   |_   _____//   _____/\n");
printf("  |    |    |       _/|    __)_ |_____  | \n");
printf("  |    |    |    |   ||        |/        |\n");
printf("  |____|    |____|_  /_______  /_______  /\n");
printf("                   |/        |/        |/ \n");
	system("pause");
	goto PRINCIPAL;
QUATRO:
printf("________   ____ ___  __________________________ ________   \n");
printf("|_____  | |    |   |/  _  |__    ___/|______   ||_____  |  \n");
printf(" /  / |  ||    |   /  /_|  ||    |    |       _/ /   |   | \n");
printf("/   |_/.  |    |  /    |    |    |    |    |   |/    |    |\n");
printf("|_____| |_/______/|____|__  /____|    |____|_  /|_______  /\n");
printf("       |__>               |/                 |/         |/ \n");
	system("pause");
	goto PRINCIPAL;
ONZE:
	
printf("________    _______  _____________________\n");
printf("|_____  |   |      | |____    /|_   _____/\n");
printf(" /   |   |  /   |   |  /     /  |    __)_ \n");
printf("/    |    |/    |    |/     /_  |        |\n");
printf("|_______  /|____|__  /_______ |/_______  /\n");
printf("        |/         |/        |/        |/ \n");
system("pause");
goto PRINCIPAL;
PRINCIPAL:
	
	
srand(time(NULL));//gera numero aleatorio toda vez q executar o programa
aleatorio = (rand()%5);
//0;2;3;4;11

printf("%d", aleatorio); 

if (aleatorio == 0 ) {
 goto ZERO;
 system("pause");}
 else if (aleatorio == 1) {printf("UM E ACABOU\n");}
else if (aleatorio == 2) {
goto DOIS;system("pause");}
else if (aleatorio == 3) {
goto TRES;system("pause");}
else if (aleatorio == 4) {goto QUATRO;system("pause");}

else if (aleatorio == 11) {goto ONZE;system("pause");}



system ("pause");
return 0;
}
