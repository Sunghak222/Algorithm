#include <iostream>
#include <vector>
 
using namespace std;

void work(){
    int n,k,d;
    cin >> n >> d >> k;
 
    vector<int> ss(n+1),es(n+1);
 
    for (int i=0;i<k;i++){
        int a,b;
        cin >> a >> b;
        ss[a]++;
        es[b]++;
    }
 
    for (int i=0;i<n;i++) ss[i+1] += ss[i]; //i날까지 몇개 시작함 (끝난건 고려x)
    for (int i=0;i<n;i++) es[i+1] += es[i]; //i날까지 몇개 끝남 (시작한건 고려x)
 
    int most = 0; //하루에 최대 overlap
    int robert = 0; //최대 overlap한 날 - d + 1
    int mrs = 0; //최소 overlap한 날 - d + 1
    int least = 1e9; //최소 overlap
    for (int i=d;i<=n;i++){
        int cur = ss[i] - es[i-d]; //i날에 몇개가 진행중인가
        if (cur > most) most = cur, robert = i-d+1;
        if (cur < least) least = cur, mrs = i-d+1;
    }
    cout << robert << ' ' << mrs << "\n";
}
 
int main(){
    int t;
    cin >> t;
    while (t--) work();
 
    return 0;
}