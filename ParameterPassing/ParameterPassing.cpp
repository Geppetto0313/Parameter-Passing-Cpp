#include <iostream>

using namespace std;

void SwapByValue(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;

    cout << "IN SWAP BY VALUE: \n" << a << " : " << b << endl;
}

void SwapByAddress(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

    cout << "IN SWAP BY ADDRESS: \n" << *a << " : " << *b << endl;
}

void SwapByReference(int& a, int& b) {
    int temp;
    temp = a;
    a = b;
    b = temp;

    cout << "IN SWAP BY REFERENCE: \n" << a << " : " << b << endl;
}

int main()
{
    //Values of x and y.
    int x = 40, y = 30;
    
    //Call By Value
    cout << "\nBEFORE SWAP BY VALUE: " << endl;
    cout << x << " : " << y << endl;
    SwapByValue(x, y);                  
    cout << "AFTER SWAP BY VALUE: " << endl;
    cout << x << " : " << y << endl;      

    //Call By Address
    cout << "\nBEFORE SWAP BY ADDRESS: " << endl;
    cout << x << " : " << y << endl;
    SwapByAddress(&x, &y);              
    cout << "AFTER SWAP BY ADDRESS: " << endl;
    cout << x << " : " << y << endl;

    //Call by Reference
    cout << "\nBEFORE SWAP BY REFERENCE: " << endl;
    cout << x << " : " << y << endl;
    SwapByReference(x, y);
    cout << "AFTER SWAP BY REFERENCE: " << endl;
    cout << x << " : " << y << endl;
}

    

