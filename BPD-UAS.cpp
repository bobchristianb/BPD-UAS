#include <stdio.h>

int main() {
  // Menginput 10 nilai mahasiswa
  int nilai_mahasiswa[10];
  for (int i = 0; i < 10; i++) {
    printf("Masukkan nilai mahasiswa ke-%d: ", i+1);
    scanf("%d", &nilai_mahasiswa[i]);
  }

  // Menampilkan nilai mahasiswa yang lulus
  for (int i = 0; i < 10; i++) {
    if (nilai_mahasiswa[i] >= 60) {
      printf("\nNilai Mahasiswa Yang Lulus : %d\n", nilai_mahasiswa[i]);
    }
  }

  return 0;
}