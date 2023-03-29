#include <iostream>

using namespace std;

struct People
{
public:
    int hand;
    static People *all;

};



///
/// \brief main
/// \return
/// C++11中对非静态成员变量使用sizeof()操作是合法的
///
int main()
{
    People p;

    cout << sizeof(p.hand) << endl;
    cout << sizeof(People::all) << endl;
    cout << sizeof(People::hand) << endl;
    return 0;
}
