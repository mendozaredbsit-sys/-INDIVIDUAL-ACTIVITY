#include <iostream>
#include <string>

int main() {
    std::string fullName, courseYearSec, birthday, motto;

    std::cout << "Enter your full name: ";
    std::getline(std::cin, fullName);
    
    std::cout << "Enter your course, year, and section: ";
    std::getline(std::cin, courseYearSec);
    
    std::cout << "Enter your birthday: ";
    std::getline(std::cin, birthday);
    
    std::cout << "Enter your motto/motivation in life: ";
    std::getline(std::cin, motto);
    
    std::cout << "Hi! I'm " << fullName << " of " << courseYearSec << ". Welcome to Data Structures and Algorithm!" << std::endl;
    std::cout << "My Birthday is on " << birthday << ". and my motto/motivation in life is " << motto << std::endl;

    return 0;
}
