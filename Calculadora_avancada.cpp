#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>
#include <string.h>

float soma(float s1, float s2){
	float resultado;
	resultado = s1 + s2;
	return resultado;
}

main(){
	setlocale(LC_ALL,"portuguese");
	
	int saida1;
	char saida[50];
	double log, a, base;
	float n1,n2,r;
	float x = 0;
	int cont = 0;
	char operador,zero[] ="0"; 
	
	while(x==0){
		n1=0;
		n2=0;
		
		printf("********************************************************************************\n");
		printf("****ATEN��O SE A OPERA��O FOR INV�LIDA O PROGRAMA IR� FECHAR AUTOMATICAMENTE****\n");
		printf("********************************************************************************");
		if(cont!=0){
			printf("\n\nO RESULTADO DA OPERA��O ANTERIOR FOI: %.2lf\n", r);
		}
		printf("\n\nCALCULADORA\nComandos:\nSoma = '+'\nSubtra��o = '-'\nMultiplica��o = '*' \nDivis�o = '/'\nPorcentagem = '%%' \nExponencial = '^'\nLogaritmo = 'l'\nRa�z quadrada = 'v'");
		printf("\n\nDigite o primeiro n�mero, a opera��o e logo depois o segundo n�mero\n\n");	
		scanf("%f %c %f", &n1, &operador, &n2);
		switch(operador){
			
			case '+':
				r = soma(n1,n2);
				printf("\n%.2f", r);
				break;
		}
	
			printf("\nSe deseja continuar na calculadora digite 0\nSe n�o qualquer n�mero:\n");
    		fflush(stdin);
			gets(saida);
			if(strcmp(saida,zero)){
    			exit(1);
			}
			else{
    			system("cls");
    			cont++;
    		}
    	}
	}
}

