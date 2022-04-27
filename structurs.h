#pragma once
#include <iostream>
struct date {
	int day;
	int month;
	int yaer;
};


struct person {
	std::string name;
	date B;
	std::string position = " programer";
	int salary = 50000;
};

void showperson(person& P);
void showperson(date& P);










