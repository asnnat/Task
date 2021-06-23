#include<iostream>
#include<map>
using namespace std;

main(){
    int n;
    cin >> n;

    // find posible prime number in every case
    map<int, int> prime;
    map<int, int>::iterator mit;
    prime[2]++;
    for(int i = 3; i <= 10000; i++){ // sqrt of 100_000_000
        int count = 0;

        for(mit = prime.begin(); mit!= prime.end(); mit++){
            if(i % mit->first == 0){
                mit = prime.end();
            }else{
                count++;
            }
        }

        if(count == prime.size()){
            prime[i]++;
        }
    }
/*
    for(mit = prime.begin(); mit != prime.end(); mit++){
        cout << mit->first << endl;
    }*/

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;

        map<int, int> m;
        map<int, int>::iterator mitr;
        mit = prime.begin();
        while(num != 1 && mit != prime.end()){
            int temp = mit->first;
            if(num % temp == 0){
                m[temp]++;
                num /= temp;
            }else{
                mit++;
            }
        }

        mitr = m.begin();
        int check = mitr->second;
        for(mitr = m.begin(); mitr != m.end(); mitr++){
            if(mitr->second != check){
                check = 1;
                break;
            }
        }

        if(check == 1){
            cout << "NO" << endl;
        }else{
            cout << check << endl;
        }
    }
}