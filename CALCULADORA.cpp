#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int a,b,c;
    while(1==1)
    {
    cout << "Dividendo: ";
    cin >> a;
    cout << "Divisor: ";
    cin >> b;
    c = a%b;
    cout << "resposta: " << c << endl;
    setbuf(stdin,NULL);
    getchar();
    }
    return 0;
}
