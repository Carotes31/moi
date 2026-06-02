#include <iostream>

int main(){
    char reponse;
    int age          = 12;
    bool with_parent = true;
    std::cout<<"hello,are you accompanied by a parent?:";
    std::cin>>reponse;
    if(reponse=="oui" || reponse =="Oui")
    {
        with_parent = true;
    }
    else
    {
        with_parent = false;
    }


}