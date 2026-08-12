#include <iostream>
using namespace std;

int main(){
	double gpa;
	
//main code or code header
    cout<<"===================================="<<endl;
    cout<<"  Engineering Scholarship Checker   "<<endl;
    cout<<"===================================="<<endl;
    
//accept gpa input from user
    cout<<"Enter your GPA (0.0 - 4.0): ";
    cin>>gpa;
//display results
    cout<<"\n----Results----"<<endl;
    cout<<"GPA Entered: "<<gpa<<endl;
    cout<<"Status: ";
    
//Deturmine eligibility using else.....if
    if(gpa>=3.5 ){
    	cout<<"Eligible for engineering scholarship."<<endl;
    	
	}
	else{
		cout<<"Not eligible for engineering scholarship."<<endl;
	}
	
	return 0;
	
}
