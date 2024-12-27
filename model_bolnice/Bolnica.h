#pragma once
#include<string>

class Bolnica{
	private:
		std::string naziv, adresa, telefon;
	
	public:
		std::string get_naziv();
		void set_naziv(std::string new_n);
		std::string get_adresa();
		void set_adresa(std::string new_a);
		std::string get_telefon();
		void set_telefon(std::string new_t);
};