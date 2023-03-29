#include <iostream>
#include <assert.h>

using namespace std;


char *ArrayAlloc(int  n) {
    assert(n > 0);
    return  new  char[n];
}


int main()
{
    char * a = ArrayAlloc(10);
    return 0;
}
