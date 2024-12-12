#include <iostream>
#include <conio.h>
using namespace std;

int dataArray[100];
int n; //untuk jumlah data

void tukar(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void dMenu(){
system("cls");
cout<<"Aplikasi Sorting Bubble"<<"\n";       
cout<<"1. masukkan data"<<"\n";            
cout<<"2. tampilkan data"<<"\n";            
cout<<"3. sorting asc"<<"\n";           
cout<<"4. sorting dsc"<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka :";        

}

// Fungsi untuk memasukkan data
void inputData() {
    system("cls");
    cout << "Masukkan jumlah data: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Masukkan data ke-" << (i + 1) << ": ";
        cin >> dataArray[i]; // Menggunakan `dataArray` (global)
    }
    cout << "Data berhasil dimasukkan!" << endl;
    getch();
}

// Fungsi untuk menampilkan data
void tampilkanData() {
    system("cls");
    cout << "Data saat ini: ";
    for (int i = 0; i < n; i++) {
        cout << dataArray[i] << " "; // Menggunakan `dataArray` (global)
    }
    cout << endl;
    getch();
}

// Fungsi untuk sorting ascending
void sortingAsc() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (dataArray[j] > dataArray[j + 1]) { // Menggunakan `dataArray` (global)
                tukar(&dataArray[j], &dataArray[j + 1]);
            }
        }
    }
    cout << "Data telah diurutkan secara ascending!" << endl;
    getch();
}

// Fungsi untuk sorting descending
void sortingDsc() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (dataArray[j] < dataArray[j + 1]) { // Menggunakan `dataArray` (global)
                tukar(&dataArray[j], &dataArray[j + 1]);
            }
        }
    }
    cout << "Data telah diurutkan secara descending!" << endl;
    getch();
}

int main() {
    char pl;
    do {
        dMenu();
        pl = getch();
        switch (pl) {
            case '1':
                inputData();
                break;
            case '2':
                tampilkanData();
                break;
            case '3':
                sortingAsc();
                break;
            case '4':
                sortingDsc();
                break;
            case '5':
                break;
            default:
                system("cls");
                cout << "Pilihan tidak tersedia!" << endl;
                getch();
                break;
        }
    } while (pl != '5');
    return 0;
}