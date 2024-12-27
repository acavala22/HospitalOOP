#pragma once
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

class Date{
	private:
		unsigned short day;
		unsigned short month;
		unsigned short year;
		bool is_date(std::string str);
	public:
		void set(std::string str);
		std::string get();
};