#pragma once
#include<iostream>
#include<string>
#include "Zaposlenik.h"
#include "Recept.h"
#include "Nalaz.h"

class Lijecnik : public Zaposlenik{
	
	public:  
	 void izdajRecept(const std::string& lijek, const std::string& opisKonz);
	 void izdajNalaz(const std::string& nalaz);
	
};