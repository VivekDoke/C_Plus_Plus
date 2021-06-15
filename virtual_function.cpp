#include <iostream>
using namespace std;

class Base {
public:
    virtual void Show() {
        cout<<"In base\n";
    }
};

class Derived : public Base {
    int x;
public:
    void Show() {
        cout<<"In Derived\n";
    }
    Derived() {
        x = 10;
    }
    
    int getX() const {
        return x;
    }
};

int main()
{
    Derived d;
    Base *bp = &d;
    bp->Show();
    //cout<<bp->getX();
    return 0;
}
