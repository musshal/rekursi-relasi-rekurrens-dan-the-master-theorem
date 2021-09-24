/* File     : FiboSiMonyet.cpp */
/* Nama     : Musthafa Kamal Faishal */
/* NIM      : 24060118120042 */
/* Tanggal  : 22 September 2021 */
/* Deskripsi: Program untuk mengetahui setiap respon Fibo jika seseorang */
/*            menyebutkan T buah angka */


// file header
#include <iostream>
#include <math.h>
using namespace std;

// fungsi untuk mengembalikan indeks bilangan fibonacci
int findIndex(int n) {
  /* kamus lokal */
  int a, b, c;
  int res;

  /* algoritma */
  if (n <= 1)
    return n;

  a = 0, b = 1, c = 1;
  res = 1;

  while (c < n) {
    c = a + b;

    res++;
    a = b;
    b = c;
  }

  return res;
}

/* prosedure untuk mengecek apakah sebuah akar kuadrat bilangan bulat adalah bilangan bulats */
bool isPerfectSquare(int x) {
  /* kamus lokal */
  int s;

  /* algoritma */
  s = sqrt(x);

  return ((s * s) == x);
}

/* prosedur untuk mengecek apakah sebuah bilangan adalah bilangan fibonacci */
bool isFibonacci(int n) {
  /* kamus lokal */

  /* algoritma */
  return isPerfectSquare((5 * n * n) + 4) || isPerfectSquare((5 * n * n) - 4);
}

/* driver */
int main() {
  /* kamus */
  int N; // jumlah angka yang akan disebutkan
  int i; // iterator

  /* algoritma */

  cin >> N; // inisialisasi jumlah angka yang akan disebutkan oleh masukan

  int T[N]; // wadah untuk menerima angka-angka yang disebutkan

  // inisialisasi angka-angka yang disebutkan
  for (i = 0; i < N; i++) {
    cin >> T[i];
  }
  
  // respon monyet setiap angka
  for (i = 0; i < N; i++)
    isFibonacci(T[i])? cout << "Menari " << findIndex(T[i]) << " kali \n":
                       cout << "Melempar Pisang " << T[i] << " kali \n" ;

  return 0;
}