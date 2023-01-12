// Papaka papapika John Pork Papapaapka
#include <iostream>
using namespace std;
//void password()
//{ 
//	string parole = "papapika", password;
//	
//	cout << "Enter your parole:" ;
//	cin >> password;
//	if (parole == password) {
//		cout << "Vi maladci" << endl;
//	}
//	else cout << "Password is incorrect ";
// 
//}


int main() {
	string parole , password,login,login1;
	int age = 15,age1;
	cout << "Enter your login for regestration:" ;
		cin >> login;

	cout << "Enter your parole for regestration:";
		cin >> parole;

	cout << "------------------------------" << endl << "Enter your login:"  ;
		cin >> login1;
	cout << "Enter your parole:"  ;
		cin >> password;
		cout << "------------------------------" << endl;
		 
		if (login != login1) {
			cout << "User is not found";
		}
		if (parole == password && login == login1) {
			cout << "Registration was successful";
			
		}
		else 
			cout << "Your password is incorrect";
		 




		
		return 0;



}
