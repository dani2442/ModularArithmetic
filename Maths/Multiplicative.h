#pragma once
#include "Congruence.h"
#include "Cryptography.h"
#include "Diccionario.h"

class Multiplicative:public Cryptography
{
public:
	Multiplicative():Cryptography(){}
	Multiplicative(int key):Cryptography() { setKey(key); }

	std::string encrypt(const std::string& textAscii) 
	{ 
		this->text = toNumber(textAscii); 
		for (int i = 0; i < text.size(); i++) {
			text[i] = (text[i] * key) % MOD;
		}
		return toString(text);
	}
	std::string decrypt(const std::string& textAscii){
		text = toNumber(textAscii);
		int decryptkey = math::inverse(key, MOD);
		for (int i = 0; i < text.size(); ++i) {
			text[i] = (text[i] *decryptkey) % MOD;
		}
		return toString(text);
	}

	bool setKey(int key) {
		if (math::gcd(key, MOD) == 1) { this->key = key; return true; }
		else {
			std::cout << "key not valid" << std::endl;
			return false;
		}
	}
private:

};

