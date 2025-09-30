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
    // ll n;
    // cin >>n;
    // vector<ll> a(n);
    // for(auto &it:a) cin>>it;
    string s;
    cin>>s;
    int maxi=0,count=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            count++;
            maxi=max(maxi,count);
        }else{
            count=0;
        }
    }
    cout<<maxi+1;
 
 
 
    
    
}
int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
       
        
        mohit();
        return 0;
