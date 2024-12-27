#pragma once
#include "Osoba.h"

class Pacijent: public Osoba {
	private:
		unsigned short broj_osiguranja;
		unsigned short broj_sobe;
		Date datumDolaska;
	
	public:
		void set_broj_osiguranja(unsigned short new_o);
		unsigned short get_broj_osiguranja();	
		void set_broj_sobe(unsigned short new_b);
		unsigned short get_broj_sobe();	
		std::string get_datumDolaska();
		void set_datumDolaska(std::string new_dd);
};