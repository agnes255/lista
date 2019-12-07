#include <iostream>

using namespace std;

int main()
{
    int a=10;
    int *wsk=&a;
    cout<<a<<endl;
    *wsk=*wsk+5;
    cout<<a<<endl;
    return 0;
}
