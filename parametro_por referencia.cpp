
#include<iostream>
using namespace std;


// metodos y envio de parametros por valor
void suma(int &num1, int &num2){
	int resultado = 0;
	num1+=1; //11
	num2+=1; //21
	resultado = num1+num2; //32
	cout<<resultado<<endl;
}
main(){
	int a=10, b= 20;
	suma(a,b);
	cout<<"a:"<<a<<endl;
		cout<<"b:"<<b<<endl;
	
	
	
	system("pause");
}