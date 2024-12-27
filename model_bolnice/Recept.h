#pragma once
#include <iostream>
#include <string>

class Recept {
	private:
		std::string lijek, opisKonz;
	public:
		std::string get_lijek();
		void set_lijek(std::string new_l);
		std::string get_opisKonz();
		void set_opisKonz(std::string new_k);
};