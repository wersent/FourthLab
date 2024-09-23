#include <iostream>
using std::cin;
using std::endl;

int main(){
    // variant 7
    // task 1
    int A{}, B{}, C{};
    cin >> A >> B >> C;
    if (A % B == 0 && B > C) std::cout << A / B + C;
    else if (A % B == 0 && B < C) std::cout << A / B - C;
    else std::cout << (A + B) * C;
    std::cout << endl;
    // task 2
    int N{};
    cin >> N;
    switch (N)
    {
    case 1:
        std::cout << "January";
        break;
    case 2:
        std::cout << "February";
        break;
    case 3:
        std::cout << "March";
        break;
    case 4:
        std::cout << "April";
        break;
    case 5:
        std::cout << "May";
        break;
    case 6:
        std::cout << "June";
        break;
    case 7:
        std::cout << "July";
        break;
    case 8:
        std::cout << "August";
        break;
    case 9:
        std::cout << "September";
        break;
    case 10:
        std::cout << "October";
        break;
    case 11:
        std::cout << "November";
        break;
    case 12:
        std::cout << "December";
        break;
    default:
        std::cout << "Invalid number of month";
        break;
    }
    std::cout << endl;
    // task 3
    int x{};
    std::cout << "Enter -1 or 1" << endl;
    cin >> x;
    x > 0 ? std::cout << "Positive number" : std::cout << "Negative number";
}