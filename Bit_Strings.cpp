#include <bits/stdc++.h>
#include<math.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef long double ld;

#define nline "\n" // Fixed to use string literal
const long long MOD = 1e9 + 7;  // 10^9 + 7
const int L = 26;
int cnt[L];


int numberSum(int n){
    int sum =0;
    while(n>0){
        int lastDigit=n%10;
        sum+=lastDigit;
        n/=10;
    }
    return sum;
}
// bool check(vector<ll>& arr){
//     ll even=0,odd=0;
//     for(auto &it:arr){
//         if(it%2==0){
//             even++;
//         }else{
//             odd++;
//         }
//     }
//     return even==arr.size()||odd==arr.size();
// }
// bool isValid(ll n) {
//     if (n == 0) return false; // 0 is not valid, but 1 should be valid
//     while (n > 0) {
//         int d = n % 10;
//         if (d != 0 && d != 1) return false;
//         n /= 10;
//     }
//     return true;
// }

// bool paliDrome(string &s){
//     int l=0,r=s.size()-1;
//     while(l<=r){
//         if(s[l]!=s[r]){
//             return false;
//         }
//         l++;
//         r--;
//     }
//     return true;
// }



void mohit() {
    long long n;
    cin >> n;
    // vector<ll> arr(n);
    // ll sum = 0;

    // for (auto &it : arr) {
    //     cin >> it;
    //    // sum += (it + x - 1) / x;  // ceil(it/x)
    // }

    cout<<(long long)pow(2,n)%MOD;

}

ll power_mod(ll n){
    ll ans=1;
    for(int i=0;i<n;i++){
        ans=(ans*2)%MOD;
    }
    return ans;
}

int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
       
        
        // int t;
        // cin>>t;
        // while(t--){
        //     mohit();
        // }
        //mohit();

        ll n;
        cin>>n;
        cout<<power_mod(n)<<nline;
        return 0;
    }