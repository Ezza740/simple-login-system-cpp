#include <iostream>
using namespace std;
   string savedusername;
   string savedpassword;
    void newregister () {
    	cout<<"enter a new username:";
    	cin>>savedusername;
    	cout<<"enter a new password:";
    	cin>>savedpassword;
    	cout<<"You register successfully"<<endl;
    	
	}
	void login () {
		string username,password;
		cout<<"enter a username:";
		cin>>username;
		cout<<"enter a password:";
		cin>>password;
		if (username==savedusername && password == savedpassword) {
			cout<<"login successfully! Welcome,"<<username<<endl;
		}
		else {
			cout<<"invalid username!"<<endl;
		}
	}
	 int main () {
	 	cout<<"--------------------"<<endl;
	 	cout<<"wlecome to simple login system"<<endl;
	 	cout<<"--------------------"<<endl;
	 	 int choice;
	 	
	 do {	
	  cout<<"enter a choice:"<<endl;
	 	 cout<<"1.Registeration"<<endl;
	 	 cout<<"2.Login"<<endl;
	 	 cout<<"3. Exit"<<endl;
	 	 cin>>choice;   
	
	 	 switch (choice) {
	 	 	case 1:
	 	 		newregister();
	 	 		break;
	 	 	case 2:
	 	 		login();
	 	 	break;
	 	 	case 3:
	 	 		cout<<"exit the program!"<<endl;
	 	 		break;
	 	 	default:
	 	 		cout<<"invalid choice,Try again"<<endl;
		  }
		}  while(choice!=3);
		  cout<<"thankyou for visiting.........."<<endl;
	 }
