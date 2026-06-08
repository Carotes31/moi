#include <iostream>
using namespace std;
int main()
{
    int nombre = 0;
    cout << "Donne un nombre: "; 
    cin >> nombre;
    if(nombre % 2 == 0)
    {
        cout<<"Le nombre est pair";
    }
    else{
        cout<<"le nombre est impair";
    }
    return 0;
}