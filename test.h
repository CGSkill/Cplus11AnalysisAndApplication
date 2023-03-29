#ifndef TEST_H
#define TEST_H
//template<typename T> void fun(T){}
template  void fun<int>(int);  //显示的实例化

void test1(){fun(3);}

#endif // TEST_H
