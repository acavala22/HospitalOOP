#include "Lijecnik.h"

void Lijecnik::izdajRecept(const std::string& lijek, const std::string& opisKonz) {
    std::cout << "Izdan je recept za:" << std::endl;
    std::cout << "Lijek: " << lijek << std::endl;
    std::cout << "Opis konzumacije: " << opisKonz << std::endl;
}

void Lijecnik::izdajNalaz(const std::string& nalaz){
	std::cout<<"Izdan je nalaz: "<<nalaz<<std::endl;
}
