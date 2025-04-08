#include <iostream>
using namespace std;

// D
// CD
// BCD
// ABCD

int main(){
    int i = 1;
    int n;
    cout <<"enter the number";
    cin>> n;
    
    while (i<=n)
    {
        int j = 1;
        int count = 0;
        while (j<=i)
        {
            char ch = n-i+'A'+count;
            cout<< ch ;
           j++;
           count++;
           
        }
        cout<<endl;
        i++;
    }
    
}