#include <bits/stdc++.h>
#include<math.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef long double ld;

#define nline "\n" // Fixed to use string literal

const int L = 26;
int cnt[L];


// int numberSum(int n){
//     int sum =0;
//     while(n>0){
//         int lastDigit=n%10;
//         sum+=lastDigit;
//         n/=10;
//     }
//     return sum;
// }
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
    ll n;
    cin >>n;
    // vector<ll> arr(n);
    // for(auto &it:arr) cin>>it;
    vector<ll> odd,even,ans;
    if(n==1){
        cout<<1;
        return;
    }
    if(n==3 ||n==2){
        cout<<"NO SOLUTION";
        return;
    }

    for(int i=1;i<=n;i++){

        if(i%2==0){
            even.push_back(i);
        }else{
            odd.push_back(i);
        }
    }

    int evenSize=even.size();
    int oddSize=odd.size();
    for(int i=0;i<evenSize;i++){
        ans.push_back(even[i]);
    }
    for(int i=0;i<oddSize;i++){
        ans.push_back(odd[i]);
    }
    for(auto &it:ans){
        cout<<it<<" ";
    }




    
    
}
int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
       
        
        mohit();
        return 0;
    }