#include <iostream>
using namespace std;

// *****
// ****
// ***
// **
// *

int main(){
    int i = 1;
    int n;
    cout <<"enter the number";
    cin>> n;

    while (i<=n)
    {
        int j = n-i+1;
        while (j)
        {
            cout<< '*';
           j--;
        }
        cout<<endl;
        i++;
    }
    
}