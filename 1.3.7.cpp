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
    bool a = false;
    int min=0;
    cin >> x;
    int r = getK(x);

    if(r < n && arr[r] == x){
        a == true;
    }
  
    if(a == false && r + 1 < n){
        cout << arr[r + 1] << "\n";
    }else if(r<= n){
        cout << "NO SOLUTION" << "\n";        
        }else cout << arr[r] << "\n";
}

return 0;
}