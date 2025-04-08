#include <iostream>
using namespace std;

// ABCD
// BCDE
// CDEF
// DEFG

int main(){
    int i = 1;
    int n;
    cout <<"enter the number";
    cin>> n;
    
    while (i<=n)
    {
        int j = 1;
        int count = i;
        while (j<=n)
        {
            char ch = 'A' + count - 1;
            cout<< ch ;
           j++;
           count++;
           
        }
        cout<<endl;
        i++;
    }
    
}