#include <iostream>
#include <conio.h>
#include <queue>
#define MAX 15
using namespace std;

int urutan = 1;
queue<int> antrian;

//show queue
void showq(queue<int> antrian_apotek){
    queue<int> tampil = antrian_apotek;
    cout<<"No. Antrian Sedang Dilayani"<<endl;
    if(tampil.empty()){
    	cout<<"[Belum ada antrian]"<<endl<<endl;
	}else{
		cout<<tampil.front()<<endl<<endl;
		cout<<"No. Antrian Berikutnya"<<endl;
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

int main(){
	int choose;
	do{
		showq(antrian);
		shows(antrian);
		cout<<"PROGRAM ANTRIAN TIKET APOTEK"<<endl;
		cout<<"1. Menambah Antrian"<<endl;
		cout<<"2. Antrian Berikutnya"<<endl;
		cout<<"3. Mengosongkan Antrian"<<endl;
		cout<<"4. Exit"<<endl;
		cout<<endl;
		cout<<"Pilih aksi : ";cin>>choose;;
		
		switch(choose){
			case 1 :
				push();
				getch();
				break;
			case 2 :
				pop();
				getch();
				break;
			case 3:
				empty();
				getch();
				break;
			case 4:
				cout<<"Program berakhir"<<endl;
				getch();
				break;
			default:
				cout<<"Tidak ada pilihan tersebut"<<endl;
				getch();
				break;
		}
		system("cls");
	}while(choose != 4);
}
