#include <iostream>


int main()
{
    int a = 5;
    int b = 10;
    int res = 0;
    while (a != 0)
    {
        if(a & 01)
        {
            res += b;
        }
        b <<=1;
        a >>=1;
    }
    std::cout << res << std::endl;
    return 0;
}