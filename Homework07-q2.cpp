#include<iostream>
using namespace std;	

int main(){


	int type;
	string like;
	int countF=0;
	int countE=5;
	int seat[10];
	
	for(int i=0;i<10;i++){
		seat[i]=0;
	}
	
	do{
		cout<<"Welcome to THIZU airline ticket service..."<<endl<<endl;
		cout<<"Please type 1 for 'first class'"<<endl<<"Please type 2 for 'economy' "<<endl<<endl; 
		
		//Select your desired class.
		type=0;
		cout<<"my choice is : ";
		cin>>type;
		cout<<endl<<endl;
		while(type!=1 && type!=2){
				cout << "Invalid response, please enter response again..." << endl << endl;
				cin.clear();
				cin.ignore();
				cin>>type;
			}
				
		switch(type){
			case 1: cout<<"you selected the first clz"<<endl<< "====================" <<endl;
			break;
			case 2: cout<<"you selected the economy"<<endl<< "====================" <<endl;
			break;
		}
	
	//Show the user's class and seat number.
		if(type==1){
			if(countF<5){
				cout<<"Your seat nom :"<<(countF+1)<<endl<<"class        : first clz"<<endl<<endl;
				seat[countF]=1;
				countF++;
			}else{			
				cout << "The first class is full..."<<endl;
				cout<<"if it is acceptable to be placed in the economy section ?"<<endl;
				cout<<"If you are ok with it or not :(yes / no)";
				cin>>like;
				cout<<endl<<endl;
				while(like!="yes" && like!="no"){			
					cout<<"Invalid response, please enter response again..." << endl<<endl;
					cin>>like;
				}
				if(like=="yes"){
					if(countE<10){
					cout<<endl;
					cout<<"you selected the economy"<<endl<< "====================" <<endl;
					cout<<"Your seat nom :"<<(countE+1)<<endl<<"class        : economy"<<endl;
					seat[countE]=1;
					countE++;				
					}else{
						cout<<"no seats availble in economy class..sorry.."<<endl;
					}				
				}
				if(like=="no"){
					cout<<"Next flight leaves in 3 hours." <<endl;
					return 0;
				}
			}	
		}
		if(type==2){
			if(countE<10){
				cout<<"Your seat nom :"<<(countE+1)<<endl<<"class        : economy"<<endl;
				seat[countE]=1;
				countE++;
			}else{
				cout << "The economy is full..."<<endl;
				cout<<"if it is acceptable to be placed in the first class ?"<<endl;
				cout<<"If you are ok with it or not :(yes / no)";
				cin>>like;
				while(like!="yes" && like!="no"){
					cout << "Invalid response, please enter response again..." << endl << endl;
					cin>>like;
				}
				if(like=="yes"){
					if(countF<5){
					cout<<endl;
					cout<<"you selected the first clz"<<endl<< "====================" <<endl;;
					cout<<"Your in seat nom :"<<(countF+1)<<endl<<"class        : First"<<endl;
					seat[countF]=1;
					countF++;					
					}
					else{
						cout<<"no seats availble in first class..sorry.."<<endl;
					}
				}
				if(like=="no"){
					cout<<"Next flight leaves in 3 hours." <<endl;
					return 0;
				}
			}		
		}	
	cout<<"........................................................................."<<endl;
	if(countF==5 && countE==10){
		cout << "==============================================" << endl << endl;
		cout << "All seats full, sorry for the inconvenience..." << endl;
		cout << "Next flight leaves in 3 hours" << endl << endl;
		cout << "==============================================" << endl;

		}
	
	}
	while(countF<5 || countE<10);
}

