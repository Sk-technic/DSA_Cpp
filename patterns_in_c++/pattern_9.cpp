#include <iostream>
using namespace std;

// 1
// 21
// 312
// 4321


int main(){
    int i = 1;
    int n;
    cout <<"enter the number";
    cin>> n;

    while (i<=n)
    {
        int j = 1;
        int count = i;
        while (j<=i)
        {
            cout<< count;
            j++;
            count--;
        }
        cout<< endl;
        i++;
    }
    
}