#include <stdio.h>

int main() {
    int pilihan;
    printf("Pilih konversi yang ingin dilakukan:\n");
    printf("1. Bilangan Desimal ke Biner\n");
    printf("2. Bilangan Biner ke Desimal\n");
    printf("3. Bilangan Desimal ke Octal\n");
    printf("4. Bilangan Octal ke Desimal\n");
    printf("Masukkan pilihan (1-4): ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1: {
            int desimal, sisa, biner = 0, basis = 1;
            printf("Masukkan bilangan desimal: ");
            scanf("%d", &desimal);

            while (desimal > 0) {
                sisa = desimal % 2;
                biner = biner + sisa * basis;           
                desimal = desimal / 2;
                basis = basis * 10;
            }
            printf("Biner: %d\n", biner);
            break;
        }
        case 2: {
            int biner, desimal = 0, basis = 1, sisa;
            printf("Masukkan bilangan biner: ");
            scanf("%d", &biner);

            while (biner > 0) {
                sisa = biner % 10;
                desimal = desimal + sisa * basis;
                biner = biner / 10 ;
                basis = basis * 2;
            }
            printf("Desimal: %d\n", desimal);
            break;
        }
        case 3: {
            int desimal, octal[100], i = 0;
            printf("Masukkan bilangan desimal: ");
            scanf("%d", &desimal);

            while (desimal != 0) {
                octal[i] = desimal % 8;
                desimal = desimal / 8;
                i++;
            }
            printf("Octal: ");
            for (int j = i - 1; j >= 0; j--) {
                printf("%d", octal[j]);
            }
            printf("\n");
            break;
        }
        case 4: {
            int octal, desimal = 0, basis = 1, sisa;
            printf("Masukkan bilangan octal: ");
            scanf("%d", &octal);

            while (octal > 0) {
                sisa = octal % 10;
                desimal = desimal + sisa * basis;
                octal = octal / 10 ;
                basis = basis * 8;
            }
            printf("Desimal: %d\n", desimal);
            break;
        }
        default:
            printf("Pilihan tidak valid.\n");
    }

    return 0;
}
