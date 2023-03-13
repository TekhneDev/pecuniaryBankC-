// Arquivo: Cliente.cpp

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "ContaBancaria.h"


//***********************************
// Cliente
//***********************************

Cliente* vetorCli[10];
 
int Cliente::qtdClientes = 0;


//***********************************
// Metodos primitivos 
//***********************************

Cliente::Cliente (char cpfTitular  [12]) {
		strcpy(cpf, cpfTitular );
	
		printf("Informe seu nome: ");
		scanf("%s", nome);
		fflush(stdin);
	  	
	  	printf("Informe seu endereco: ");
	  	scanf("%s", endereco);
	  	fflush(stdin);
	  	
	  	printf("Informe a data do seu nascimento:\n");
	  	printf("                             Dia: ");
	  	scanf("%d", &dtNascDia);
	  	
	  	printf("                             Mes: ");
	  	scanf("%d", &dtNascMes);
	  	
	  	printf("                             Ano: ");
	  	scanf("%d", &dtNascAno);
	  	fflush(stdin);
	  	
}

int Cliente::VerificarCliente (char cpfTitular [12]) {
	
	if(strcmp(cpfTitular, cpf) == 0)
		return 1;
	else
		return 0;
	
	return 0;

}

int Cliente::RecuperarQtdClientes (void) {
	

	return Cliente::qtdClientes;

}	  

void Cliente::IncrementarQtdClientes (void) {
	
	Cliente::qtdClientes++;
	
}

void Cliente::RecuperarCliente (char cliCpf[12], char cliNome[60], 
			                    int* cliNascDia, int* cliNascMes, int* cliNascAno, 
								char cliEnder[60])  {
									
	strcpy(cliCpf, cpf);
	strcpy(cliNome, nome);
	*cliNascDia = dtNascDia;
	*cliNascMes = dtNascMes;
	*cliNascAno = dtNascAno;
	strcpy(cliEnder, endereco);
	
}

//***********************************
// Metodos derivados 
//***********************************

Cliente* Cliente::VerificarExistenciaCliente (char cpfTitular [12]) {
	int qtdClientes;
	Cliente* titular = NULL;
	int achou;
	
	qtdClientes = Cliente::RecuperarQtdClientes();
	
	for(int i = 0; i < qtdClientes; i++){
		achou = vetorCli[i]->VerificarCliente(cpfTitular);
		
		if(achou){
			titular = vetorCli[i];
			break;
		}
	}
		
	return titular;
}
     
Cliente* Cliente::ObterCliente (void) {
	
	// este método cria objeto do tipo cliente
	// e insere cliente no respectivo vetor
		char cpfTitular[12];
		int qtdClientes;
		Cliente *titular = NULL;
	
		printf("Informe o cpf do titular: ");
		scanf("%s", cpfTitular);
		
		qtdClientes = Cliente::RecuperarQtdClientes();
		
		if(qtdClientes != 0 ){
			titular = Cliente::VerificarExistenciaCliente(cpfTitular);
		}
		
		if(titular == NULL && qtdClientes == 10){
			printf("Nao estamos aceitando novos clientes no momento \n");
			system("PAUSE");
		}
		if(titular == NULL && qtdClientes < 10){
			titular = new Cliente(cpfTitular);
			int i = qtdClientes;
			vetorCli[i] = titular;
			Cliente::IncrementarQtdClientes();
			 
		}
		
	    return titular;

}
     	 	  	  
