#include <iostream>
using namespace std;

// *
// **
// ***
// ****
// *****

int main(){
    int i = 1;
    int n;
    cout <<"enter the number";
    cin>> n;

    while (i<=n)
    {
        int space = n-i+1;
        while(space){
            cout<< ' ';
            space--;
        }

        int star = 1;
        while(star<=i){
            cout<< '*';
            star++;
        }
        cout<< endl;
        i++;
    }
    
}