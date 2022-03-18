#include <iostream>
using namespace std;

int main()
{
	float a,b,hasil;
	char operasi;
	cout<<"\t\t Program Kalkulator Sederhana"<<endl<<endl;
	cout<<" Nilai a\t\t\t\t: "; cin>>a;
	cout<<" Masukkan operasi ( + | - | * | / )\t: "; cin>>operasi;
	cout<<" Nilai b\t\t\t\t: "; cin>>b;
	
	if(operasi == '+'){
	hasil = a+b;}
	else if (operasi == '-'){
	hasil = a-b;}
	else if (operasi == '*'){
	hasil = a*b;}
	else if (operasi == '/'){
	hasil = a/b;}
	
	cout<<endl<<" Hasil : "<<hasil<<endl;
	
	return 0;
}
