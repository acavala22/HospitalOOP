#pragma once
#include "Date.h"
#include "Pom.h"
#include "Sex.h"
#include <iostream>

class Osoba{
	protected:
		std::string OIB, ime, prezime, adresa;
		Date datum_rod;
		Sex spol;
	public: 
		std::string get_OIB();
		void set_OIB(std::string new_O);
		std::string get_ime();
		void set_ime(std::string new_i);
		std::string get_prezime();
		void set_prezime(std::string new_p);
		std::string get_adresa();
		void set_adresa(std::string new_a);
		std::string get_spol();
		void set_spol(unsigned short new_s);
		std::string get_datum_rod();
		void set_datum_rod(std::string new_d);

};
