#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number of time a star should print" << endl;
    cin >> num;
    for (int i = 0; i <= num; i++)
    {
        for (int j = num - i; j > 0; j--)
        {
            cout << " ";
        }
        for (int k = 0; k < i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}