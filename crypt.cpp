#include "crypt.h"

int main(){
	string key;
	string text;
	int i;

	cout<<"Enter text : ";
	getline(cin,text);
	cout<<"\nEnter key : ";
	cin>>key;
	crypter a(key);
	p:cout<<"\nEnter choice :\n1.Encrypt\n2.Decrypt\n";
	cin>>i;
	switch(i){
		case 1:
			cout<<"Encrypted text :"<<a.encrypt(text)<<endl;
			return 0;
		case 2:
			cout<<"Decrypted text :"<<a.decrypt(text)<<endl;
			return 0;
		default :
			cout<<"Enter correct option"<<endl;
			goto p;
	}
}