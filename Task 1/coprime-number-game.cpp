#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> num(n);
    int max=0;
    for (int i=0; i<n; i++){
        cin>>num[i];
        max = max > num[i] ? max : num[i];
    }
    vector<int> phi(max+1);
    for(int i=0; i<=max; i++){
        phi[i] = i;
    }
    for(int i=2; i<=max; i++){
        if(phi[i] == i){
            for (int j=i; j<=max; j+= i) {
                phi[j] -= phi[j]/i;
            }
        }
    }
    for (int i=0; i<n; i++){
        int cost = 0;
        while (num[i] > 1){
            num[i] = phi[num[i]];
            cost++;
            // cout<< num[i]<<"*\n";
        }
        cout<<cost;
        if (i != (n-1)) cout <<"\n";
    }
    return 0;
}
