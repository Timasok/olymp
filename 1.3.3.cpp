#include <iostream>

using namespace std;

const int MAXN = 10000500;
int n, m;

int main(){
//    ios_base::sync_with_stdio(0);
//    cin_tie(0);
    
    cin>> n >> m;

    int l = -1;
    int r = n;

    for (int i = 0; i < m; ++i){
        int x;
        cin >> x;
        int mid = (r + l)/2;
        if(x == 0)
        {
            l = mid;
        }else{
            r = mid;
        }
    }  

    cout << r << "\n";
    return 0;
}