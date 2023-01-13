/*Napisz program, który będzie dokonywał konkatenacji podanego przez użytkownika stringa n razy. Liczbę n także należy pobrać od użytkownika. */
#include<iostream>
#include <string>
using namespace std;
int main(){
int n;
string pierwszy;
string powtorzony;

cout << "Podaj liczbe powtorzenia stringow: " << "\n";
cin>>n;
cout << "Podaj string:" << "\n";
cin>> pierwszy;

for (int i=0; i<n; i++){

   powtorzony+=pierwszy;
}
cout<<"\n"<<powtorzony;

}