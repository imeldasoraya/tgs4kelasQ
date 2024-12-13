#include <iostream>
#include <conio.h>
using namespace std;

int arrdata[100];
int n;

void masukkanData();
void tampilkanData();
void sortingAsc();
void sortingDsc();
void tukar(int *a, int *b);

int main()
{
  char pl;
  cout << "Masukkan jumlah data (maksimal 100): ";
  cin >> n; // Mengatur jumlah data di sini
  if (n > 100)
    n = 5; // Batasi jumlah data maksimal 100

  do
  {

    system("cls");
    cout << "Aplikasi sorting bubble" << "\n";
    cout << "1. masukkan data" << "\n";
    cout << "2. tampilkan data" << "\n";
    cout << "3. sorting asc" << "\n";
    cout << "4. sorting dsc" << "\n";
    cout << "5. Exit" << "\n";
    cout << "Masukan angka :";
    pl = getch();

    switch (pl)
    {
    case '1':
      /* code */
      masukkanData();
      break;
    case '2':
      tampilkanData();
      /* code */
      break;
    case '3':
      sortingAsc();
      /* code */
      break;
    case '4':
      sortingDsc();
      /* code */
      break;
    case '5':
      cout << "Terima kasih.\n";
      /* code */
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

void masukkanData()
{
  system("cls");
  for (int i = 0; i < n; i++)
  {
    cout << "Masukkan data ke-" << (i + 1) << ": ";
    cin >> arrdata[i];
  }
  cout << "Data berhasil dimasukkan.\n";
  getch();
}

void tampilkanData()
{
  system("cls");
  cout << "Data yang dimasukkan:\n";
  for (int i = 0; i < n; i++)
  {
    cout << arrdata[i] << " ";
  }
  cout << "\n";
  getch();
}
void tukar(int *a, int *b)
{
  int t = *a;
  *a = *b;
  *b = t;
}

void sortingAsc()
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arrdata[j] > arrdata[j + 1])
      {
        tukar(&arrdata[j], &arrdata[j + 1]);
      }
    }
  }
  cout << "Data berhasil diurutkan secara ascending.\n";
  getch();
}

void sortingDsc()
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arrdata[j] < arrdata[j + 1])
      {
        tukar(&arrdata[j], &arrdata[j + 1]);
      }
    }
  }
  cout << "Data berhasil diurutkan secara descending.\n";
  getch();
}