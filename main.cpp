#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(nullptr)); // Seed random number
    int temperature = std::rand() % 31 + 10; // Random 10–40°C

    std::string json = "{ \"temperature\": " + std::to_string(temperature) + " }";
    std::cout << json << std::endl;

    
    return 0;
}
