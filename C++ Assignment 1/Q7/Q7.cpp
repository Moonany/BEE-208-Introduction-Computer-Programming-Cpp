#include <iostream>
#include <string>
using namespace std;

int main(){
	string word;
	
	
	cout<<"Enter a string: ";
	cin>>word;
	if (word.find('a') != string::npos) {
		cout<<"contains 'a'"<<endl;
	} else{
		cout<<"Does not contain 'a'" <<endl;
	}
	return 0;
}
