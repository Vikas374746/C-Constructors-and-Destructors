#include <iostream>
using namespace std;

class Student{
    int age;
    string name;
    string branch;
public:
Student(string n,int a,string b){
    name = n;
    age = a;
    branch = b;
}
Student(const Student &s){
    name = s.name;
    age = s.age;
    branch = s.branch;
}
void display(){
    cout << "Name:" << name << endl << "Age:" << age << endl<< "Branch:"<<branch << endl;
}
};

int main(){
    string n;
    int a;
    string b;
    cout << "DETAILS OF STUDENTS:\n";
    cout << "Enter your name:";
    cin >> n;
    cout << "Enter your age:";
    cin >> a;
    cout << "Enter your branch:";
    cin >> b;
    cout << "Details of 1st Student:\n";
    Student s1(n,a,b);
    s1.display();
    cout << "Details of 1st Student using copy constructor:\n";
    Student s2 = s1;
    s2.display();
    
    return 0;
}

