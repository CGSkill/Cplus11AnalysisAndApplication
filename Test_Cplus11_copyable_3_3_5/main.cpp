#include <iostream>

using namespace std;

struct Copyable
{
    Copyable() {}
    Copyable(const Copyable &o) {
        cout << "Copyied"<<endl;
    }

};
Copyable ReturnRvalue() {
    return Copyable();
}

void AcceptVal(Copyable)
{}

void AcceptRef(const Copyable &)
{}


int main()
{
    cout << "Pass by value:" << endl;
    AcceptVal(ReturnRvalue());
    cout << "Pass by reference: " << endl;
    AcceptRef(ReturnRvalue());


    return 0;
}
