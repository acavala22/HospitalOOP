#include "Uputnica.h"

void  Uputnica::set_sifraSPregleda(std::string new_ss){
	sifraSPregleda = new_ss;
}

std::string Uputnica::get_sifraSPregleda(){
	return sifraSPregleda;
}

void  Uputnica::set_sifraLijecenja(std::string new_sl){
	sifraLijecenja = new_sl;
}

std::string Uputnica::get_sifraLijecenja(){
	return sifraLijecenja;
}

void  Uputnica::set_napomenaOBolesti(std::string new_nb){
	napomenaOBolesti = new_nb;
}

std::string Uputnica::get_napomenaOBolesti(){
	return napomenaOBolesti;
}

void  Uputnica::set_dat_izdavanja(std::string new_di){
	dat_izdavanja.set(new_di);
}

std::string	Uputnica::get_dat_izdavanja(){
	return dat_izdavanja.get();
}    