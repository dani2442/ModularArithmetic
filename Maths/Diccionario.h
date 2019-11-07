#pragma once
#include <string>
#include <vector>

const int MOD = 37;

char Diccionario[MOD] = {
	'0','1','2','3','4','5','6','7','8','9',
	'a','b','c','d','e','f','g','h','i','j',
	'k','l','m','n','o','p','q','r','s','t',
	'u','v','w','x','y','z',' ' };

static std::string toString(const std::vector<int>& text) {
	std::string newtext(text.size(),'0');
	for (int i = 0; i < text.size();++i) {
		newtext[i] = Diccionario[text[i]];
	}
	return newtext;
}

static std::vector<int> toNumber(const std::string& text) {
	std::vector<int> newtext(text.length());
	for (int i = 0; i < text.length(); i++) {
		if (text[i] >= 97)
			newtext[i] = text[i] - 87;
		else if (text[i] >= 48)
			newtext[i] = text[i] - 48;
		else
			newtext[i] = 36;
	}
	return newtext;
}