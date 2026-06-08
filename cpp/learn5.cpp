#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 0, c = 0;
    cout<<"entre le premier nombre: ";
    cin>>a;
    cout<<"entre le deuxieme nombre: ";
    cin>>b;
    cout<<"entre le troisieme nombre: ";
    cin>>c;
    if(a > b && a > c){
        cout<<a<<" est le plus grand nombre";
    }
    else if(b > a && b > c){
        cout<<b<<" est le plus grand nombre";
    }
    else if(c > a && c > b){
        cout<<c<<" est le plus grand nombre";
    }
    return 0;
}