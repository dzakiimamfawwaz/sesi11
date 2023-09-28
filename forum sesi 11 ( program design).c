/*
Dzaki Imam Fawwaz - 2702367486
28 Sep 2023
version : 1.0.3

*/

#include <stdio.h>
#include <stdlib.h>

// Function prototype yang diperlukan
void main_menu();              // main menu
void get_entity_names();       // menu 1
void produce_design_reports(); // menu 2
void generate_reports();       // menu 3
void choice_2(int *pilihan2);  // pilihan dari menu 2
void collate_entities();       // sub menu dari menu2
void clearScreen();            // membersihkan layar
void validasi_check();         // validasi check
void terimakasih();            // terimakasih

int main()
{
  int pilihan, pilihan2;
  while (1)
  {
    // main menu
    main_menu();
    printf("Masukkan pilihan menu dan enter: ");
    scanf("%d", &pilihan);

    // pilihan menu yang dipilih user
    switch (pilihan)
    {
    case 1:
      get_entity_names();
      break;

    case 2:
      produce_design_reports();
      choice_2(&pilihan2);
      break;

    case 3:
      generate_reports();
      break;

    case 4:
      clearScreen();
      break;

    case 5:
      terimakasih();
      exit(0);

    default:
      validasi_check(); // validasi check
      break;
    }
  }
  return 0;
}

// Fungsi body yang diperlukan didalam program ini
void main_menu()
{
  printf("\n==================================================\n");
  printf("        Selamat Datang di Dzaki Design\n");
  printf("==================================================\n\n");
  printf("                   PILIH MENU\n");
  printf("==================================================\n");
  printf("1. Ambil nama - nama entitas design\n");
  printf("2. Membuat laporan design\n");
  printf("3. Menghasilkan laporan\n");
  printf("4. Clear Screen\n");
  printf("5. Keluar\n");
}

void get_entity_names()
{
  printf("\n--------------------------------------\n");
  printf(" Mengambil nama - nama entitas design\n");
  printf("--------------------------------------\n");
}

void produce_design_reports()
{
  printf("\n----------------------------------\n");
  printf("      Membuat laporan design\n");
  printf("----------------------------------\n");
}

void collate_entities()
{
  printf("\n-------------------------------------------\n");
  printf("  Mengumpulkan dan menyusun entitas design\n");
  printf("---------------------------------------------\n");
  printf("\033[42mDesign berhasil dikumpulkan dan disusun :)\033[0m\n");
}

void generate_reports()
{
  printf("\n----------------------------------\n");
  printf("    Menghasilkan laporan\n");
  printf("----------------------------------\n");
  printf("\033[42mLaporan berhasil dibuat :)\033[0m\n");
}

// fungsi choice untuk colla
void choice_2(int *pilihan2)
{
  do
  {
    printf("\nPilihan menu:\n");
    printf("1. Kumpulkan dan susun laporan\n");
    printf("2. Buang laporan\n");
    printf("Masukkan pilihan : ");
    scanf("%d", pilihan2);

    if (*pilihan2 == 1)
    {
      collate_entities();
    }
    else if (*pilihan2 == 2)
    {
      printf("\n----------------------------------\n");
      printf("        Membuang design \n");
      printf("----------------------------------\n");
      printf("\033[41m Design berhasil dibuang :(\033[0m\n");
    }
    else
    {
      validasi_check();
    }

  } while (*pilihan2 != 1 && *pilihan2 != 2);
}

void validasi_check()
{
  printf("\n\033[41mInput Invadlid. Masukkan input 1-2\033[0m\n");
}

void terimakasih()
{
  printf("\n\033[32m----------------------------------\n");
  printf("          Terimakasih :)\n");
  printf("   Semoga harimu menyenangkan :)\n");
  printf("----------------------------------\033[0m\n");
}

void clearScreen()
{
  printf("\033[2J"); // Menggunakan ANSI escape code untuk membersihkan layar
  printf("\033[H");  // Mengatur kursor ke posisi awal (0,0)
}

