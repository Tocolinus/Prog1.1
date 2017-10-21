#include <stdio.h>
#include <math.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

int main(){
char nome[15], m1,m2[15],m3[15];
int ataque, vida, classe;
/*
m1=Lestrigones;
m2=Godizika;
m3=Ness;
*/
printf("Bem vindo!Esse eh o mundo imaginario. Seu herói vive em no vilarejo alfa e irá para o castelo do demonio %s.\n"), m3;
printf("Entre com o nome do seu personagem.\n");

scanf("%s", &nome);


printf("\nEscolha entre Aventureiro(1), Engenheiro(2), Arqueiro(3)");
scanf("%d", &classe );

ataque= classe*3;
vida= 50/classe;

printf("%s | Ataque = %d | Vida = %d |", nome, ataque, vida);

printf("\n%s saiu em sua jornada...\n");

system("pause");

printf("Seguindo seu caminho, andando tranquilamente com seus equipamentos, %s avista um monstro.");

system("pause");
printf("Seguindo o caminho de terra...");

system("pause");
system("pause");
return 0;
}
