#include "Sex.h"

std::string Sex::get_sex_name(){
	return name[sex];
}

unsigned short Sex::get_sex_no(){
	return sex;
}

void Sex::set_sex(unsigned short new_s){
	if (new_s > 2){
		std::cout << "Pogresan spol" << std::endl;
		exit(EXIT_FAILURE);
	}
	sex = new_s;
}