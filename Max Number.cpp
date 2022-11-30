
#include <iostream>

using namespace std;

int main()
{
    float n1, n2, n3;
    
    cout << "შეიყვანე სამი რიცხვი:";
    cin >> n1 >> n2 >> n3;
    
    if (n1 >= n2 && n1 >= n3)
    cout << " მაქსიმალური რიცხვია:"<<n1;
    
     if (n2 >= n1 && n1 >= n3)
    cout << " მაქსიმალური რიცხვია:"<<n2;
    
    if (n3 >= n1 && n3 >= n2)
    cout << " მაქსიმალური რიცხვია:"<<n3;

    return 0;
}