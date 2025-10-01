#include <iostream>
using namespace std;

class Student{
    int roll_no;
    char name[50];
    double fee;
    
    public:
    Student(){
        cout << "Enter roll no.:";
        cin >> roll_no;
        cout << "Enter student's name:";
        cin >> name;
        cout << "Enter the fees:";
        cin >> fee;
    }
};

int main(){
    Student s;
    
    return 0;
}




/*OUTPUT
Enter roll no.:56
Enter student's name:vikas
Enter the fees:50000  */
