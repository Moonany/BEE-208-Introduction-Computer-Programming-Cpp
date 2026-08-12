#include <iostream>
#include <string>
using namespace std;

int main(){
	string binary;
	cout<<"Enter binary number: ";
	cin>> binary;
	
	//convert binary to decimal
	int decimal = 0;
	for (int i = 0; i < binary.length(); i++) {
		decimal = decimal * 2 + (binary[i] - '0');
	
	}
	//display results
	cout<<"Decimal: " <<decimal<<endl;
	cout<<"Hexadecimal: "<<hex<<decimal<<endl;
	cout<<"Octal: "<<oct<<decimal<<endl;
	
	return 0;
}
