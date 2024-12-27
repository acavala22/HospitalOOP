#include "ZdravstveniKarton.h"

void  ZdravstveniKarton::set_alergije(std::string new_a){
	alergije = new_a;
}

std::string ZdravstveniKarton::get_alergije(){
	return alergije;
}

void  ZdravstveniKarton::set_simptomi(std::string new_s){
	simptomi = new_s;
}

std::string ZdravstveniKarton::get_simptomi(){
	return simptomi;
}

void ZdravstveniKarton::set_krvGrupa(unsigned short new_k){
	krvGrupa.set_krv(new_k);
}

std::string ZdravstveniKarton::get_krvGrupa(){
	return krvGrupa.get_krv_name();
}