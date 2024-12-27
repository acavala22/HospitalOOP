#include "KrvnaGrupa.h"

std::string KrvnaGrupa::get_krv_name(){
	return name[krv];
}

unsigned short KrvnaGrupa::get_krv_no(){
	return krv;
}

void  KrvnaGrupa::set_krv(unsigned short new_k){
	if (new_k > 7){
		std::cout << "Pogresna krvna grupa" << std::endl;
		exit(EXIT_FAILURE);
	}
	krv = new_k;
}