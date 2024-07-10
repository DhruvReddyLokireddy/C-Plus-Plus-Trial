#include <iostream>
#include <vector>

int main(){

    int cor;
    int ques = 50;
    int hall_t;
    std::string name;

    std::cout << "What is the first 4 numbers of your Hall Ticket?: ";
    std::cin >> hall_t;

    std::cout << "What is your full name?: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "How many questions did you get correct out of 50?: ";
    std::cin >> cor;

    double score = cor/(double)ques * 100;

    std::cout << "Hello " <<name << '\n';
    std::cout << "Hall Ticket Number: " << hall_t << '\n';
    std::cout << "Your final grade is: " << score << "%";

    return 0;
}