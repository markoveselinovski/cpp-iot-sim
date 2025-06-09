#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

int main(){

    std::srand(std::time(nullptr));
    int temp = std::rand() % 31 + 10;
    std::cout<<"temperature is: "<<temp<<std::endl;

    if (temp>35)
    {
        std::cout<<"Warning! Overheating!"<<std::endl;
    }
    else if (temp<15)
    {
        std::cout<<"Warning! Too cold!"<<std::endl;
    }
    else{
        std::cout<<"Temperature is normal!"<<std::endl;
    }
    return 0;

}