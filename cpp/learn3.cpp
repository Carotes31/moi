#include<iostream>
using namespace std;

int main()
{
    float c = 0.0;
    cout<<"entré le nombre de degrés: ";
    cin>>c;
    float f = c * 9.0/5.0 + 32.0;
    cout<<c<<"°C = "<<f<<"f"<<endl;
    
    return 0;
}