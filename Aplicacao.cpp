//Arquivo: Aplicacao.cpp


#include <stdio.h>
#include "Banco.h"
#include <locale.h>
#include <stdlib.h>

void menuCc(void);
void menuPoupanca(void);

int main(void){
	setlocale(LC_ALL, "portuguese");
	
	int op;
	
	do{
		printf("SISTEMA DE BANCOS DA UDF \n");
		printf("BANCO GRUPO 8 \n\n\n");
		printf("Digite a op��o que desejar... \n");
		printf("1 - Menu Conta Corrente\n");
		printf("2 - Menu Conta Poupan�a\n"); 
	    printf("3 - Menu Conta Especial\n");
	    printf("4 - Sair da Aplica��o\n");
		scanf("%d",&op);
		
		
		switch(op){
			case 1:
				printf("\n");
			    menuCc();
			    break;
			case 2:
				printf("\n");
				menuPoupanca();
				break;
			case 3:
			    printf("EM DESENVOLVIMENTO...\n");
			    break;
			case 4:
				printf("\n ___ FIM ___\n\n");
				break;
			default:
				printf("\n** Op��o Inv�lida! **\n\n");
			
		}
			
	}while(op != 4);
	
	system("PAUSE");
	return EXIT_SUCCESS;
	
}

void menuCc(void){
	int op;
			    
    do{
    	printf("SISTEMA DE BANCOS DA UDF \n");
		printf("BANCO GRUPO 8 \n\n\n");
    	printf("Digite a op��o que desejar fazer conta sua Conta Corrente... \n");
    	printf("1 - Abrir uma Conta Corrente\n");
    	printf("2 - Listar Contas Correntes\n"); 
    	printf("3 - Encerrar Opera��es dentro desta conta. (Voltar ao Menu Principal)\n");
    	
    	scanf("%d",&op);
    	
    	switch(op){
			case 1:
				printf("\n");
				Banco::AberturaContaCorrente();
				break;
			case 2:
				printf("\n");
			    Banco::ListagemContasCorrentes();
			    break;
			case 3:
				printf("> Volta ao Menu de Contas < \n");
				break;
			default:
				printf("\n** Op��o Inv�lida! **\n\n");
				system("PAUSE");
		}
	}while(op != 3);
}
void menuPoupanca(void){
	int op;
			    
    do{
    	printf("SISTEMA DE BANCOS DA UDF \n");
		printf("BANCO GRUPO 8 \n\n\n");
    	printf("Digite a op��o que desejar fazer conta sua Conta Poupan�a... \n");
    	printf("1 - Abrir uma Conta Poupan�a\n");
    	printf("2 - Listar Contas Poupan�as\n"); 
    	printf("3 - Encerrar Opera��es dentro desta conta. (Voltar ao Menu Principal)\n");
    	
    	scanf("%d",&op);
    	
    	switch(op){
			case 1:
				Banco::AberturaContaPoupanca();
				break;
			case 2:
			    Banco::ListagemContasPoupanca();
			    break;
			case 3:
				printf("> Volta ao Menu de Contas < \n");
				break;
			default:
				printf("\n** Op��o Inv�lida! **\n\n");
				system("PAUSE");
		}
	}while(op != 3);
}
