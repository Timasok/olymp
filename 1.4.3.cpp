#include <iostream>

using namespace std;

const long double EPS = 1e-6;// погрешность находимого корня
const int MAXN = 10;
int n;
int cx,cy,cd;
int arr[MAXN];
int x;

int main(){
//    ios_base::sync_with_stdio(0);
//    cin_tie(0);
cin >> cx >> cy >> cd;
cin>> n;
for (int i = n; i >=0; i--)
    cin>> arr[i];
cin >> x;

long double r = cx + cd;
long double l = x;
bool left = false; 

if(x < cx)left = true;
if(left == true){
        r = x; 
        l = cx-cd;
    }

while(r - l> EPS){
    long double mid = (r + l)/2.0;
    long double y = arr[0];
    long double xn = mid;
    for (int i = 1; i <= n; i++){
        y += xn * arr[i];
        xn = xn * mid;
    }
    if((mid - cx)*(mid - cx) + (y - cy)*(y - cy) < cd*cd){
        if(left == true)
        r = mid;
        else
        l = mid;
    }else{
        if(left == true)
        l = mid;
        else
        r = mid;
    }
}  

cout << (r + l)/2.0 << "\n";

return 0;
}