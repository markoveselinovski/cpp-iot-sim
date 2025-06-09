#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>

int main(){

    std::srand(std::time(nullptr));
    int temperature = rand() % 31 + 10;
    int humidity = rand() % 61 + 30;

    std::string json = "{ \n  \"temperature\": " + std::to_string(temperature) + ",";
    std::cout << json << std::endl;

    std::string json1 = "  \"humidity\": " + std::to_string(humidity) + "\n}";
    std::cout << json1 << std::endl;

    return 0;

}