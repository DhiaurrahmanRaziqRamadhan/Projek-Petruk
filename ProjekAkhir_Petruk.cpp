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
