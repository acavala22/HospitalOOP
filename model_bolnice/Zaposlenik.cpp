#include "Zaposlenik.h"

void Zaposlenik::set_placa(std::string new_p){
	placa = new_p;
}

std::string Zaposlenik::get_placa(){
	return placa;
}

void Zaposlenik::set_IDzaposlenika(unsigned short new_i) {
       IDzaposlenika = new_i;
    }

 unsigned short Zaposlenik::get_IDzaposlenika() {
        return IDzaposlenika;
    }

void Zaposlenik::set_datzaposlenja(std::string new_z){
	datzaposlenja.set(new_z);
}

std::string	 Zaposlenik::get_datzaposlenja(){
	return datzaposlenja.get();
}    