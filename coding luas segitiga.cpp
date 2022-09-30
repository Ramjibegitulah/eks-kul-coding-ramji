#include<iostream>
using namespace std;

int main(){
	//luas segitiga
	int a;
	int t;
	float L;
	
	cout<<"============================"<<endl;
	cout<<"Program Hitung Luas Segitiga"<<endl;
	cout<<"============================"<<endl<<endl;
	
	//nilai alas dan tinggi diisi dari sini
	//a = 5;
	//t = 9;
	
	//nilai alas dan tingi diisi oleh user
	cout<<"Masukan Nilai Alas   = "; cin>>a;
	cout<<"Masukan Nilai Tinggi = "; cin>>t;
	L = (float) (a*t)/2;  // Rumus luas segitiga
	
	//cout<<"Alas   = "<<a<<endl;
	//cout<<"Tinggi = "<<t<<endl;
	cout<<"Luas Segitiga  = (a x t)/2"<<endl;
	cout<<"               = ("<<a<<" X "<<t<<") /2"<<endl;
	cout<<"               = "<<L;
	
	
		return 0;
}
