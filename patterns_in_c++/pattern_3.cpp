#include <iostream>
using namespace std;

//123
//456
//789



int main(){
    int i = 1;
    int n;
    cout <<"enter the number";
    cin>> n;

    int count = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            cout<< count;
            count++;
            j++;
        }
        cout << endl;
        i++;
    }

}