#include "Date.h"

std::string Date::get(){
	return std::to_string(day) + "." +
		   std::to_string(month) + "." + 
		   std::to_string(year) + ".";
}

bool Date::is_date(std::string str){
	unsigned short md[] = {31,29,31,30,31,30,31,31,30,31,30,31};
	unsigned short d, m, y;
	try{
		d = stoi(str.substr(0,2));
		m = stoi(str.substr(3,2));
		y = stoi(str.substr(6,4));
	}
	catch(const std::invalid_argument &ai){
		return false;
	} 
	if (m < 1 || m > 12)
		return false;
	if (d < 1 || d > md[m-1])
		return false;
	return true;
}

void Date::set(std::string str){
	try{
		if(!is_date(str)) throw 1;
		day = stoi(str.substr(0,2));
		month = stoi(str.substr(3,2));
		year = stoi(str.substr(6,4));
	}
	catch(int n){
		std::cout << "Pogresan datum" << std::endl;
		exit(EXIT_FAILURE);
	}
}
