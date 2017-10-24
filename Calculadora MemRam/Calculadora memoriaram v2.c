/*
Autor: David Gagliano Florencio
Programa para calcular frequ�ncias e temporiza��es de uma mem�ria ddr ram qualquer.
*/
#include <stdio.h>
#include <math.h>

int main ()
{
    float tcl, trcd, trp, tras;
    float freq,lb, cl,clre, ciclo, rcd, rp, ras;
    int opcao;
    float nfreq,nlb,nciclo,ncl,nrcd,nrp,nras,aum;
    
    do
    {
    
		printf("Calculador de memoria ram. Em desenvolvimento...\n");
		
    printf("Insira a frequencia da sua ram:\n ");
    scanf("%f", &freq);
    
    printf("Insira a temporizacao CL:\n");
                   scanf("%f", &cl);
                   
     printf("Insira a temporizacao tRCD:\n");
                    scanf("%f", &rcd);
                    
      printf("Insira a temporizacao tRP:\n");
                scanf("%f", &rp);     
                
       printf("Insira a temporizacao tRAS:\n");
       scanf("%f", &ras);
                        
            printf("\n"); //espa�o
                      
    lb = (freq  * 8);
    
    printf("Largura de banda: %.2f mb/s \n", lb);
    
    clre = (freq /2);
    
    printf("Clock real: %3.f mhz \n ", clre);
    
    ciclo = ((1/clre)*1000);
    
    printf("Cada ciclo dura %.3f ns\n", ciclo);
    
    printf("\n"); //espa�o
    
    tcl = (ciclo * cl);
    printf("A temporizacao CL demora %.2f ns...\n", tcl);
    
    trcd = (ciclo * rcd);
    printf("A temporizacao tRCD demora %.2f ns...\n", trcd);
    
    trp = (ciclo * rp);
    printf("A temporizacao tRP demora %.2f ns...\n", trp);
    
    tras = (ciclo * ras);
    printf("A temporizacao tRAS demora %.2f ns...\n", tras);
    
    //Final da calculadora 1
    printf("--------------------------------------------------------\n"); // Espa�o para overclock
    
    printf("[OC]Qual a nova frequencia?\n");
    scanf("%f", &nfreq);
    
    printf("\n"); //Espa�o
    
    nlb = (nfreq * 8);
    aum = (nlb - lb);
    printf("Nova largura de banda: %.2f mb/s. !Aumento de %.0f mb/s! \n", nlb, aum);
    
    clre = (nfreq /2);
    printf("Novo clock real: %3.f mhz \n ", clre);
    
    ciclo = ((1/clre)*1000);
    printf("Cada ciclo dura %.3f ns\n", ciclo);
    
    printf("\n"); // Espa�o
    
    ncl = (tcl/ciclo);
    printf("Novo CL tera que ser: %.0f \n", ncl);
    
    nrcd = (trcd/ciclo);
    printf("Novo tRCD tera que ser: %.0f \n", nrcd);
    
    nrp = (trp/ciclo);
    printf("Novo tRP tera que ser: %.0f \n", nrp);
    
    nras = (tras/ciclo);
    printf("Novo tRAS ter que ser: %.0f \n", nras);
    
    //Parei aqui - Falta dar a conclus�o ou mais op��es.
    //Op��o de repetir logo abaixo!
    
    printf("Pressione (1) para repetir.");
    scanf("%d", &opcao);
}
while (opcao == 1); // Op��o de voltar ao come�o. Caso erre.

    
    
    system ("pause");
}
