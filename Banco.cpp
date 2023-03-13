//Arquivo: Banco.cpp
#include "Banco.h"
#include "ContaBancaria.h"

void Banco::AberturaContaCorrente(void){
	ContaCorrente::AberturaConta();
}

void Banco::ListagemContasCorrentes(void){
	ContaCorrente::Listagem();
}

void Banco::AberturaContaPoupanca(void){
	ContaPoupanca::AberturaConta();
}

void Banco::ListagemContasPoupanca(void){
	ContaPoupanca::Listagem();
}
