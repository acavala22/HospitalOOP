#include "Pacijent.h"

void Pacijent::set_broj_osiguranja(unsigned short new_o) {
       broj_osiguranja = new_o;
    }

 unsigned short Pacijent::get_broj_osiguranja() {
        return broj_osiguranja;
    }

void Pacijent::set_broj_sobe(unsigned short new_s) {
       broj_sobe = new_s;
    }

 unsigned short Pacijent::get_broj_sobe() {
        return broj_sobe;
    }
    
void Pacijent::set_datumDolaska(std::string new_dd){
	datumDolaska.set(new_dd);
}

std::string	 Pacijent::get_datumDolaska(){
	return datumDolaska.get();
}    