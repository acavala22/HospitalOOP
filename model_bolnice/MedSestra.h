#pragma once
#include <iostream>
#include "Zaposlenik.h"

class MedSestra : public Zaposlenik{

	public:
		
		bool alarmStatus=false;
		bool upaliAlarm();
		bool ugasiAlarm();	
};