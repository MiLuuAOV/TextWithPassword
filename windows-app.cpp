#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int main(int args, char** argv) {
	system("color 4");
	system("cls");
	string password = "BachOctopussIuEmm", p; // khai bao password va user input
	cout << "Encrypted text with password" << endl; // App Info
	cout << "Close the app if you don't know what is this!" << endl; // Warn
	system("powershell Sleep 0.35"); // sleep for n time
 	cout << "Give me the password: "; 
	cin >> p; // enter password
	if(p != password) {
		while(p != password) {
			int i = 1; // Deo nho day la gi:)
			i++;
			cout << "Wrong password!" << endl;
			cout << i << "/10" << endl;
			cout << "Give me the password: ";
			cin >> p;
			system("cls");
			if(i == 9) {
				cout << "Wrong password too much" << endl;
				cout << "Forgot the password? or wrong user?" << endl;
				system("shutdown -r");
				system("pause");
				return 0;
			}
		}
	}
	if(p == password) {
		system("cls");
		string text = "Y8OzIGNodXnhu4duIGfDrCBjaOG7qSwgdMOibSBz4buxIGNobyDEkeG7oSBz4bqndSwgYuG6oW4gbOG6oW5oIGzDuW5nIHF1w6Ega2jDtG5nIHF1ZW4=";
		cout << "Nice, you're welcome! (https://base64.guru/converter/decode)" << endl;
		cout << endl << text << endl << endl;
		system("pause");
	}
	return 0;
}

