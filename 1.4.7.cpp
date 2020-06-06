#include <iostream>
#include <algorithm>

int N;
int K;  

int main(){
    //    ios_base::sync_with_stdio(0);
    //    cin_tie(0);

    std::cin>> N >> K;

    long long cord[N];

    for (int i = 0; i < N; i++){
       std::cin>> cord[i];
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