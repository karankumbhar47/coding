#include <iostream>

using namespace std;

bool pythagoras(int a, int b, int c)
{
    int x, y, z;
    z = max(a, max(b, c));
    if (z == a)
    {
        x = b;
        y = c;
    }
    else if (z == b)
    {
        x = a;
        y = c;
    }
    else
    {
        x = a;
        y = b;
    }
    if (z * z == x * x + y * y)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int binaryToDecimal(int a){
    
    while(a>0){
        a%10
    }
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (pythagoras(a, b, c))
    {
        cout << 'p';
    }
    else
    {
        cout << "np";
    }
    return 0;
}