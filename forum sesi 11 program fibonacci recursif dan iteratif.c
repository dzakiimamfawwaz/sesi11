/*
Dzaki Imam Fawwaz - 2702367486
28 Sep 2023
version : 1.0.4
*/

#include <stdio.h>
#include <stdlib.h>

// function prototype
int fibonacci_iteratif(int n);      // iteratif
int fibonacci_rekursif(int n);      // rekursif
void nilai();                       // nilai yang ditentukan di forum
void menu();                        // menu
void clearScreen();                 // membersihkan layar
void validasi_check();              // validasi check
void terimakasih();                 // terimakasih

/*
	main function
*/
int main() {
    int pilihan, n;

    while (1) {
        menu();
        printf("Masukkan pilihan dan enter : ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                printf("\nMasukkan nilai n: ");
                scanf("%d", &n);
                printf("\n\033[32mBilangan Fibonacci ke-%d (iteratif): %d\033[0m\n", n, fibonacci_iteratif(n));
                break;

            case 2:
                printf("\nMasukkan nilai n: ");
                scanf("%d", &n);
                printf("\n\033[32mBilangan Fibonacci ke-%d (rekursif): %d\033[0m\n", n, fibonacci_rekursif(n)); // recursif lebih lambat jika untuk angka besar, karna dia menghitung dari awal
                break;

            case 3:
                nilai();
                break;
                
            case 4:
            	clearScreen();
				break;  
            	
            case 5:
            	terimakasih(); 
            	exit(0);
            
            default:
                validasi_check(); 
                break;
        }
    }

    return 0;
}

/*
	body function yang diperlukan
*/

// Fungsi untuk mendeklarasikan penghitungan fibonaci secara iteratif
int fibonacci_iteratif(int n) {
    int i;
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        int a = 0, b = 1, next;
        for (i = 2; i <= n; i++) {
            next = a + b;
            a = b;
            b = next;
        }
        return b;
    }
}

// Fungsi untuk mendeklarasikan penghitungan fibonaci secara rekursif
int fibonacci_rekursif(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci_rekursif(n - 1) + fibonacci_rekursif(n - 2);
    }
}

// Deklarasi nilai yang diinginkan di forum
void nilai() {
    int n;
    n = 5;
    // output dimana n = 5
    printf("\n\nBilangan Fibonacci ke-%d (iteratif): %d\n", n, fibonacci_iteratif(n));
    printf("Bilangan Fibonacci ke-%d (rekursif): %d\n\n", n, fibonacci_rekursif(n));

    n = 20;
    // output dimana n = 20
    printf("Bilangan Fibonacci ke-%d (iteratif): %d\n", n, fibonacci_iteratif(n));
    printf("Bilangan Fibonacci ke-%d (rekursif): %d\n\n", n, fibonacci_rekursif(n));

    n = 30;
    // output dimana n = 30
    printf("Bilangan Fibonacci ke-%d (iteratif): %d\n", n, fibonacci_iteratif(n));
    printf("Bilangan Fibonacci ke-%d (rekursif): %d\n\n", n, fibonacci_rekursif(n));

    n = 41;
    // output dimana n = 43
    printf("Bilangan Fibonacci ke-%d (iteratif): %d\n", n, fibonacci_iteratif(n));
    printf("Bilangan Fibonacci ke-%d (rekursif): %d\n\n", n, fibonacci_rekursif(n));
}

// Main menu
void menu() {
    printf("\n=======================================\n");
    printf("Selamat datang di kelas Fibonacci Dzaki\n");
    printf("=======================================\n");
    printf("             Pilih Menu\n");
    printf("=======================================\n");
    printf("1. Fibonacci iteratif\n");
    printf("2. Fibonacci rekursif\n");
    printf("3. Nilai yang ditentukan di forum\n");
    printf("4. Clear screen\n");
    printf("5. Exit\n");
    printf("=======================================\n");  
}

// validasi check
void validasi_check()
{
  printf("\n\033[41mInput Invadlid. Masukkan input 1-5\033[0m\n");
}

// terimakasih
void terimakasih()
{
  printf("\n\033[32m----------------------------------\n");
  printf("          Terimakasih :)\n");
  printf("   Semoga harimu menyenangkan :)\n");
  printf("----------------------------------\033[0m\n");
}

// clear screen
void clearScreen()
{
  printf("\033[2J"); // Menggunakan ANSI escape code untuk membersihkan layar
  printf("\033[H");  // Mengatur kursor ke posisi awal (0,0)
}

