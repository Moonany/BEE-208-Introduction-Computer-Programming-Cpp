//Awogchaab Desmond Akanlueratey - 01246467B
#include <iostream>
#include <cctype> // for isupper()
using namespace std;

int main(){
	char ch; // variable to store character
	cout<<"enter a character: ";
	cin>>ch;
	
	
	//check if character is uppercase using AND operator and isupper()
	if (isupper(ch) && ch >= 'A' && ch<='Z')
	    cout<< "Uppercase Letter";
	else
	    cout<< "Not an uppercase Letter";
	
	
	return 0;
	
	
	
}
