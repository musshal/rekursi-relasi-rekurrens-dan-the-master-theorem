/* File     : MenaraHanoi.cpp */
/* Nama     : Musthafa Kamal Faishal */
/* NIM      : 24060118120022 */
/* Tanggal  : 22 September 2021 */
/* Deskripsi: Menampilkan langkah-langkah yang harus dilakukan untuk menyelesaikan puzzle menara hanoi*/

/* file header */
#include <iostream>

using namespace std;

/* prosedur memindahkan piringan menara hanoi */
void hanoi(int n, char tiang_asal, char tiang_tambahan, char tiang_tujuan) {
  /* kamus lokal */

  /* algoritma */
  if (n==0) {
      return;
  } else {
      hanoi(n-1, tiang_asal, tiang_tujuan, tiang_tambahan);
      cout << "Pindahkan piringan " << n << " dari " << tiang_asal << " ke " << tiang_tujuan << "\n";
      hanoi(n-1, tiang_tambahan, tiang_asal, tiang_tujuan);
  }
}

/* driver */
int main () {
    /* kamus */
    int N; // jumlah piringan
    char tiang_asal2, tiang_tujuan2, tiang_tambahan2; // tiang-tiang

    /* algoritma */
    cin >> N;
    cin >> tiang_asal2;
    cin >> tiang_tujuan2;

    if (tiang_asal2 == 'A') {
        if(tiang_tujuan2 == 'B') {
            tiang_tambahan2 = 'C';
        } else {
            tiang_tambahan2 = 'B';
        }
    } else if (tiang_asal2 == 'B') {
        if(tiang_tujuan2 == 'C') {
            tiang_tambahan2 = 'A';
        } else {
            tiang_tambahan2 = 'C';
        }
    } else {
        if(tiang_tujuan2 == 'A') {
            tiang_tambahan2 = 'B';
        } else {
            tiang_tambahan2 = 'A';
        }
    }

    hanoi(N, tiang_asal2, tiang_tambahan2, tiang_tujuan2);

    return 0;
}
