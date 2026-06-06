#include <iostream>

int main() {
    int L = 9;
    int l = 5;
    std::cout<<"entré la largeur du rectangle: ";
    std::cin>>l;
    std::cout<<"entré la Longeur du rectangle: ";
    std::cin>>L;
    int air = l * L;
    std::cout<<"Aire = "<<air<<"cm²"<<std::endl;
    return 0;
}