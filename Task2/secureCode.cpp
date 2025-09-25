#include<iostream>
using namespace std;


int  generatcode(int n){
	 int fact=1;
	 if(n==0){
	 	fact =1;
	 }
	 else{
	    	for(int i =n;i>=1;i--){
	            
				fact*=i;
	     }
	    

	    } return fact;
	
}
int (*ptrfact)(int)=&generatcode;





int main(){
	int n;
	cout<<"Enter number :";
	cin>>n;
	
//	int *ptr=&n;
	
//	int factorial= generatcode(n);
	int factorial=(*ptrfact)(n);
	cout<<"factorial of number is ="<<factorial<<endl;
	return 0;
}
