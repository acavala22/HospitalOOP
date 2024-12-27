#pragma once
#include<iostream>
#include<string>
#include "Date.h"

class Uputnica {
	private:
		std::string sifraSPregleda, sifraLijecenja, napomenaOBolesti;
		Date dat_izdavanja;
	public:
		std::string get_sifraSPregleda();
		void set_sifraSPregleda(std::string new_ss);
		std::string get_sifraLijecenja();
		void set_sifraLijecenja(std::string new_sl);
		std::string get_napomenaOBolesti();
		void set_napomenaOBolesti(std::string new_nb);
		std::string get_dat_izdavanja();
		void set_dat_izdavanja(std::string new_di);
};