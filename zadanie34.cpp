#include <iostream>
using namespace std;
 
/*Napisz program, który wypisze na ekranie trójkąt Pascala.
 Liczba wierszy trójkąta ma być pobrana od użytkownika.*/
void trojkat_pascala(int liczba_wierszy){
 
    
    for(int n = 1; n <= liczba_wierszy; n++){
 
        for(int r = 1; r < liczba_wierszy-n+1; r++)
            cout<<"  ";
 
       
        int val = 1;
        for(int r = 1; r <= n; r++){
            cout<<val<<"   ";
             
            val = val * (n - r)/r;
        }
        cout<<endl;
    }
}
 
int main(){
    int liczba_wierszy;
    cout << "Podaj liczbe wierszy: ";
    cin >> liczba_wierszy;
    
    trojkat_pascala(liczba_wierszy);
 
    return 1;
}