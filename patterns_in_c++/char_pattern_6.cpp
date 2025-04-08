#include <iostream>
using namespace std;

// A
// BC
// CDE
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
        while (j<=i)
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