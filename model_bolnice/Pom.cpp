#include "Pom.h"

extern unsigned short OIB_kontrola(std::string str){
	try{
		if(str.length() != 10)
			throw 1;
		int kont = 10;
		for (int i = 0; i < 10; i++){
			kont += std::stoi(str.substr(i,1));
			kont %= 10;
			if (kont == 0)
				kont = 10;
			kont *= 2;
			kont %= 11;
		}
		kont = 11 - kont;
		if (kont == 10)
			kont = 0;
		return kont;
	}
	catch(int n){
		std::cout << "Pogresan OIB" << std::endl;
		exit(EXIT_FAILURE);
	}
	catch(const std::invalid_argument &ai){
		std::cout << "Pogresan OIB" << std::endl;
		exit(EXIT_FAILURE);
	}
}
