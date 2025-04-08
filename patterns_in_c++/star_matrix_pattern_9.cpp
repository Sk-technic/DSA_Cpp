#include <iostream>
using namespace std;

//  *                 * 
//  * *             * * 
//  * * *         * * *
//  * * * *     * * * * 
//  * * * * * * * * * *
//  * * * * * * * * * *
//  * * * *     * * * *
//  * * *         * * * 
//  * *             * * 
//  *                 * 

int main() {
    int i, j, n = 5; 

      i = 1;
    while(i <= n) {
        j = 1;
        while(j <= i) cout << "* ", j++;
        j = 1;
        while(j <= 2 * (n - i)) cout << "  ", j++;
        j = 1;
        while(j <= i) cout << "* ", j++;
        cout << endl;
        i++;
    }
    i = n;
    while(i >= 1) {
        j = 1;
        while(j <= i) cout << "* ", j++;
        j = 1;
        while(j <= 2 * (n - i)) cout << "  ", j++;
        j = 1;
        while(j <= i) cout << "* ", j++;
        cout << endl;
        i--;
    }
}