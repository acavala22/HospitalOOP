#pragma once 
#include<iostream>
#include<string>

class KrvnaGrupa{
	private:
	inline static std::string name[8] = {"0-", "0+", "A-","A+","B-","B+","AB-","AB+"};
		unsigned short krv;
	public:
		std::string get_krv_name();
		unsigned short get_krv_no();
		void set_krv(unsigned short new_k);
};