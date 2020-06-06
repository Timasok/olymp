#include <iostream>

using namespace std;

const long double EPS = 1e-6;// погрешность находимого корня
const int MAXN = 10;

int n;
int arr[MAXN];

int main(){
//    ios_base::sync_with_stdio(0);
//    cin_tie(0);
cin>> n;
for (int i = n; i >=0; i--){
    cin>> arr[i];
}

long double l = 0.0; // границы корня уравнения
long double r = 1 .0; // r > l

while(r - l > EPS){
    long double mid = (r + l)/2.0;
    long double num = arr[0];
    long double xn = mid;
    for (int i = 1; i <= n; i++){
        num += xn * arr[i];
        xn = xn * mid;
    }
    if(num < arr[0]){
        l = mid;
    }else{
        r = mid;
    }
}  

long double end = (r + l) / 2.0; 

cout << end << "\n";

return 0;
}