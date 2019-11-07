#pragma once
#include "Cryptography.h"
#include "Diccionario.h"

class Additive:public Cryptography
{
public:
	Additive():Cryptography(){}
	Additive(int key) { setKey(key); }

	std::string encrypt(const std::string& textAscii) 
	{ 
		this->text = toNumber(textAscii); 
		for (int i = 0; i < text.size(); i++) {
			text[i] = (text[i] + key) % MOD;
		}
		return toString(text);
	}
	std::string decrypt(const std::string& textAscii){
		text = toNumber(textAscii);
		for (int i = 0; i < text.size(); ++i) {
			text[i] = (text[i] - key) % MOD;
			if (text[i] < 0)text[i] += MOD;
		}
		return toString(text);
	}

	bool setKey(int key) { this->key = key; return true; }
private:

};

