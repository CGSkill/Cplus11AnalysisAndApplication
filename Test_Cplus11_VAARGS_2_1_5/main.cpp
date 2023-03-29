#include <iostream>
#include <stdio.h>

#define LOG(...) {\
 fprintf(stderr, "%s:Line %d:\t",__FILE__, __LINE__);\
 fprintf(stderr, __VA_ARGS__);\
 fprintf(stderr, "\n");\
}


# if  __cplusplus > 201103L
#error "should use C++ 11 implementation"
#endif

using namespace std;

int main()
{
    int x = 3;
    LOG("x = %d",x) //../Test_Cplus11_VAARGS_2_1_5/main.cpp:Line 16:	x = 3


    return 0;
}
