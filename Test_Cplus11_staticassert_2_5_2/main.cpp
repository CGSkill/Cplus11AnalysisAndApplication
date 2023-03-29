#include <iostream>
#include <assert.h>
#include <cstring>

using namespace std;

//#if 0
//enum FeatureSupports {
//    C99      =  0x0001,
//    Exint    =  0x0002,
//    SAssert  =  0x0004,
//    NoExcept =  0x0008,
//    SMAX     =  0x0010,
//};

//struct Compiler {
//    int  spp;
//    const char *name;
//};



//int main()
//{
//    //检查枚举值是否完备
//    assert((SMAX - 1)== (C99 | Exint | SAssert | NoExcept ));

//    Compiler a = {(C99 | SAssert),"abc"};
//    if (a.spp & C99)
//    {

//    }

//    cout << "Hello World!" << endl;
//    return 0;
//}
//#endif


//#if 0

//template<typename T, typename U> int  bit_copy(T &a, U &b){

//    assert(sizeof(b) == sizeof(a));
//    memcpy(&a,&b,sizeof(b));
//}

//int main() {
//    int pp = 100;
//    double dd;
//    bit_copy(dd, pp);
//    return 0;
//}
//#endif



#define assert_static(e)  \
 do {\
    enum { assert_static__ = 1/(e)}; \
 }while(0)

//template <typename T,typename U> int bit_copy(T &a,U &b){
//    assert_static(sizeof(a) == sizeof(b));
//    memcpy(&a, &b, sizeof(b));
//};


template <typename T,typename U> int bit_copy(T &a,U &b){
    static_assert(sizeof(a) == sizeof(b),"the parameters of  bit_copy must have same width"); //第一个参数必须是常量表达式
}

int  main () {
    int a = 0x2468;
    double b;
    bit_copy(a,b);
    return 0;
}



