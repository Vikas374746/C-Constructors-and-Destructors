# EXPERIMENT NO – 12

* Aim: To understand and implement Constructors and Destructors in C++ for efficient object initialization and cleanup.

* Tools Used: IDE, constructor, destructor, objects, scope resolution operator.

* Theory:

In C++, constructors and destructors are special member functions that manage the lifecycle of objects.

A constructor is automatically called when an object is created. It initializes the object’s data members.

A destructor is automatically called when an object goes out of scope. It is used to release resources or perform cleanup tasks.

These features ensure automatic initialization and cleanup, making programs more reliable and memory-efficient.

🔹 Key Features of Constructors and Destructors:

* *Constructor:*

Has the same name as the class.

Automatically invoked when an object is created.

Can be default, parameterized, or copy constructor.

Does not have a return type.

* *Destructor:*

Has the same name as the class, preceded by a ~ (tilde).

Automatically invoked when the object goes out of scope or is deleted.

Used to free resources (e.g., memory, file handles).

A class can have only one destructor.

🔹 Access Specifiers for Constructors:

Constructors can be declared as public, private, or protected, depending on how we want objects to be created.

i> *Public Constructor:*

Can be accessed from anywhere in the program.

Most common type of constructor.

Objects can be created directly in main().

    Syntax:

    class Demo {
    public:
        Demo() {   // public constructor
            cout << "Public constructor called" << endl;
         }
    };

    int main() {
        Demo d;   // allowed
    }


ii> *Private Constructor:*

Can only be accessed within the class.

Prevents object creation outside the class.

Commonly used in Singleton Design Pattern.

    Syntax:

    class Demo {
    private:
        Demo() {   // private constructor
            cout << "Private constructor called" << endl;
        }
    public:
        static Demo createObject() {
           return Demo();  // object can only be created here
      }
    };

    int main() {
       Demo d = Demo::createObject();  
    }


iii> *Protected Constructor:*

Can only be accessed within the class and its derived classes.

Used when we want to allow inheritance but restrict direct object creation from outside.

    Syntax:

    class Base {
    protected:
        Base() {   // protected constructor
           cout << "Protected constructor called" << endl;
       }
    };

    class Derived : public Base {
    public:
        Derived() {
            cout << "Derived class constructor called" << endl;
    }
    };

    int main() {
        Derived d;  
    }

🔹 1. Constructor in C++:

    Syntax:

    class ClassName {
       public:
           ClassName() {   // constructor
                // initialization code
        }
     };

🔹 2. Destructor in C++:

    Syntax:

    class ClassName {
       public:
           ~ClassName() {   // destructor
               // cleanup code
           }
    };

🔹 3. Advantages of Constructors and Destructors:

-Automatic initialization of objects.

-Automatic cleanup when objects go out of scope.

-Improves reliability by preventing uninitialized variables.

-Encourages modularity in Object-Oriented Programming.


# Use of Constructors:

This program demonstrates the use of Constructors in C++. The Student class contains attributes roll_no, name, and fee. A default constructor is defined, which prompts the user to input student details at the time of object creation. This highlights the concept of automatic initialization using constructors in Object-Oriented Programming.

*ALGORITHM:*

1> Start

2> Define a class Student with data members:

* roll_no (int)

* name (char array)

* fee (double)

3> Inside the class, define a constructor Student() that:

* Takes input for roll_no

* Takes input for name

* Takes input for fee

4> In main(), create an object s of class Student

5> The constructor will automatically execute and take the required inputs

6> End

# Input and Display Today's Date:

This program demonstrates the use of Constructors and Member Functions in C++. The Calendar class contains attributes day, month, and year. A constructor is used to take input for the date, while the display() function is used to show the complete date. This highlights the concept of object initialization using constructors and data display using member functions.

*ALGORITHM:*

1> Start

2> Define a class Calendar with data members:

* day (int)

* month (int)

* year (int)

3> Inside the class, define a constructor Calendar() that:

* Takes input for day

* Takes input for month

* Takes input for year

4> Define a member function display() that outputs the date in the format:
day/month/year

5> In main(), create an object c of class Calendar

6> The constructor will execute to take date inputs

7> Call c.display() to show the entered date

8> End


# Display Values Using Public Constructors:

This program demonstrates the use of a Parameterized Constructor in C++. The number class contains attributes a and b. A parameterized constructor is used to initialize these values at the time of object creation. The putdata() function is then used to display the initialized values. This highlights the concept of constructors with arguments for direct object initialization.

*ALGORITHM:*

1> Start

2> Define a class number with data members:

* a (int)

* b (int)

3> Inside the class, define a parameterized constructor number(int m, int n) that initializes:

4> Define a member function putdata() that displays values of a and b

5> In main(), create an object n of class number with parameters (10, 20)

6> Call n.putdata() to display the values of a and b

7> End


# Display student data using copy constructor:

This program demonstrates the use of a Copy Constructor in C++. The Student class contains attributes name, age, and branch. A parameterized constructor initializes the data, while the copy constructor creates a new object with the same values as an existing one. The display() function is used to print student details. This highlights the concept of object copying using copy constructors in Object-Oriented Programming.

*ALGORITHM:*

1> Start

2> Define a class Student with data members:

* name (string)

* age (int)

* branch (string)

3> Define a parameterized constructor Student(string n, int a, string b) to initialize data members.

4> Define a copy constructor Student(const Student &s) to copy the values of another Student object.

5> Define a member function display() to print the student details.

6> In main():

* Create object s1 using the parameterized constructor.

* Display details of s1.

* Create object s2 using the copy constructor (s2 = s1).

* Display details of s2.

7> End


# Details of book using copy constructor:

This program demonstrates the use of a Copy Constructor in C++. The Book class contains attributes title, author, and price. A parameterized constructor initializes the book details, while the copy constructor creates a new object with the same values as an existing one. The display() function is used to print the details of the book. This highlights the concept of object copying using copy constructors in Object-Oriented Programming.

*ALGORITHM:*

1> Start

2> Define a class Book with data members:

* title (string)

* author (string)

* price (float)

3> Define a parameterized constructor Book(string t, string a, float p) to initialize data members.

4> Define a copy constructor Book(const Book &b) to copy values of another Book object.

5> Define a member function display() to print the book details.

6> In main():

* Create object b1 using the parameterized constructor.

* Display details of b1.

* Create object b2 using the copy constructor (b2 = b1).

* Display details of b2.

7> End


# Use of destructors:

This program demonstrates the use of a Destructor in C++. The destruct class uses a static-like counter (count) to keep track of how many objects are created and destroyed. The constructor increments the counter each time an object is created, while the destructor decrements it when an object is destroyed. This highlights the concept of automatic cleanup using destructors in Object-Oriented Programming.

*ALGORITHM:*

1> Start

2> Define a global variable count = 0 to keep track of object creation and destruction.

3> Define a class destruct with:

* A constructor that increments count and displays the number of objects created.

* A destructor that decrements count and displays the number of objects destroyed.

4> In main(), create multiple objects (aa, bb, cc, dd) of class destruct.

5> The constructor will execute for each object, updating and displaying the count of created objects.

6> When the program ends, destructors are automatically invoked, updating and displaying the count of destroyed objects.

7> End


# Use of destructor using loop:

This program demonstrates the use of a Destructor in C++. The Date class contains data members d, m, and y initialized with default values. The destructor is used to display a message when objects are destroyed. In the main function, multiple objects are created both statically and inside a loop, and the destructor is automatically called as objects go out of scope. This highlights the concept of automatic resource cleanup using destructors.

*ALGORITHM:*

1> Start

2> Define a class Date with data members:

3> Define a destructor ~Date() that prints "Destructor called".

4> In main():

* Create multiple objects (d1, d2, d3, d4) of class **Date`.

* Use a for loop to create additional temporary objects inside the loop.

5> When objects go out of scope (after loop execution and at program termination), the destructor is automatically called for each object.

6> End


# Conclusion:

This experiment highlights the importance of constructors and destructors in C++ for managing the object lifecycle. Constructors ensure proper and automatic initialization of objects, while destructors handle resource cleanup when objects go out of scope. Together, they improve program reliability, memory management, and support modular object-oriented programming practices.
