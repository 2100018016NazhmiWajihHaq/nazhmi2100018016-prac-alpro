#include <iostream>
using namespace std;
int main() {
  float bil1, bil2, opr;
  char lagi;
  do {
    cout << "Masukkan Bilangan Pertama : ";
    cin >> bil1;
    cout << "Masukkan Bilangan Kedua : ";
    cin >> bil2;
    cout << " K A L K U L A T O R ";
    cout << endl;
    cout << "1. Penjumlahan (+) " << endl;
    cout << "2. Pengurangan (-) " << endl;
    cout << "3. Perkalian (*) " << endl;
    cout << "4. Pembagian (/) " << endl;
    cout << "Pilih Operasi yang diinginkan : " << endl;
    cin >> opr;

    if (opr == 1) {
      cout << "Hasil Penjumlahan dari <<bil1<< + <<bil2<< adalah : "
           << bil1 + bil2;
    } else if (opr == 2) {
      cout << "Hasil Pengurangan dari <<bil1<< - <<bil2<< adalah : "
           << bil1 - bil2;
    } else if (opr == 3) {
      cout << "Hasil Perkalian dari <<bil1<< * <<bil2<< adalah : "
           << bil1 * bil2;
    } else if (opr == 4) {
      cout << "Hasil Pembagian dari <<bil1<< / <<bil2<< adalah : "
           << bil1 / bil2;
    }
    cout << endl;
    cout << "Mau lanjut?? (y/t)";
    cin >> lagi;
    cout << endl;
  } while (lagi != 't');
  cout << "Thanks";
  return 0;
}