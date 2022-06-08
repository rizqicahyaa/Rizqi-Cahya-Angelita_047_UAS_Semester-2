#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main()
{
	//pendeklarasian 
    char namakota1[10],namakota2[10],namakota3[10],namakota4[10],namakota5[10];
    int jumlah,panjang, hasil1,hasil2,hasil3,hasil4,hasil5,hasil6,hasil7;

    //Untuk menginput jumlah kota
    cout<<"Berapa jumlah kota di Kerajaan Britan : \n";
    cin>>jumlah;
    cout<<endl;

    //Untuk menginput nama kota
    cout<<"Kota Pertama : ";
    cin>>namakota1;
    cout<<"Kota Kedua   : ";
    cin>>namakota2;
    cout<<"Kota Ketiga  : ";
    cin>>namakota3;
    cout<<"Kota Keempat : ";
    cin>>namakota4;
	cout<<"Kota Kelima  : ";
	cin>>namakota5;

	cout<<endl;

	//graph
	//Untuk menampilkan graph yang terjadi
	cout<<"Sisi-sisinya : ";
    cout<<namakota1<<namakota2<<",";
    cout<<namakota1<<namakota4<<",";
    cout<<namakota1<<namakota5<<",";
    cout<<namakota2<<namakota3<<",";
    cout<<namakota3<<namakota5<<",";
    cout<<namakota3<<namakota4<<",";
    cout<<namakota4<<namakota5<<endl<<endl;

	//edge
	//Untuk menampilkan panjang jalan yang menghubungkan vertex
	cout<<"Panjang jalan antar kota"<<endl;
	cout<<"Panjang "<<namakota1<<" ke "<<namakota2<< ": "; cin>> hasil1;
	cout<<"Panjang "<<namakota1<<" ke "<<namakota4<< ": "; cin>> hasil2;
	cout<<"Panjang "<<namakota1<<" ke "<<namakota5<< ": "; cin>> hasil3;
	cout<<"Panjang "<<namakota2<<" ke "<<namakota3<< ": "; cin>> hasil4;
	cout<<"Panjang "<<namakota3<<" ke "<<namakota5<< ": "; cin>> hasil5;
	cout<<"Panjang "<<namakota3<<" ke "<<namakota4<< ": "; cin>> hasil6;
	cout<<"Panjang "<<namakota4<<" ke "<<namakota5<< ": "; cin>> hasil7;

	cout<<endl;

	//adjacent
	//Untuk menampilkan jalan yang menghubungkan kedua simpul (x,y,z)
	cout<<"Seluruh jalan yang ada di Kerajaan Britan dan panjang jalannya : \n";
	cout<<"("<<namakota1<<","<<namakota2<<","<<hasil1<<") ";
	cout<<"("<<namakota1<<","<<namakota4<<","<<hasil2<<") ";
	cout<<"("<<namakota1<<","<<namakota5<<","<<hasil3<<") ";
	cout<<"("<<namakota2<<","<<namakota3<<","<<hasil4<<") ";
	cout<<"("<<namakota3<<","<<namakota5<<","<<hasil5<<") ";
	cout<<"("<<namakota3<<","<<namakota4<<","<<hasil6<<") ";
	cout<<"("<<namakota4<<","<<namakota5<<","<<hasil7<<") ";

	cout<<endl<<endl;

	// Untuk menampilkan tempat pedagang berada
	cout<<"Kota tempat pedagang sekarang : \n";
	cout<<namakota1;

	cout<<endl<<endl;

	//Untuk menampilkan kota yang diserang naga
	cout<<"Kota yang diserang naga : \n";
	cout<<namakota3;

	cout<<endl<<endl;

	//Untuk menampilkan kota yang terdapat kastil
	cout<<"Kota yang memiliki kastil : \n";
	cout<<namakota5;

	cout<<endl<<endl;

	//Untuk menampilkan vertex tercepat untuk selamat
	cout<<"Jalur yang paling cepat ditempuh : \n";
	cout<<namakota1<<"-"<<namakota4<<"-"<<namakota5;

	cout<<endl<<endl;

	//total edge yang harus ditempuh
	cout<< "Dengan jarak yang ditempuh : \n";
	cout<<hasil2+hasil7<<endl<<endl;


	getch();
	return 0;
}
