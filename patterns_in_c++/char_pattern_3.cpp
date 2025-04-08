#include <iostream>
using namespace std;

// ABCD
// EFGH
// IJKL
// MNOP

int main(){
    int i = 1;
    int n;
    cout <<"enter the number";
    cin>> n;
    int count = 0;
    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            char ch = 'A'+ count;
            cout<< ch;
           j++;
           count++;
        }
        cout<<endl;
        i++;
    }
    
}