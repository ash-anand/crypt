#ifndef CRYPT_H
#define CRYPT_H

#include <iostream>

using namespace std;

#define KEY1 080114105
#define KEY2 110099105
char Uni[6];

class class_key{
	string key;
	string text;
	string encrypted_txt;
	bool encrypted;
public:
	class_key(string _key){
		encrypted = false;
		text = NULL;
		this.key = _key;
	}
	void encrypt(string _text){
		if(encrypted){
			cout<<"Already encrypted";
			return;
		}
		this.text = _text;
		for(int i = 0; i < text.length(); i++ ){
			encrypted_txt += text[i] + key[i%key.length()];
		}
		encrypted = true;
	}
}