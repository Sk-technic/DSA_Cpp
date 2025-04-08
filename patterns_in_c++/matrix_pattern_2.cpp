#include <iostream>
using namespace std;

int main(){
    int i = 1;
    int n;
    cout <<"enter the number";
    cin>> n;

//   1 2 3 4 5 5 4 3 2 1
//   1 2 3 4 * * 4 3 2 1
//   1 2 3 * * * * 3 2 1
//   1 2 * * * * * * 2 1
//   1 * * * * * * * * 1

while (i<=n)
{
    int j = n-i+1;
    int num = 1;
   while (j)
   {
    cout<< num <<" ";
    j--;
    num++;
   }

   int k = i-1;
   while(k){
    cout<< "* ";
    k--;
   }

   int l = i-1;

   while(l){
    cout<< "* ";
    l--;
   }

   int m = n-i+1;
   while (m)
   {
    cout<< m<<" ";
    m--;
   }
cout<<endl;
i++;
}





}