#include <iostream>
using namespace std;

class Book{
    string title;
    string author;
    float price;
public:
Book(string t,string a,float p){
    title = t;
    author = a;
    price = p;
}
Book(const Book &b){
    title = b.title;
    author = b.author;
    price = b.price;
}
void display(){
    cout << "Title of book:" << title << endl << "Author:" << author << endl<< "Price:"<<price<< endl;
}
};

int main(){
    string t;
    float p;
    string a;
    cout << "DETAILS OF BOOKS:\n";
    cout << "Enter title of book:";
    cin >> t;
    cout << "Enter author of the book:";
    cin >> a;
    cout << "Enter price of book:";
    cin >> p;
    cout << "Details of 1st Book:\n";
    Book b1(t,a,p);
    b1.display();
    cout << "Details of 1st Book using copy constructor:\n";
    Book b2 = b1;
    b2.display();
    
    return 0;
}


/*OUTPUT
DETAILS OF BOOKS:
Enter title of book:Rebecca
Enter author of the book:Piers
Enter price of book:2500
Details of 1st Book:
Title of book:Rebecca
Author:Piers
Price:2500
Details of 1st Book using copy constructor:
Title of book:Rebecca
Author:Piers
Price:2500

  */
