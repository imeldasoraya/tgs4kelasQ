#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

struct mahasiswa {
string nim;
string nama;
string alamat;
float ipk;
};

mahasiswa sikc[30];

int pos=-1;
int p;

void dMenu(){
system("cls");
cout<<"Aplikasi kelasQ"<<"\n";       
cout<<"1. Masukkan data"<<"\n";            
cout<<"2. Tampilkan data"<<"\n";            
cout<<"3. Perbaikan data"<<"\n";           
cout<<"4. Hapus data"<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka :";        
}

void tampilkanData(int p){
    for (int p = 0; p <= pos; p++) {
        cout << p+1 << ". " << sikc[p].nim << " , " << sikc[p].nama << " , " << sikc[p].alamat << " , " << sikc[p].ipk << endl;
    }
}

void perbaikanData(int p){
    tampilkanData(p); 
    cout << "Masukkan nomor data yang ingin diperbaiki: ";
    cin >> p; 
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    p--; 
    if (p >= 0 && p <= pos) { 
        system("cls");
        fflush(stdin);
        cout << "masukan nama: ";
        getline (cin, sikc[p].nama); 
        cout << "masukan alamat: ";
        getline (cin, sikc[p].alamat); 
        cout << "masukan ipk: ";
        cin >> sikc[p].ipk; 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    } else {
        cout << "Nomor tidak valid!" << endl; 
    }
}

void hapusData(int p) {
    tampilkanData(p);
    cout << "Masukkan nomor data yang ingin dihapus: ";
    cin >> p;
    p--;
    if (p >= 0 && p <= pos) {
        for (int i = p; i < pos; i++) {
            sikc[i] = sikc[i + 1];
        }
        pos--;
        cout << "Data berhasil dihapus!" << endl;
    } else {
        cout << "Nomor tidak valid!" << endl;
    }
}

int main() {
    char pl;

    do {
        dMenu();
        pl = getch();   

        switch (pl) {
            case '1': { 
                pos++;
                system("cls");
                fflush(stdin);
                cout << "masukan nim: ";
                getline (cin, sikc[pos].nim);
                cout << "masukan nama: ";
                getline (cin, sikc[pos].nama);
                cout << "masukan alamat: ";
                getline (cin, sikc[pos].alamat);
                cout << "masukan ipk: ";
                cin >> sikc[pos].ipk;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                break; 
            } 

            case '2': { 
                system("cls");
                tampilkanData(p);
                getch();
                break;
            } 

            case '3': { 
                system("cls");
                perbaikanData(p);
                getch();
                break;
            } 

            case '4': { 
                system("cls");
                hapusData(p);
                getch();
                break;
            } 

            case '5': 
                break;
            default: 
                system("cls");
                cout << "Pilihan Tidak Tersedia";
                getch();
                break;
        }
    } while (pl != '5'); 

    return 0;
}