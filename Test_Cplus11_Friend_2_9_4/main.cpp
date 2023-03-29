#include <iostream>

using namespace std;

template <typename T> class DefenderT
{
public:
    friend T;
    void Defence(int x, int y){};
    void Tackle(int x, int y){};

    DefenderT() {}
private:
    int pos_x = 15;
    int pos_y = 0;
    int speed = 2;
    int stamian = 120;

};


template <typename T> class AttackerT
{
public:
    friend T;
    void Move(int x, int y){}
    void SpeedUp(float ratio){}
private:
    int pos_x = 0;
    int pos_y = -30;
    int speed = 3;
    int stamian = 100;

};

using Defender = DefenderT<int>; //普通的类定义，使用int作参数
using Attacker = AttackerT<int>;

//#define UNIT_TEST
class Validator;

using DefenderTest = DefenderT<Validator>;  //using 用來定义类型别名
using AttackerTest = AttackerT<Validator>;

class Validator {
public:
    void Validate(int x ,int y, DefenderTest & d){
        cout << d.stamian  << endl;
    }
    void Validate(int x ,int y, AttackerTest & a){}
};


//#endif

int main()
{
    //    Defender d;
    //    Attacker a;

    DefenderTest d;
    AttackerTest a;

    a.Move(15,30);
    d.Defence(15,30);
    a.SpeedUp(1.5f);
    d.Defence(15,30);

    Validator v;
    v.Validate(7,0,d);
    v.Validate(1,-10,a);

    return 0;
}
