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

void tampilkanData(){
    for (int i = 0; i <= pos; i++) {
        cout << i+1 << ". " << sikc[i].nim << " , " << sikc[i].nama << " , " << sikc[i].alamat << " , " << sikc[i].ipk << endl;
    }
}

void masukanData(){
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
}

void perbaikanData(){
    int idx;
    tampilkanData();
    cout << "Masukkan nomor data yang ingin diperbaiki: ";
    cin >> idx;
    idx--;
    if (idx >= 0 && idx <= pos) {
        system("cls");
        fflush(stdin);
        cout << "masukan nama: ";
        getline (cin, sikc[idx].nama);
        cout << "masukan alamat: ";
        getline (cin, sikc[idx].alamat);
        cout << "masukan ipk: ";
        cin >> sikc[idx].ipk;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else {
        cout << "Nomor tidak valid!" << endl;
    }
}

void hapusData() {
    int idx;
    tampilkanData();
    cout << "Masukkan nomor data yang ingin dihapus: ";
    cin >> idx;
    idx--;
    if (idx >= 0 && idx <= pos) {
        for (int i = idx; i < pos; i++) {
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
                masukanData();
                break;
            }
            case '2': {
                system("cls");
                tampilkanData();
                getch();
                break;
            }
            case '3': {
                system("cls");
                perbaikanData();
                getch();
                break;
            }
            case '4': {
                system("cls");
                hapusData();
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