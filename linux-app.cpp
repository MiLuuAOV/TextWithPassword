#include <iostream>
#include <stdlib.h> 
#include <string>
#include "base64.hpp"
using namespace std;
int main(int args, char** argv) {
	system("clear");
	string password = "secret", p; // khai bao password va user input
	cout << "\033[1;31mEncrypted text with password" << endl; // App Info and colored text:D
	cout << "Close the app if you don't know what is this!" << endl; // Warn
	system("sleep 0.55"); // sleep for n time
 	cout << "Give me the password: "; 
	cin >> p; // enter password
	if(p != password) {
		int i = 1; // Deo nho day la gi:)
		while(p != password) {
			i++;
			cout << "Wrong password!" << endl;
			cout << i << "/10" << endl;
			cout << "Give me the password: ";
			cin >> p;
			system("clear");
			if(i == 9) {
				cout << "Wrong password too much" << endl;
				cout << "Forgot the password? or wrong user?" << endl;
				system("shutdown");
				system("pause");
				return 0;
			}
		}
	}
	if(p == password) {
		system("clear");
		string text = "Did you don't know, I love you so much";
		string encrypted_text = base64::to_base64(text);
		cout << "Nice, you're welcome! (https://base64.guru/converter/decode)" << endl;
		cout << endl << encrypted_text << endl << endl;
		
		system("sleep 20");
	}
	return 0;
}

