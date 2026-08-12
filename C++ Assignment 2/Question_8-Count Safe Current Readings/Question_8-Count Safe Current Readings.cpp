#include <iostream>
using namespace std;

int main(){
	double current; //Stores each current reading
	int safeCount = 0; //count to safe readings (<=10 A)
	int unsafeCount = 0; // count for unsafe current (>10 A)
	
	//code header
	cout<<"+++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"       Count Safe Current Readings         "<<endl;
	cout<<"+++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"A Reading Is Safe If It Is 10 A or Below . "<<endl;
	cout<<"-------------------------------------------"<<endl;
	
	//for loop: accept exactly 8 current readings
	for (int i = 1; i <=8; i++){
		cout<<"Enter current readinds "<<i<<"(A): ";
		cin>>current;
	//check each reading with if ..............else
	    if (current<= 10 ){
	    	cout<<"--->Safe Reading<-----"<<endl;
	    	safeCount++;
		}
	else {
		cout<<"  --->Unsafe reading<---  "<<endl;
		unsafeCount++;
	     }
	
		
	}
	//Display final count
	cout<<"--------------------------------------------"<<endl;
	cout<<"RESULTS SUMMARY: "<<endl;
	cout<<"Safe readings  (<=10 A): "<<safeCount <<endl;
	cout<<"Unsafe readings  (>10 A): "<<unsafeCount<<endl;
	cout<<"Total readings entered:  "<<safeCount + unsafeCount<<endl;
	cout<<"============================================="<<endl;
	
	
	return 0;
}
