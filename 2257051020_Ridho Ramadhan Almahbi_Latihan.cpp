#include<iostream>
using namespace std;

int main(){
	const float phi = 3.14;
	float L, r;
	
	cout<<"Masukkan jari-jari lingkaran :";
	cin>>r;
	
	L = phi * r * r;
	
	cout<<"diketahui lingkaran dengan ="<<endl;
	cout<<"phi \t =`	``	`<<phi<<endl;
	cout<<"r \t ="<<r<<endl;
	cout<<"======================="<<endl;
	
	cout<<"Luas lingkaran dengan jari-jari :"<<r<<" cm "<<" adalah ";
	cout<<L<<" cm2 ";
}
