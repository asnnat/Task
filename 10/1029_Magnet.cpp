#include<iostream>
using namespace std;

main(){
    int n, m, q;
    cin >> n >> m >> q;

    char magnet[n + 1];
    for(int i = 1; i <= n; i++){ // set magnet
        magnet[i] = 'N';
    }

    for(int i = 0; i < m; i++){
        int start, sum;
        cin >> start >> sum;
        for(int j = start; j < start+sum; j++){ // switch magnet
            if(magnet[j] == 'N'){
                magnet[j] = 'S';
            }else{
                magnet[j] = 'N';   
            } 
        }
    }

    int above[n + 1];
    int under[n + 1];
    for(int i = 1; i <= n; i++){
        // chek magnet above it
        above[i] = 0; 
        if(i != 1){
            if(magnet[i] == magnet[i-1]){
                above[i] += above[i-1]+1;
            }
        }

        // check magnet below it
        under[n - i + 1] = 0;
        if(n - i + 1 != n){
            if(magnet[n - i + 1] == magnet[n - i + 2]){
                under[n - i + 1] += under[n - i + 2] + 1;
            }
        }
    }
    for(int i = 0; i <q; i++){
        int temp;

        cin >> temp;
        cout << above[temp] + under[temp] + 1 << endl;
    }
}