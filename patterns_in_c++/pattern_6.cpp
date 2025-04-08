#include <iostream>
using namespace std;

// 1
// 22
// 333
// 4444
// 55555


int main(){
    int i = 1;
    int n;
    cout <<"enter the number";
    cin>> n;

    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            cout<< i;
            j++;
        }
        cout<< endl;
        i++;
    }
    
}