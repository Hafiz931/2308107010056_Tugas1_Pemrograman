#include <stdio.h>

int main() {
  int tahun;

  printf("Masukkan tahun: ");
  scanf("%d", &tahun);

  while (tahun < 1000 || tahun > 9999) {
    printf("Tahun yang diinputkan tidak valid! Masukkan kembali tahun: ");
    scanf("%d", &tahun);
  }

  if ((tahun % 4 == 0 && tahun % 100 != 0) || tahun % 400 == 0) {
    printf("Tahun %d adalah tahun kabisat.\n", tahun);
  } else {
    printf("Tahun %d bukan tahun kabisat.\n", tahun);
  }

  return 0;
}
