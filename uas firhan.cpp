#include<iostream>
using namespace std;


int main(){

    char nama[30],pembeli[30];
    int harga, jumlah,total,jumtotal,jumbayar;
    string input, kode;
    
    cout << "       * SELAMAT DATANG *        "<<endl;
    cout << "      GOLDEN OCEAN HOTEL       "<<endl;
    cout << "==============================="<<endl;
    cout << "nama pembeli :";
    cin >> pembeli;
    cout << "pilihan kamar yang tersedia"<<endl;
    cout << "001 - single room - RP. 450.000"<<endl;
    cout << "002 - double room - RP. 900.000"<<endl;
    cout << "003 - family room - RP. 1200.000"<<endl;
    
    
    cout <<endl;
    cout <<endl;
    cout << "kamar yang dipilih :";
    cin >> kode;
    cout << "jumlah beli :";
    cin >> jumlah;
    
    
    if (kode == "001"){
    	cout << "single room";
    	harga = 4500000;
    } else if (kode == "002"){
    	cout << "double room :";
    	harga = 900000;
    } else if (kode == "003"){
    	cout << "family room :";
    	harga = 1200000;
    } else {
    	cout << "Barang yang dipilih tidak tersedia";
	}

    cout << endl;
    cout <<"================================================"<<endl;
    cout << "Struk pembayaran" <<endl;
    cout << "==============================================="<<endl;
    cout << "nama pembeli :"<<pembeli<<endl;
    cout << "harga        :"<<harga<<endl;
    cout << "jumlah       :"<<jumlah<<endl;


    total = harga * jumlah;
    
    cout << "total      :"<<total<<endl;

    cout <<endl;
    
}    
    

