// Arquivo: ContaCorrente.cpp

#include <stdio.h>
#include <stdlib.h>

#include "ContaBancaria.h"


//***********************************
// ContaCorrente
//***********************************

ContaCorrente* vetorCc[10];

int ContaCorrente::qtdContas = 0; 


//***********************************
// Metodos primitivos 
//***********************************

ContaCorrente::ContaCorrente (Cliente* titular):ContaBancaria(titular) {
		    		
}

int ContaCorrente::RecuperarQtdContas (void) {
	
	return ContaCorrente::qtdContas;
}	  

void ContaCorrente::IncrementarQtdContas (void) {
	
	ContaCorrente::qtdContas++;

}

//***********************************
// Metodos derivados 
//***********************************

void ContaCorrente::AbrirConta (Cliente* titular) {
	
	// este m√©todo cria objeto do tipo ContaCorrente
	// e insere Conta Corrente no respectivo vetor
	int i = ContaCorrente::RecuperarQtdContas();;
	
	vetorCc[i] = new ContaCorrente(titular);
	
	ContaCorrente::IncrementarQtdContas();
		
}
      	
void ContaCorrente::AberturaConta (void) {
	
 	int qtd = ContaCorrente::RecuperarQtdContas();
   	Cliente *titular;
	
	if(qtdContas == 10){
		printf("N„o estamos abrindo contas deste tipo no momento \n");
		system("PAUSE");
		return;
	}
	
	titular = Cliente::ObterCliente();
	if(titular != NULL){
		ContaCorrente::AbrirConta(titular);
	}	
	 
}

void ContaCorrente::Listagem (void) {
	int qtdContas;
	int ag, ct, dAbDia, dAbMes, dAbAno, titNascDia, titNascMes, titNascAno;
	float sdo;
	char titCpf[12];
	char titNome[60];
	char titEndereco[60];
	
	qtdContas = ContaCorrente::RecuperarQtdContas();
	if(qtdContas == 0){
		printf("Nao ha contas desse tipo no momento \n");
		system("PAUSE");
		return;
	}
		for(int i = 0; i < qtdContas; i++){
			vetorCc[i]->RecuperarConta(&ag, &ct, &dAbDia, &dAbMes, &dAbAno,& sdo, titCpf, titNome, &titNascDia, &titNascMes, &titNascAno, titEndereco);
			printf("Agencia: %d \n Conta: %d \n dtAbertura: %d/%d/%d \n Saldo: %f \n Cpf: %s \n Nome: %s \n Nascimento: %d/%d/%d \n Endereco: %s \n\n",
			ag, ct, dAbDia, dAbMes, dAbAno, sdo, titCpf, titNome, titNascDia, titNascMes, titNascAno, titEndereco);
		}
		system("PAUSE");
		system("CLS");
	
}
