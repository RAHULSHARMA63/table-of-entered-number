#include<iostream>
using namespace std;
int main()
{	
    int m;
    cout << "enter a positive integer: ";
    cin >> m;

    for (int i = 1; i <= 20; ++i)
	 {
        cout << m << " * " << i << " = " << m * i << "\n";
    }       
    return 0;
}
