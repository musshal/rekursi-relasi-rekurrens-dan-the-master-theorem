/* File     : MenaraHanoi.c */
/* Nama     : Musthafa Kamal Faishal */
/* NIM      : 24060118120042 */
/* Tanggal  : 22 September 2021 */
/* Deskripsi: Menampilkan langkah-langkah yang harus dilakukan untuk menyelesaikan puzzle menara hanoi */

/* file header */
#include <stdio.h>

/* prosedur memindahkan piringan menara hanoi */
void menaraHanoi(int N, char A, char B, char C) {
  /* kamus lokal */
  int i; // iterator

  /* algoritma */
  if (N > 0) {
    menaraHanoi(N - 1, A, C, B);
    printf("Pindahkan piringan %d dari %c ke %c\n", N, A, C);
    menaraHanoi(N - 1, B, A, C);
  }
}

/* driver */
int main() {
  /* kamus */
  int N; // jumlah piringan
  char T[2]; // tiang awal
  int i; // iterator

  /* algoritma */
  scanf("%d", &N);

  menaraHanoi(N, 'A', 'B', 'C');

  return 0;
}
