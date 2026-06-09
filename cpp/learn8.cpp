#include <iostream>
using namespace std;
int main()
{
    int somme = 0;
    int n = 0;
    cout<<"entre la somme que tu veut: "<<endl;
    cin>>n;
    for(int i = 0;i <= n;i++){
        somme += i;
    }
    cout << "La somme des nombres de 1 a " << n << " est : " << somme << endl;
    return 0;
}