#include "Bolnica.h"

std::string Bolnica::get_naziv(){
	return naziv;
}

void Bolnica::set_naziv(std::string new_n){
	naziv = new_n;
}

std::string Bolnica::get_telefon(){
	return telefon;
}

void Bolnica::set_telefon(std::string new_t){
	telefon = new_t;
}

std::string Bolnica::get_adresa(){
	return adresa;
}

void Bolnica::set_adresa(std::string new_a){
	adresa = new_a;
}