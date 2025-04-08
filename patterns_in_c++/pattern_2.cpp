#include <iostream>
using namespace std;

//54321
//54321
//54321
//54321
//54321


int main(){
    int i = 1;
    int n;
    cout <<"enter the number";
    cin>> n;

 while (i<=n)
    {
        int j= 1;
        while (j<=n)
        {
           cout<< n-j+1;
           j++; 
        }
        cout<<endl;
        i++;
    }


}