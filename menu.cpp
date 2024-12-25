#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int data[100];
int p; //untuk jumlah data

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

void tukar(int *a,int *b){
  int t=*a;
  *a=*b;
  *b=t;
}

void tampilkanData(int p){
cout << sikc[p].nim<<" , "<< sikc[p].nama<<" , "<< sikc[p].alamat<<" , "<<
sikc[p].ipk<<endl;
}

void perbaikanData(int p)
{
system("cls");
fflush(stdin);
cout << "masukan nama: ";
getline (cin, sikc[p].nama);
cout << "masukan alamat: ";
getline (cin, sikc[p].alamat);
cout << "masukan ipk: ";
cin >> sikc[p].ipk;
cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void sortingAscending(int data[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                tukar(&data[j], &data[j + 1]);
            }
        }
    }
    cout << "Data berhasil diurutkan secara ascending!";
}

void sortingDescending(int data[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (data[j] < data[j + 1]) {
                tukar(&data[j], &data[j + 1]);
            }
        }
    }
    cout << "Data berhasil diurutkan secara descending!";
}

int main() {
    int data[100];
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
                if (p > 0) {
                    sortingDescending(data, p);
                } else {
                    cout << "Data kosong. Masukkan data terlebih dahulu!";
                }
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