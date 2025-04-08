#include <iostream>
using namespace std;

// 1
// 23
// 345
// 4567
// 56789


int main(){
    int i = 1;
    int n;
    cout <<"enter the number";
    cin>> n;


    while (i<=n)
    {
       int j = 1;
       
       // int count = i;
       while (j<=i)
       {
           cout<< i+j-1;
           j++;
           // count++;
           
       }
       cout<<endl;
       i++;
       
    }
    
}