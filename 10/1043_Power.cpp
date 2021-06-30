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
            //cout << num << " " << temp << endl;
            if(num % temp == 0){
                m[temp]++;
                num /= temp;
            }else{
                mit++;
            }
        }
/*
        cout << m.size() << endl;
        for(mitr = m.begin(); mitr != m.end(); mitr++){
            cout << mitr->first << " " << mitr->second << endl;
        }*/

        int check;
        if(m.size() > 0){
            mitr = m.begin();
            check = mitr->second;
            for(mitr = m.begin(); mitr != m.end(); mitr++){
                if(mitr->second != check || mitr->second == 1){
                    check = 1;
                    break;
                }
            }
        }else{ // no prime number between 0 and 10000 can devide it.
            check = 1;
        }
        
        if(check == 1){
            cout << "NO" << endl;
        }else{
            cout << check << endl;
        }
    }
}