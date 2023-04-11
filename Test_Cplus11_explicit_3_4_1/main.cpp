////
///
///
///
////



#include <iostream>
using namespace std;

struct Rational1
{
    Rational1(int n = 0, int d = 1):num(n),den(d) {
        cout<< __func__ << ":" << num << "/" << den << endl;
    }

    int num;
    int den;
};


struct Rational2
{

    ///
    /// \brief Rational2
    /// \param n
    /// \param d
    /// 普通构造函数能够被隐式调用。而explicit构造函数只能被显式调用
    ///
    explicit Rational2(int n = 0, int d = 1):num(n),den(d) {
        cout<< __func__ << ":"<< num << "/" << den << endl;
    }

    int num;
    int den;
};


void Display1(Rational1 ra){
    cout << "1-Numerator: " << ra.num  << " Denominator:  " << ra.den << endl;
}


void Display2(Rational2 ra){
    cout << "2-Numerator: " << ra.num  << " Denominator:  " << ra.den << endl;
}


int main()
{

    Rational1 r1_1 = 11;
    Rational1 r1_2(12);

    //Rational2 r2_1 = 21; //无法通过编译  explicit构造函数只能被显式调用
    Rational2 r2_2(22);


    Display1(1);
    //Display2(1); //无法通过编译 隐式转换

    Display2(Rational2(2));




    cout << "Hello World!" << endl;
    return 0;
}
