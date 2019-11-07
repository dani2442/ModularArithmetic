#pragma once
#include <string>
#include <vector>
#include "Diccionario.h"

class Cryptography
{
public:
	Cryptography(){}

	virtual std::string encrypt(const std::string& text) = 0;
	virtual std::string decrypt(const std::string& text) = 0;

	virtual bool setKey(int key) = 0;

protected:
	int key;
	std::vector<int> text;
};

