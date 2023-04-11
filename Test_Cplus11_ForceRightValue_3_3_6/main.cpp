#include <iostream>

using namespace std;

class Moveable
{
public:
    Moveable() {}
    ~Moveable() {delete i;}
    Moveable(const Moveable &m):i (new int (*m.i)) {}
    Moveable(Moveable &&m):i(m.i){
        m.i = nullptr;
        cout << m.i << endl;
    }

    int * i;
private:
};


int main()
{
    Moveable a;
    Moveable c(move(a));

    return 0;
}
