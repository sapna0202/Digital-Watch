#include<iostream>
#include<string.h>
#include<windows.h>
#include<dos.h>
using namespace std;


int digital_watch(int h,int m){
	//char time;
	//char PM[3]="am";
	int ctr,s=0,h1,m1,s1;
	
	cout<<"enter the hour:";
	cin>>h;
	while(h>24){
		cout<<"enter again hour:";
		cin>>h;
	}
	
	cout<<"enter the minut:";
	cin>>m;
	while(m>59){
		cout<<"enter again minute:";
		cin>>m;
	}
	
	
	cout<<endl<<endl<<endl<<endl;
	cout<<"Set Alarm:"<<endl;
	cout<<"enter hour for alarm:";
	cin>>h1;
	cout<<"enter minute for alarm:";
	cin>>m1;
	
	
	
  start:		
	for( h;h<24;h++){
		for(m;m<60;m++){
		    for(s=1;s<60;s++){
		    	
	            Sleep(1000);
				system("cls");
				    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
				    cout<<"                      " <<"               "<<  "                  "<<h<<":"<<m<<":"<<s<<" ";
				 if(h<12){
				    h=h-12;
    				cout<<"PM";
				}
				else{
					cout<<"AM";
				}
				
				if(h==h1 && m==m1){
					cout<<"\a\a\a\a\a\a\a\a\a\a\a\a\a\a";
				}
		    }
		    s=00;
    	}
    	m=00;
	}
	h=00;
	goto start;
}

int main(){
	int hours,minut;
	system("color 0a");
	digital_watch(hours,minut);
}
