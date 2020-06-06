#include <iostream>

using namespace std;

const int MAXVALUE = 1000000500;
int n;

int main(){
//    ios_base::sync_with_stdio(0);
//    cin_tie(0);

cin>> n;
long sum = 0;

for (long i = 0; i < n; ++i){
    long a;
    cin >> a;  
    sum += a;
}

if(sum < MAXVALUE && sum > -MAXVALUE)
    cout << sum << "\n";
return 0;
}