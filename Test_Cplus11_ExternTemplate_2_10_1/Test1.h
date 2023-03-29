#ifndef TEST1_H
#define TEST1_H

#include "test.h"

extern template void fun<int> (int); //外部模板声明
void tes2(){fun(4);}

#endif // TEST1_H
