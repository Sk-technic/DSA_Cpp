#include <iostream>
using namespace std;

int main(){
    int i = 1;
    int n;
    cout <<"enter the number";
    cin>> n;

//      1
//     121
//    12321
//   1234321
//  123454321

while (i<=n)
{
  
    int j = n-i+1;
    while (j)
    {
        cout<< " ";
        j--;
    }
    int count = 1;
    char space = ' ';
    while (count<=i)
    {
        cout<< count;
        count++;
    }
    int num = i-1;
    while(num){
        cout<< num;
        num--;
    }
    
    
    cout<<endl;
    i++;
}
}