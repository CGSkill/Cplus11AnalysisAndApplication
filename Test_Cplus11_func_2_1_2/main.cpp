#include <iostream>
#include <string>

using namespace std;

const char *hello(){ return  __func__ ;}
const char *world(){ return  __func__ ;}


int main()
{
    cout << hello() << "," << world()<< endl;
    return 0;
}
