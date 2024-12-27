#include "Osoba.h"

void Osoba::set_OIB(std::string new_O){
	try{
		unsigned short k = OIB_kontrola(new_O.substr(0,10));
		if(new_O.size() != 11 || k != stoi(new_O.substr(10,1)))
			throw 1;
		OIB = new_O;
	}
	catch(int n){
		std::cout << "Pogresan OIB" << std::endl;
		exit(EXIT_FAILURE);
	}
	catch(std::exception &e){
		std::cout << "Pogresan OIB" << std::endl;
		exit(EXIT_FAILURE);
	}

}

std::string Osoba::get_OIB(){
	return OIB;
}

void Osoba::set_ime(std::string new_i){
	ime = new_i;
}

std::string Osoba::get_ime(){
	return ime;
}

void Osoba::set_prezime(std::string new_p){
	prezime = new_p;
}

std::string Osoba::get_prezime(){
	return prezime;
}

void Osoba::set_adresa(std::string new_a){
	adresa = new_a;
}

std::string Osoba::get_adresa(){
	return adresa;
}

void Osoba::set_datum_rod(std::string new_d){
	datum_rod.set(new_d);
}

std::string Osoba::get_datum_rod(){
	return datum_rod.get();
}

void Osoba::set_spol(unsigned short new_s){
	spol.set_sex(new_s);
}

std::string Osoba::get_spol(){
	return spol.get_sex_name();
}
