#include <stdio.h>
int main()
{
	int num, resto;
	int bin[10];
	int j, i=0;
	
	printf("\nEntre com um numero inteiro[1-50]:");
	scanf("%d", &num);
	
	printf("\nO equivalente em binario =>");
	
	//converte para binario
	while(num!=1)
	{
		resto = num % 2;
		num = num / 2;
		//guardar resto
		bin[i] = resto;
		i++;
		
	}
	bin[i] = num;  //guarda o ultimo valor

	//imprime na ordem reversa
	for(j=i; j>=0; j--)
	{
		printf("%d", bin[j]);
	}
	
	printf("\n\n\n");
	
	
	system("pause");
	return 0;
	
	
	
}
