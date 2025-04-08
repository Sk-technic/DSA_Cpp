#include <iostream>
using namespace std;

//      *
//     * *
//    *   *
//   *     *
//  *       *
//   *     *
//    *   *
//     * *
//      *

int main() {
    int i, j, n = 5; 

i = 1;
while(i <= n) {
    j = 1;
    while(j <= n - i) {
        cout << " ";
        j++;
    }
    j = 1;
    while(j <= 2 * i - 1) {
        if(j == 1 || j == 2 * i - 1) cout << "*";
        else cout << " ";
        j++;
    }
    cout << endl;
    i++;
}
i = n - 1;
while(i >= 1) {
    j = 1;
    while(j <= n - i) {
        cout << " ";
        j++;
    }
    j = 1;
    while(j <= 2 * i - 1) {
        if(j == 1 || j == 2 * i - 1) cout << "*";
        else cout << " ";
        j++;
    }
    cout << endl;
    i--;
}

}