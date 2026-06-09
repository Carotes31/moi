#include <iostream>
using namespace std;
int main()
{
    int table = 0;
    cout<<"Entre un nombre pour afficher sa table: ";
    cin>>table;
    for(int i = 0;i <= 10;i++){
        cout<<table<<"x"<<i<<" = "<<table*i<<endl;
    }
    return 0;
}