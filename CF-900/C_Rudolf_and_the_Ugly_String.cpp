/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/09/29
|Time: 03:25:04
|Problem: C_Rudolf_and_the_Ugly_String
/Status: Accepted
|____________________________________________________*/

//#include<myBrain>
//#include<loveYouTooooooo>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define print(n) cout << (n) << endl;
#define tc ll t; cin >> t; while(t--)
#define int long long
int nCr(int n, int r){ int ans=1; for(int i=1;i<=r;i++){ ans=ans*(n-i+1)/i; } return ans; }
int fact(int n){if (n <= 1)return 1;return n*fact(n-1);}
int nPr(int n, int r){return fact(n)/fact(n-r);}
int intDigitSum(int n){int sum = 0; while(n){sum += n % 10; n /= 10;} return sum;}
int strDigitSum(string s){int sum = 0; for(int i = 0; i < s.size(); i++){sum += (s[i] - '0');} return sum;}
void solve() {

    tc{
        int n; cin >> n;
        string s; cin >> s;
        int cnt = 0;
        for(int i = 0; i < n; ){
            if((s[i] == 'm' and s[i + 1] == 'a' and s[i + 2] == 'p') or (s[i] == 'p' and s[i + 1] == 'i' and s[i + 2] == 'e')){
                cnt++;
                i += 3;
            } else{
                i++;
            }
        }
        cout << cnt << endl;
    }

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}