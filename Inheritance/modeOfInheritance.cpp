#include <iostream>
using namespace std;

class Parent {
public:
    int a = 10;

protected:
    int b = 20;

private:
    int c = 30;
};

/* -------- PUBLIC INHERITANCE -------- */
class ChildPublic : public Parent {
public:
    void show() {
        cout << a << endl;  // ✅ allowed (public → public)
        cout << b << endl;  // ✅ allowed (protected → protected)
        // cout << c;       // ❌ never allowed
    }
};

/* -------- PROTECTED INHERITANCE -------- */
class ChildProtected : protected Parent {
public:
    void show() {
        cout << a << endl;  // ✅ allowed (public → protected)
        cout << b << endl;  // ✅ allowed
        // cout << c;       // ❌ never allowed
    }
};

/* -------- PRIVATE INHERITANCE -------- */
class ChildPrivate : private Parent {
public:
    void show() {
        cout << a << endl;  // ✅ allowed (public → private)
        cout << b << endl;  // ✅ allowed
        // cout << c;       // ❌ never allowed
    }
};

int main() {

    ChildPublic cp;
    cout << cp.a << endl;   // ✅ ONLY public inheritance allows this
    // cout << cp.b;        // ❌ protected
    // cout << cp.c;        // ❌ private

    ChildProtected cpr;
    // cout << cpr.a;       // ❌ now protected
    // cout << cpr.b;       // ❌
    
    ChildPrivate cpt;
    // cout << cpt.a;       // ❌ now private
}
