#include <iostream>
using namespace std;

// 12345
// 12345
// 12345
// 12345

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
           cout<< j;
           j++; 
        }
        cout<<endl;
        i++;
    }


}