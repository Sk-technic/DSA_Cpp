#include <iostream>
using namespace std;

// 1
// 12
// 123
// 1234
// 21345

int main(){
    int i = 1;
    int n;
    cout <<"enter the number";
    cin>> n;
    while (i<=n)
    {
        int j = 1;
        int count = 1;

        while (j<=i)
        {
            cout<< count;
            count++;
            j++;
        }
        cout<< endl;
            i++;
     }

}