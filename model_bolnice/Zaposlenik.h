#pragma once
#include "Date.h"
#include "Osoba.h"
#include "Pom.h"
#include<iostream>

class Zaposlenik : public Osoba {
	protected: 
		std::string placa; 
	private:
		unsigned short IDzaposlenika;
		Date datzaposlenja;
	public:
		std::string get_placa();
		void set_placa(std::string new_p);
		void set_IDzaposlenika(unsigned short new_i);
		unsigned short get_IDzaposlenika();	
		std::string get_datzaposlenja();
		void set_datzaposlenja(std::string new_z);
	
};