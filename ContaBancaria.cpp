// Arquivo: ContaBancaria.cpp

#include <stdio.h>
#include <stdlib.h>

#include "ContaBancaria.h"

//***********************************
// ContaBancaria
//***********************************


//***********************************
// Metodos primitivos 
//***********************************

ContaBancaria::ContaBancaria (Cliente* cliPonteiro)  {
		titular = cliPonteiro;
		
		printf("\n\nInforme dados da conta bancaria: \n\n");
		
		printf("Numero da agencia: ");
		scanf("%d",&numAgencia);
		printf("Numero da conta: ");
		scanf("%d",&numConta);
		printf("Saldo atual: ");
		scanf("%f",&saldo);
		
		printf("Data de abertura da conta:\n");
		printf("                      Dia: ");
		scanf("%d",&dtAbDia);
		
		printf("                      Mes: ");
		scanf("%d",&dtAbMes);
		printf("                      Ano: ");
		scanf("%d",&dtAbAno);
		
		system("CLS");
}


//***********************************
// Metodos derivados 
//***********************************

void ContaBancaria::RecuperarConta (int* ag, int* ct, 
		                            int* dAbDia, int* dAbMes, int* dAbAno, 
								    float* sdo, char titCpf[12], char titNome[60],  
								    int* titNascDia, int* titNascMes, int* titNascAno, 
								    char titEndereco[60])   {
	
    *ag = numAgencia;
    *ct = numConta;
    *dAbDia = dtAbDia;
    *dAbMes = dtAbMes;
    *dAbAno = dtAbAno;
    *sdo = saldo;
    
    titular->RecuperarCliente (titCpf, titNome, 
			                    titNascDia,titNascMes,titNascAno, 
								titEndereco);
	
	 
 }
   	

