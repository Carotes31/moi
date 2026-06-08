#include <iostream>
using namespace std;
int main()
{
    float note = 0.00f;
    cout<<"Entre ta note: ";
    cin>>note;
    if(note < 10.00f){
        cout<<"Mention: Recalé";
    }
    else if(note >= 10.00f && note <= 12.00f){
        cout<<"Mention: Passable";
    }
    else if(note > 12.00f && note <=14.00f){
        cout<<"Mention : Assez bien";
    }
    else if(note > 14.00f && note <= 16.00f){
        cout<<"Mention: Bien";
    }
    else if(note > 16.00f && note <= 20.00f){
        cout<<"Mention: Tres bien";
    }
    return 0;
}