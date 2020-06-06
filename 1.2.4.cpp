#include <iostream>

using namespace std;

const int MAXVALUE = 1000000500;
const int mod = 1791791791;
int n;
int cur,a,b;

int main(){
//    ios_base::sync_with_stdio(0);
//    cin_tie(0);

cin>> n;
cin >> cur >> a >> b;
int arr[n];

for(int i = 0; i < n; ++i){
    cur = ((cur * a) + b) % mod;        
    arr[i] = cur;
    cout << cur << "\n"
}
/*
int maxa = MAXVALUE - 1;
int max2a = MAXVALUE - 1;
int index = 0;
int index2 = 0;

for(int i = 0; i < n; ++i)   
    if(maxa < arr[i]){
        maxa = arr[i];
        index = i;
    }

for(int i = 0; i < n; ++i)
    if(i != index && max2a < arr[i]){
        max2a = arr[i];
        index2 = i;        
    }  

cout << index + " " + index2 << "\n";*/
return 0;

}