#include <iostream>
#include <conio.h>
#include <queue>
#define MAX 15
using namespace std;

int urutan = 1;
queue <int> antrian;

//show queue
void showq(queue<int> antrian_apotek){
    queue <int> tampil = antrian_apotek;
    cout<<"Antrian Saat Ini"<<endl;
    if(tampil.empty()){
    	cout<<"[Belum ada antrian]"<<endl<<endl;
	}else{
		cout<<tampil.front()<<endl<<endl;
		cout<<"Antrian Berikutnya"<<endl;
		tampil.pop();
		if(tampil.empty()){
			cout<<"[Kosong]";
		}else{
		    while (!tampil.empty()) {
		        cout<<tampil.front()<<" ";
		        tampil.pop();
		    }
		}
	    cout<<endl<<endl;
	}
}

//show size
void shows(queue<int> antrian_apotek){
	queue<int> jumlah = antrian_apotek;
	cout<<"Jumlah antrian [Maksimal "<<MAX<<"]"<<endl;
	cout<<jumlah.size();
	cout<<endl<<endl;
}

void push(){
	if(antrian.size()==MAX){
		cout<<"Antrian sudah penuh";
	}else{
		while(urutan<=MAX){
			antrian.push(urutan);
			break;
		}
		urutan++;
		cout<<"Antrian nomor "<<antrian.back()<<" telah masuk";
	}
}

void pop(){
	if(antrian.empty()){
		cout<<"Antrian sudah habis";
	}else{
		cout<<"Antrian nomor "<<antrian.front()<<" telah keluar";
	antrian.pop();
	}
}

void empty(){
	if(antrian.empty()){
		cout<<"Antrian sudah kosong";
	}else{
		while(!antrian.empty()){
		antrian.pop();
		}
		urutan = 1;
		cout<<"Antrian berhasil dihilangkan"<<endl;
	}
}
