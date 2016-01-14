//
//  LAB12
//
//  NITU Razvan-Marian
//  323AC
//

#include <iostream>
using namespace std;

class X {};

class Y {
public:
    Y (const X& x) {}
    Y& operator= (const X& x) {return *this;}
    operator X() {return X();}
};

int main ()
{
    X a;
    Y b = a;
    
    b = a;
    a = b;
    
    cout << endl;
    return 0;
}