// Weeky 1 - Task 3.cpp //

#include <iostream>
#include <string>
#include <conio.h>

int age;

int a = 20;
int b = 40;
int c = 59;

int main()
{
    std::cout << " Hello! May I ask how old you are? (type in your age)\n";
    std::cin >> age;
    if (age < a) {
        std::cout << " You are young.\n";
    }
    else if (age > a || age == a) {
        std::cout << " You are a grown up.\n";
    }
    else if (age > b) {
        std::cout << " You are old. \n";
    }
    else (age < c) {
        std::cout << " You ARE really old. \n";
    }
    ;
}

