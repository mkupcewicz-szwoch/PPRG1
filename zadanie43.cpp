#include<iostream>
using namespace std;
int main(){
    int tabela [10][10];
            for(int j=0; j<10;j++)
            {
                tabela[j][1]= j;
                tabela[j][2]= j*2;
                cout << j << " " << j*2 << "\n";
            }
    return 0;
}