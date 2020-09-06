// Weeky 1 - Task 3.cpp //

#include <iostream>
#include <string>
#include <conio.h>

int age;
bool sw = false;

int a = 20;
int b = 40;
int c = 59;
int d = 60;

int main()
{
    std::cout << " Hello!\n May I ask how old you are? (type in your age using numbers): ";

    std::cin >> age;

    if (age < a) {
        std::cout << " You are young.\n";
    }

    else if (age >= a || age == b) {
        std::cout << " You are a grown up.\n";
    }

    else if (age > b || age <= c) {
        std::cout << " You are old. \n";
    }
    else if (age > d) {
        std::cout << " You ARE really old. \n";
    }
}
