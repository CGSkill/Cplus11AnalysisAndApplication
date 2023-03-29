#include <iostream>
#include <string>

using namespace std;

class  init
{
public:
    init():a(0) {}
    init(int d):a(d) {}
private:
    int a;
    const static int b=0;
    int c = 1;
    static int d=0;  // ISO C++ forbids in-class initialization of non-const static member ‘init::d’     static const int d=0 就能编译
    static const double e=1.3; //非整型或者枚举，无法通过编译
    static const char* const f = "e"; //非整型或者枚举，无法通过编译
};


struct init2
{
    int a=1;
    string b("hello"); //无法通过编译  string b=("hello")可以编译

};


int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
