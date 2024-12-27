#pragma once
#include<iostream>
#include<string>

class Sex{
	private:
	inline static std::string name[3] = {"Zensko", "Musko", "Ostalo"};
		unsigned short sex;
	public:
		std::string get_sex_name();
		unsigned short get_sex_no();
		void set_sex(unsigned short new_s);
};