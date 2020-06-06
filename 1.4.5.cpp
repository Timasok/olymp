#include <iostream>
#include <algorithm>//в данном примере используется для нахождения макс аргумента

using namespace std;

long long w; // ширина диплома
long long h; //высота диплома
int n; // кол-во дипломов  


long long diplomasNumber(long long w, long long h, long long sqra){
    return (sqra / w) * (sqra / h);
} 

int main(){
//    ios_base::sync_with_stdio(0);
//    cin_tie(0);

cin >> w >> h >> n;

long long l = 0;
long long r = max(w,h) * n;

while(r - l > 1){
    long long mid = (l + r)/2;
    if(diplomasNumber(w,h,mid)<n)
        l = mid;
    else
        r = mid;
}

cout << r << "\n";

return 0;
}
