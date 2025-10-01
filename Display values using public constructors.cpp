#include <iostream>
using namespace std;

class number{
    int a,b;
    
public:
number(int m, int n){
    a=m;
    b=n;
}
void putdata(){
    cout << "a=" << a << endl << "b=" << b;
}
};

int main(){
    number n(10,20);
    n.putdata();
    return 0;
}


/*OUTPUT
a=10
b=20  */
