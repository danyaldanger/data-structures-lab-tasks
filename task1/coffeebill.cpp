#include<iostream>
using namespace std;

int main(){
	
	
	float price1=200.0;
	float price2 =300.0;
	float price3 =400.0;
	
	float *ptr1=&price1;
	float *ptr2=&price2;
	float *ptr3=&price3;
	
	
	int espresso,Latte,Cappuccino;
	
	int *q1=&espresso;
	int *q2=&Latte;
	int *q3=&Cappuccino;
	
	
	cout<<"Enter quantity of Espresso :";
	cin>>espresso;
	cout<<"Enter quantity of Latte :";
	cin>>Latte;
	cout<<"Enter quantity of Cappuccino :";
	cin>>Cappuccino;
	
	
	float Etotalprice =*q1 * *ptr1;
	float Ltotalprice =*q1 * *ptr2;
	float Ctotalprice =*q3 * *ptr3;
	
	float *Etotal =&Etotalprice;
	float *Ltotal =&Ltotalprice;
	float *Ctotal=&Ctotalprice;
	
	
	// calculate total bill 
	
	float totalbill= *Etotal + *Ltotal + *Ctotal;
	
	
	float *ctotal=&totalbill;
	
	
	
	
	//Cafee recode
	
	
	cout<<"Espresso="<< *Etotal<<endl;
	cout<<"Latte="<< *Ltotal<<endl;
	cout<<"Cappuccino="<<*Ctotal <<endl;
	cout<<"Total bill="<<*ctotal <<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
