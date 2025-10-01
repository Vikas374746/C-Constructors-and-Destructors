#include <iostream>
using namespace std;

class Calendar {
    int day;
    int month;
    int year;

public:
    Calendar();     
    void display(); 
};

Calendar::Calendar() {
    cout << "Enter today's date:" << endl;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;
}

void Calendar::display() {
    cout << "Today's Date: " << day << "/" << month << "/" << year << endl;
}

int main() {
    Calendar c;  
    c.display(); 
    return 0;
}



/*OUTPUT
Enter today's date:
Enter day: 26
Enter month: 08
Enter year: 2025
Today's Date: 26/8/2025  */
