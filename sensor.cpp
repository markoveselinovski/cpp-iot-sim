#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int generate_temperature() {
    return rand() % 31 + 10;
}

std::string get_status(int temp) {
    if (temp > 35) return "HOT";
    else if (temp < 15) return "COLD";
    else return "OK";
}

int main() {
    srand(time(nullptr));

    for (int i = 1; i <= 5; ++i) {
        int temp = generate_temperature();
        std::string status = get_status(temp);

        std::cout << "{ \"reading\": " << i
                  << ", \"temperature\": " << temp
                  << ", \"status\": \"" << status << "\" }" << std::endl;
    }

    return 0;
}
