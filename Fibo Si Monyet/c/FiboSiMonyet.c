/* File     : FiboSiMonyet.c */
/* Nama     : Musthafa Kamal Faishal */
/* NIM      : 24060118120042 */
/* Tanggal  : 22 September 2021 */
/* Deskripsi: Program untuk mengetahui setiap respon Fibo jika seseorang */
/*            menyebutkan T buah angka */

/* file header */
#include <stdio.h>

void printFibonacci(int n) {
  /* kamus lokal */
  static int n1 = 0, n2 = 1, n3;

  
  /* algoritma */
  if(n > 0) {    
    n3 = n1 + n2;    
    n1 = n2;    
    n2 = n3;    
    printf("%d ",n3);    
    printFibonacci(n-1);    
  }
}

int main() {
  printf("%d %d ", 0, 1);
  printFibonacci(15);

  return 0;
}
