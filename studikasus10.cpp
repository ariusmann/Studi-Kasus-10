#include <iostream>
using namespace std;

class mhs{
	public:
		void input();
		void output();
		
	private:
		char nama[20];
		char nim[10];
		char lagi;
		mhs *berikut;
		mhs *kepala = NULL;
};

void mhs::input(){
	mhs *baru;
	cout << "DATA MAHASISWA BABAK FINAL LOMBA PARMATIKA" << endl;
	//input
	do{
		baru = new mhs;
		cout << "\n\nMasukkan Nama : ";
		cin >> baru->nama;
		cout << "Masukkan NIM : ";
		cin >> baru->nim;
		baru->berikut = kepala;
		kepala = baru;
		cout << "Lagi (y/t)? : ";
    cin >> lagi;
	} while (lagi != 't');
	cout << "\n\n----------------------------------" << endl;
}

void mhs::output(){
	//cetak
	cout << "List Data Mahasiswa Babak Final" << endl;
	cout << "==================================" << endl;
	cout << "\nNO  NAMA      NIM" << endl;
	mhs *cetak = kepala;
	int i = 1;
	while (cetak != NULL){
		cout << i << ".  " << cetak->nama << "     " << cetak->nim << endl;
		i++;
		cetak = cetak->berikut;
	}
}

int main(){
	mhs m;
	m.input();
	m.output();
	return 0;
}
// syafa 2100018507
// ari 2100018468
// ridho 2100018475