#include <iostream>
using namespace std;
// *****
//  ****
//   ***
//    **
//     *

int main(){
    int i = 1;
    int n;
    cout <<"enter the number";
    cin>> n;

    while (i<=n)
    {
        int space = 1;
        while(space<=i){
            cout<< ' ';
            space++;
        }
        int star = n-i+1;
        while(star){
            cout<< '*';
            star--;
        }

        cout<< endl;
        i++;
    }
    
}