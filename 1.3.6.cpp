#include <iostream>

using namespace std;

const int MAXN = 100500;
int n,m; // x - число, которое необходимо проверить
int arr[MAXN];

int main(){
//    ios_base::sync_with_stdio(0);
//    cin_tie(0);
cin>> n >> m;

for (int i = 0; i < n; ++i)
cin >> arr[i];

for(int i = 0; i < m; ++i){
    int x;
    int mm;
    cin >> x;
    int l = -1;
    int r = n;
    while(l + 1 < r){
        int mid = (r + l)/2;
        if(arr[mid] < x){
            l = mid;
        }else{
            mm = arr[mid];
            r = mid;}
    }
    if(mm >= x){
        cout << mm << "\n";
    }else
        cout << "NO SOLUTION" << "\n";
    }

return 0;
}