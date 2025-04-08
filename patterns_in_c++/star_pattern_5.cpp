#include <iostream>
using namespace std;

//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *

int main(){
    int i = 1;
    int j = 1;
    int n;
    cout <<"enter the number";
    cin>> n;
    int count = n-1;

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

        int star2 = 2;
        while(star2<=i){
            cout<< '*';
            star2++;
        };
        cout<< endl;
        i++;
    };

    
    while (j<=n)
    {
        int space = 0;
        while(space<=j)
        {
            cout<< ' ';
            space++;
        }
        int star = n-j;
        while(star){
            cout<< '*';
            star--;
        }
        int star2 = count-j;
        while(star2>=1){
            cout<< '*';
            star2--;
        }
        

        cout<<endl;
        j++;
    }

    
}