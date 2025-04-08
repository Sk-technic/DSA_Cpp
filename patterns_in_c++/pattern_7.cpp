#include <iostream>
using namespace std;

// 1
// 23
// 456
// 78910


int main(){
    int i = 1;
    int n;
    cout <<"enter the number";
    cin>> n;

    int count = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            cout<< count;
            j++;
            count++;
        }
        cout<< endl;
        i++;
    }
    
}