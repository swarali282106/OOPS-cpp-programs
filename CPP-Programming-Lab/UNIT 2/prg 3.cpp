#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base public function" << endl;
    }
};

class PublicDerived : public Base {
};

class PrivateDerived : private Base {
public:
    void callBaseShow() {
        show();
    }
};

int main() {
    PublicDerived publicObject;
    publicObject.show();

    PrivateDerived privateObject;
    privateObject.callBaseShow();

    return 0;
}