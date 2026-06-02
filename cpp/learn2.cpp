#include <iostream>

int main(){
    int age = 0;
    std::cout<<"hey, how old are you ?:";
    std::cin>>age;
    if(age <=10)
    {
        std::cout<<"hey , wath are you doing here ??"<<std::endl;
    }
    else if(age < 18)
    {
        std::cout<<"you are a minor"<<std::endl;
    }
    else if(age >= 18)
    {
        std::cout<<"hey great , you are an adult";
    }
    else
    {
        std::cout<<"error"<<std::endl;
    }
}