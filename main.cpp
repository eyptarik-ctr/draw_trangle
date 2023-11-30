#include <iostream>

using namespace std;

int main()
{
    // ucgen cizdirme
    for (int i=1 ; i<100 ;i++)
    {
        for (int j =0; j<i ; j++)
        {
            cout << "*" ;
        }
        cout << endl;
    }
    for (int i=100 ; i>1 ;i--)
    {
        for (int j =0; j<i ; j++)
        {
            cout << "*" ;
        }
        cout << endl;
    }
    return 0;
}