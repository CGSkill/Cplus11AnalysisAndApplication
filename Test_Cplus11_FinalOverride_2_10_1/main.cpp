#include <iostream>

///
/// final的作用：终止派生类重载
///


using namespace std;

class MathObject
{
public:
    MathObject() {}
    virtual double Arith() = 0; //纯虚函数
    virtual void Print() = 0; //纯虚函数
    //virtual void Print() final = 0; // 此处也可可以使用 final ，但使用后就失去了虚函数的意义

};

class Printable : public MathObject
{
public:
    double Arith() = 0;
    //void Print() final{
    void Print() {
        cout << "Output is:" << Arith()  << endl;
    }
    Printable() {}
};


class Add2:public Printable
{
public:
    Add2(double a,double b):x(a),y(b) {}
    double Arith() {return x+y;}
    //void Print(int  a){}  //Printable Print 天加了 final  不能重载
private:
    double x,y;
};

class Mu13:public Printable
{
public:
    Mu13(double a,double b, double c):x(a),y(b),z(c) {}
    double Arith() {return x*y*z;}
private:
    double x,y,z;
};


///
/// C++11中为了帮助程序员写继承结构复杂的类型，引入了虚函数描述符override.如果派生类在虚函数声明时使用了override描述符，那么该函数必须重载其基类中的同名函数
/// 否则编译无法通过
///

struct Base {
    virtual void Turing() = 0;
    virtual void Dijkstra() = 0;
    virtual void VNeumannn() = 0;
    virtual void DKnuth() const;
    void print();
};

struct DerivedMid:public Base
{
    //void VNeumannn(double g);
};

struct DerivedTop:public DerivedMid
{
    void Turing() override;
    void Dijkstra() override;
    void VNeumannn(double g) override; //无法通过编译 参数不一致
    void DKnuth() override;    //无法通过编译 常量性不一致
    void Print()  override;  //无法通过编译  非虚函数重载   去掉override属于函数重写
};




int main()
{
    Add2 add2(1,2);
    add2.Print();
    Mu13 mu13(1,2,3);
    mu13.Print();

    return 0;
}
