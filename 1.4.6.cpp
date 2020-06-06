#include <iostream>
#include <algorithm>

long long N;
int x,y;  

    int main(){
    //    ios_base::sync_with_stdio(0);
    //    cin_tie(0);

    std::cin>> N >> x >> y;


    int t1 = x;
    int t2 = y;
    if(x > y){
        t1 = y;
        t2 = x;
    }

    long long l = 0;
    long long r = N;

    long long tmin = t1;
    long long n1 = r,n2;
    while(r - l > 1){
        tmin = n2 * t1;
        if(tmin < n1 * t2)tmin = n1 * t2;
        int mid = (l + r)/2;
        n2 = N - mid;
            if(n2 * t1 < mid * t2 && mid * t2 < tmin || n2 * t1 < mid * t2 && n2 * t1 < tmin){
                r = mid;
            }else{
                l = mid;} 
        n1 = mid;             
    }
    tmin = (N-n1) * t1;
        if(tmin < n1 * t2)tmin = n1 * t2;
    std::cout << tmin << "\n";

return 0;}