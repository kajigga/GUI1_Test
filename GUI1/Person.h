#pragma once
#include <iostream>
#include <string>
class Person
{
	std::string address;
	std::string _name;
public:
	Person();
	std::string getName() {		return _name;	};
	std::string getAddress() { return address; };
	void setName(std::string);
};

