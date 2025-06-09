#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

int main(){

    std::srand(std::time(nullptr));
    int dice = rand() % 6 + 1;
    
    std::cout<<"THE NUMBER IS: "<<dice<<std::endl;

    return 0;

}