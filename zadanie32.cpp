#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    std::cout <<"losowa mala litera = " << char('a' + rand() % 26) << std::endl;
    char c;
    int r;
    int num;
    int i;

    srand (time(NULL));    
    for (i=0; i<num; i++)
    {    r = rand() % 26;   
          c = 'a' + r;            
          cout << c;
    }

return 0;
}