#include <iostream>
#include "Test1.h"

using namespace std;



////
/// 外部模板声明，类似于外部变量声明，使用方法也是类似，需要模板显示地实例化，通过extern 声明，就能在本地使用
/// 这样减少编译时间。此种操作可以把外部模板声明防在头文件中，这样所有包含该头文件的文件就可以共享这个外部模板声明了。
/// 注意：如果外部模板声明出现于某个编译单元中，那么与之对应的显示实例必须出现于另一个编译单元或者同一个编译单元的后续代码中；
///      外部模板声明不能用于一个静态函数（即文件域函数），但可以用于类静态成员函数（静态函数没有外部链接，不可能在本编译单元之外出现）
///
/// 外部模板定义因该算作一种针对编译器的编译时间及空间的优化手段


int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
