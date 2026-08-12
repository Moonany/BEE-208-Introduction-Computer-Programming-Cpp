#include <iostream>
using namespace std;
int main(){
	int r;
	int Area;
	cout<<"input r:";
	cin>>r;
// since Pi is not an integer we use this
	Area = 3.12159*r*r;
	cout<<"the Area of the circle is:"<<Area;
	return 0;
}
