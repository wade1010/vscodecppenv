#include <iostream>
#include "yourfile.h"
using namespace std; // 头文件中不建议加上这行,但是主文件建议加上这行,比较方便

int main()
{
    cout << add(1, 2) << endl;
    return 0;
}