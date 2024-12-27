#pragma once
#include<string>
#include<iostream>
#include "KrvnaGrupa.h"

class ZdravstveniKarton {
	private:
		std::string alergije, simptomi;
		KrvnaGrupa krvGrupa;
	public:
		std::string get_alergije();
		void set_alergije(std::string new_a);
		std::string get_simptomi();
		void set_simptomi(std::string new_s);
		std::string get_krvGrupa();
		void set_krvGrupa(unsigned short new_k);
};