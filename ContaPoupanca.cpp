// Arquivo: ContaPoupanca.cpp

#include <stdio.h>
#include <stdlib.h>

#include "ContaBancaria.h"

//***********************************
// ContaPoupanca
//***********************************

ContaPoupanca* vetorCp[10];

float ContaPoupanca::txRendimento = 0.5; 
int   ContaPoupanca::qtdContas = 0; 



//***********************************
// Metodos primitivos 
//***********************************


ContaPoupanca::ContaPoupanca (Cliente* titular):ContaBancaria(titular) {
	
  		printf("Informe o dia do rendimento da sua conta poupança: ");
		scanf("d%",diaRendimento);	
  		
}

 float ContaPoupanca::ObterTxRendimento (void) {
 	
  		
  		return ContaPoupanca::txRendimento;

}

int ContaPoupanca::RecuperarQtdContas (void) {
	
  		
  		return ContaPoupanca::qtdContas;

}	  

void ContaPoupanca::IncrementarQtdContas (void) {
	
  		ContaPoupanca::qtdContas++;	
}


//***********************************
// Metodos derivados 
//***********************************

	  
void ContaPoupanca::RecuperarConta (int* ag, int* ct, 
                                    int* dAbDia, int* dAbMes, int* dAbAno,
                                    float* sdo, 
								    char titCpf [12], char titNome [60],             
                                    int* titNascDia, int* titNascMes, int* titNascAno, 
                                    char titEndereco [60], 
									int* diaRend, float* taxa) {

		ContaBancaria::RecuperarConta(ag, ct, dAbDia, dAbMes, dAbAno, sdo, titCpf, titNome, titNascDia, titNascMes, titNascAno, titEndereco);
		*diaRend = diaRendimento;
		*taxa = ContaPoupanca::ObterTxRendimento();
}  
      
 void ContaPoupanca::AbrirConta (Cliente* titular)  {
 	
	// este mÃ©todo cria objeto do tipo ContaPoupanca
	// e insere Conta Poupanca no respectivo vetor
		
	 	printf("\n Passou por: void ContaPoupanca::AbrirConta (Cliente* titular) \n") ;	
}

 void ContaPoupanca::AberturaConta (void) {
		int qtdContas;
		qtdContas = ContaPoupanca::RecuperarQtdContas();
		
		if(qtdContas == 10){
			printf("Nao estamos abrindo contas deste tipo no momento");
		}
		
		Cliente *titular;
		if(qtdContas < 10){
			titular = Cliente::ObterCliente();
		}
		
		if(titular != NULL){
			ContaPoupanca::AbrirConta(titular);
		}
		
		
}
    
void ContaPoupanca::Listagem (void) {
	
  		printf("\n Passou por: void ContaPoupanca::Listagem (void)\n") ;	

}

