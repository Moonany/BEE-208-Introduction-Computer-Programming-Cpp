#include <iostream>
using namespace std;
int main(){
	int choice;
	double voltage, current, power, time, resistance, energy;
	
	cout<<"==================================="<<endl;
	cout<<"Power Rating Menu"<<endl;
	cout<<"==================================="<<endl;
	cout<<"1. Calculate DC Power "<<endl;
	cout<<"2. Calculate Resistance using ohm's law"<<endl;
	cout<<"3. Calculate Energy Consumption"<<endl;
	
	
	cout<<"Enter your choice: ";
	cin>> choice;
	switch (choice) {
		
		
		case 1:
			cout<<"Enter voltage (V): ";
			cin>> voltage;
			cout<<"Enter current (A): ";
			cin>> current;
			
			power = voltage * current;
			cout<<"=======================================";
			cout<<" DC Power = "<<power<<"W"<<endl;
			break;
			
			
		case 2:
			cout<<"Enter voltage (V): ";
			cin>> voltage;
			cout<<"Enter current (A): ";
			cin>> current;
			
			resistance = voltage / current;
			cout<<"=========================================="<<endl;
			cout<< "Resistance = "<<resistance <<" ohm's"<<endl;
			break;
			
		case 3:
			cout<<"Enter power (W): ";
			cin>>power;
			
			cout<<"Enter tine (H): ";
			cin>>time;
			
			energy = power * time;
			cout<<"========================================="<<endl;
			cout<<"Energy Consumed = "<<energy <<"J"<<endl;
			break;
		
		default:
			cout<<"Invalid Selecttion";
		
	}
	return 0;
	
}
