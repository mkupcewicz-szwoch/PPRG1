#include <iostream>
#define N 9
/*Każda litera "N" zostanie zastąpiona cyfrą 9*/
using namespace std;
int sudoku[N][N] = {
   {0, 0, 7, 8, 0, 0, 9, 0, 0},
   {0, 9, 6, 0, 0, 0, 1, 2, 0},
   {2, 0, 0, 0, 0, 0, 5, 0, 0},
   {4, 1, 0, 0, 0, 0, 6, 0, 0},
   {9, 0, 8, 0, 1, 0, 0, 3, 4},
   {0, 6, 3, 4, 9, 2, 8, 1, 0},
   {0, 0, 0, 9, 4, 0, 0, 5, 0},
   {8, 0, 1, 0, 7, 0, 4, 6, 0},
   {5, 4, 0, 0, 3, 1, 2, 8, 0}
};


bool Czy_Liczba_Wystepuje_w_Kolumnie(int kolumna, int cyfra){ //sprawdza czy liczba znajduje sie w kolumnie
   for (int wiersz = 0; wiersz < N; wiersz++)
      if (sudoku[wiersz][kolumna] == cyfra)
         return true;
   return false;
}



bool Czy_Liczba_Wystepuje_w_Wierszu(int wiersz, int cyfra){ //sprawdza czy liczba znajduje sie w wierszu
   for (int kolumna = 0; kolumna < N; kolumna++)
      if (sudoku[wiersz][kolumna] == cyfra)
         return true;
   return false;
}



bool Czy_Liczba_Wystepuje_w_obszarze_3x3(int boxStartwiersz, int boxStartkolumna, int cyfra){
   for (int wiersz = 0; wiersz < 3; wiersz++)
      for (int kolumna = 0; kolumna < 3; kolumna++)
         if (sudoku[wiersz+boxStartwiersz][kolumna+boxStartkolumna] == cyfra)
            return true;
   return false;
}
void Siatka_Sudoku(){ //Wypisz siatke sudoku po rozwiazaniu
   for (int wiersz = 0; wiersz < N; wiersz++){
      for (int kolumna = 0; kolumna < N; kolumna++){
         if(kolumna == 3 || kolumna == 6)
            cout << " | ";
         cout << sudoku[wiersz][kolumna] <<" ";
      }
      if(wiersz == 2 || wiersz == 5){
         cout << endl;
         for(int i = 0; i<N; i++)
            cout << "---";
      }
      cout << endl;
   }
}
bool Puste_Miejsce(int &wiersz, int &kolumna){ //pobierz pustą lokalizację i zaktualizuj wiersz i kolumnę
   for (wiersz = 0; wiersz < N; wiersz++)
      for (kolumna = 0; kolumna < N; kolumna++)
         if (sudoku[wiersz][kolumna] == 0) //Miejsca z 0 sa oznaczane jako puste
            return true;
   return false;
}
bool Czy_jest_prawidlowe_miejsce(int wiersz, int kolumna, int cyfra){
   //Jesli cyfra nie znajduje sie w wierszu, kolumnie i obecnym "pudelku 3x3"
   return !Czy_Liczba_Wystepuje_w_Wierszu(wiersz, cyfra) && !Czy_Liczba_Wystepuje_w_Kolumnie(kolumna, cyfra) && !Czy_Liczba_Wystepuje_w_obszarze_3x3(wiersz - wiersz%3 ,
kolumna - kolumna%3, cyfra);
}
bool Rozwiaz_Sudoku(){
   int wiersz, kolumna;
   if (!Puste_Miejsce(wiersz, kolumna))
      return true; //Wartosc jest prawdziwa jesli znajduje sie tam juz cyfra
   for (int cyfra = 1; cyfra <= 9; cyfra++){ //prawidlowe cyfry to 1 - 9
      if (Czy_jest_prawidlowe_miejsce(wiersz, kolumna, cyfra)){ //czy cyfra pasuje, jesli tak zostaje umieszczona na siatce
         sudoku[wiersz][kolumna] = cyfra;
         if (Rozwiaz_Sudoku()) //ponawiane dla innych miejsc w siatce
            return true;
         sudoku[wiersz][kolumna] = 0; //Zamien na nieprzypisane miejsce 0 jesli warunki nie sa spelnione
      }
   }
   return false;
}
int main(){
   if (Rozwiaz_Sudoku() == true)
      Siatka_Sudoku();
   else
      cout << "Brak rozwiazan";
}