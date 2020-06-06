#include <iostream>

using namespace std;

const int MAXN = 100500;
int n;
int a[MAXN];

int main(){
//    ios_base::sync_with_stdio(0);
//    cin_tie(0);

int l = -1;// индес левого нуля
int r = n; // индекс правой единицы

cin>> n;

int l = -1;
int r = n;
while(l + 1 < r){
    int mid = (r + l)/2;
    if(arr[mid] < x){
        l = mid;
    }else{
        r = mid;}
}
return r;

cout << r << "\n";

return 0;
}
