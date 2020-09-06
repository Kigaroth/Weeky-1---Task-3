// Weeky 1 - Task 3.cpp //

#include <iostream>
#include <string>
#include <conio.h>

int age;

int age_20 = 20;
int age_40 = 40;
int age_59 = 59;

int main()
{
    std::cout << " Hello!\n May I ask how old you are? (type in your age using numbers): ";

    std::cin >> age;

    if (age < age_20) {
        std::cout << " You are young.\n";
    }

    //if age is greater than a or equal to b//
        else if (age >= age_20 && age <= age_40) { 
            std::cout << " You are a grown up.\n";
    }

    //if age is greater than b or equal/less than c//
        else if (age > age_40 && age <= age_59) { 
            std::cout << " You are old. \n";
    }
    //if age is greater than c//
        else if (age > age_59) { 
            std::cout << " You ARE really old. \n";
    }
}
