#include<conio.h>
#include<time.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<fstream>
#include<string>
using namespace std;
using std::ifstream;
using std::ofstream;
	

void mama(){
	int n; 
	int x; 
	int y;
if(n>=x && n<=y){
	cout<<"\n\tel numero si esta dentro del rango :)";
	}
	else{
		cout<<"\n\tel numero no esta dentro del rango :)";}
	}
int mami(){
    int lola; 
	int x; 
	int y;
	cout<<"\n\tingrese el numero minimo del rango: ";
	cin>>x;
	cout<<"\n\tingrese el numero maximo del rango: ";
	cin>>y;
	cout<<"\n\tingrese el numero:";
	cin>>lola;
}


	main()
	{ int  lola,x,y;
	
	mami();
	mama();
	if(lola<=x && lola>=y){
	cout<<"\n\trango errado ";
	return mami();
	system("cls");
	}
	else{
	cout<<"\n\trango bueno  ";
	mama();
}
   
		
 } 	
	
	

