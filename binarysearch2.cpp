#include <iostream>

using namespace std;

const long double EPS = 1e-9;// погрешность находимого корня

long double f(long double x) {// монотонное выражение с одним корнем
    long double x2 = x * x;
    long double x3 = x2 * x;
    long double x5 = x2 * x3;
    return x5 + 7.0*x3 - 8.0;
} 

long double findRoot(){
int l = 0.0; // границы корня уравнения
int r = 1.0; // r > l

while(r - l > EPS){
    long double mid = (r + l)/2;
    if(f(mid) < 0.0){
        l = mid;
    }else{
        r = mid;
    }
}  
return (r + l) / 2.0;
}

int main(){
//    ios_base::sync_with_stdio(0);
//    cin_tie(0);
cout << findRoot() << "\n";

return 0;
}
