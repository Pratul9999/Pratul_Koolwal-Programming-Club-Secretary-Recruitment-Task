#include "testlib.h"
#include <iostream>
 
using namespace std;
 
int main(int argc, char *argv[]) {
    registerGen(argc, argv, 1);
 
    /* Single random number between 1 and 1000000 inclusive. */
    int n = rnd.next(1, 100000);
    cout << n << endl;
    
    /* n random numbers between 1 and 1000000 inclusive. */
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        a[i] = rnd.next(1, 1000000);
    println(a);
}
