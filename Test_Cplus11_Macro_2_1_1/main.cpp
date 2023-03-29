#include <QCoreApplication>
#include <iostream>

using namespace std;

////
/// \brief main
/// \param argc
/// \param argv
/// \return
///
/// __STDC_VERSION__  __STDC_ISO_10464__  在gcc version 11.3.0 (Ubuntu 11.3.0-1ubuntu1~22.04) 未定义
/// 注意：代码编写的中，应该注意避免自定义宏与预定宏同名
///


int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);


    //如果编译器的目标系统环境中包含完整的标准C库，这个宏定义为1,否则宏的值为0
    cout << "Standard Clib: " << __STDC_HOSTED__  << endl;

    //C编译器通常用这个宏的值来表示编译器的实现是否和C标准一致，C++11标准中这个宏是否定义以及定成什么值由编译器决定
    cout << "Standard C: " << __STDC__  << endl;

    //C编译器通常用这个宏来表示所支持的C标准版本
    //cout << "C Standard version: " << __STDC_VERSION__ << endl;
    //这个宏通常定义为一个yyyymmL格式的整数常量，例如199712L，用来表示C++编译环境符合某个版本的ISO/IEC 10646 标准
    //cout << "IDO/IEC: " << __STDC_ISO_10464__ << endl;


    return a.exec();
}
