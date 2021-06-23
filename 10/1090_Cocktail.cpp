#include<iostream>
#include<map>
using namespace std;

main(){
    int n;
    cin >> n;

    map<int, int> m;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;

        m[temp]++;
    }
    /*
    for(map<int,int>::iterator mitr = m.begin(); mitr != m.end(); mitr++){
        cout << mitr->first << " " << mitr->second << endl;
    }*/

    int a;
    cin >> a;

    long long int sum = 0;
    for(map<int,int>::iterator mitr = m.begin(); mitr != m.end(); mitr++){
        map<int,int>::iterator mit = m.find(a - mitr->first);
        
        if(mit != m.end()){
            if(mitr->first == mit->first){
                sum += mitr->second * (mit->second - 1) / 2;
            }
            else{
                sum += mitr->second * mit->second;
            }

            mitr->second = 0;
            mit->second = 0;
        }
    }

    cout << sum;
}