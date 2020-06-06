#include <iostream>

using namespace std;

const int MAXN = 10000500;
const int MAXVALUE = 1000000500;
int n, m;
int a[MAXN];

int getIterNum(int k,int n){
int l = -1;
int r = n;
int num = 0;
while(l + 1 < r){
    int mid = (r + l)/2;
    if(mid < k){
        l = mid;
    }else{
        r = mid;
    }
    num++;
}  
return num;

}

int main(){
//    ios_base::sync_with_stdio(0);
//    cin_tie(0);
    
    cin>> n >> m;

    for (int i = 0; i < m; ++i){
        int k;
        cin >> k;
        cout << getIterNum(k,n) << "\n";
    
    }

    return 0;
}