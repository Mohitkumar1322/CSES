#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
#define ll long long
using namespace std;
 
 
 
 
 
int main() {
    ll n;
    ll s =0;
    cin>>n;
    for(int i=1;i<n;++i){
        int a ;
        cin>>a;
        s+=a;
    }
    cout<<n*(n+1)/2-s;
