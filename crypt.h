#ifndef CRYPT_H
#define CRYPT_H

#include <iostream>

using namespace std;

#define KEY1 080114105
#define KEY2 110099105
char Uni[6] = {80,114,105,110,99,105};

class crypter{
	string key;

public:
	crypter(string _key = Uni){
		this->key = _key;
	}
	
	string encrypt(string text){
		string 	encrypted_txt;
		for(int i = 0; i < text.length(); i++ ){
			encrypted_txt += text[i] + key[i%key.length()] - 'A';
		}
		return encrypted_txt;
	}

	string decrypt(string encrypted_txt){
		string text;
		for(int i = 0; i < encrypted_txt.length(); i++)
			text += encrypted_txt[i] - key[i%key.length()] + 'A';
		return text;
	}
};

#endif