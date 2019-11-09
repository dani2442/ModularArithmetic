#pragma once
#include <stdlib.h>
#include "Cryptography.h"
#include "Congruence.h"
class Exponential : public Cryptography {
public:
	Exponential() :Cryptography() { pMOD = math::totient(MOD); }
	Exponential(int key) :Exponential() { setKey(key); }

	std::string encrypt(const std::string& textAscii) 
	{ 
		this->text = toNumber(textAscii); 
		for (int i = 0; i < text.size(); i++) {
			text[i] = math::mod(text[i],key,MOD);
		}
		return toString(text);
	}
	std::string decrypt(const std::string& textAscii){
		text = toNumber(textAscii);
		for (int i = 0; i < text.size(); ++i) {
			text[i] = math::mod(text[i], dkey, MOD);
			if (text[i] < 0)text[0] += MOD;
		}
		return toString(text);
	}

	bool setKey(int key) 
	{
		if (math::gcd(key, pMOD) != 1) {
			std::cout << "Error: key must be coprime with phi(MOD)";
			return false;
		}
		else {
			this->key = key; 
			this->dkey = math::inverse(key, pMOD);
			return true;
		}
	}

	void setKey(){
		auto dec = math::decompose(pMOD);
		this->key = rand() % MOD;
		for (int i = 0; i < dec.size(); i++) {
			while (key % dec[i].b == 0)
				key /= dec[i].b;
		}
		this->dkey = math::inverse(key, pMOD);
	}

private:
	int pMOD;
};