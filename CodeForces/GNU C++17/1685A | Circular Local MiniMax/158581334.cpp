     //Rachit Garg
    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long 
    #define all(arr) arr.begin(), arr.end()
    #define ce  cout<<endl
    #define fo(i, n) for (ll i = 0; i < n; i++)
    #define f1(i, n) for (ll i = 1; i <=n; i++)
    #define fab(a,b) for (ll i = a; i < b; i++)
    #define rfo(i, n) for (ll i = n - 1; i >= 0; i--)
    #define pb push_back
    #define asort(a) sort(a.begin(), a.end())
    #define dsort(a) sort(a.begin(), a.end(), greater<int>())
    #define min3(a, b, c) min(c, min(a, b))
    #define min4(a, b, c, d) min(d, min(c, min(a, b)))
    #define max3(a, b, c) max(c, max(a, b))
    #define max4(a, b, c, d) max(d, max(c, max(a, b)))
    #define mod 998244353
 
    ll lcm(ll  a, ll b)
    {
        return (a/__gcd(a,b))*b ;
    }
    
    bool ch(string s,string a){
        ll pos=0;
        ll n=s.length();ll o=a.length();
        for(ll i=0;i<n;i++){
            if(pos==o){pos=0;}
            if(a[pos]!=s[i]){return false;}
            pos++;
        }
        return true;
    }
    bool prime(int n){
        if(n<0){
            return false;
        }
        for(int i =2;i*i<n;i++){
            if(n%i == 0){
                return false;
            }
        }
        return true;
    }
    bool palindrome(int n){
        int r,sum = 0,k;
        k = n;
        while(n>0){
        r = n%10;
        sum = sum * 10 + r;
        n = n/10;
    }
        if( k == sum){
            return true;
        }
        else{
            return false;
        }
    }
 
    bool isPalindrome(string S)
    { for (int i = 0; i < S.length() / 2; i++) {
            if (S[i] != S[S.length() - i - 1]) {
                return false;
            }
        }
        return true;
    }
    pair<ll,ll> powg2(ll n){
    ll i,ans;
        for(i=1;i<=32;i++){
            ll m = n*((ll)1<<i);
           if(m>32768){ans=n*((ll)1<<(i-1));break;}
        }
        return {ans,i-1};
        
    } 
 
    /////////////////////////////////////   
        
    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
       /* #ifndef ONLINE_JUDGE    
        freopen(input.txt, r, stdin); 
        freopen(output.txt, w, stdout);
        #endif */
      
        ll t;cin>>t;
        while(t--){
           ll n;cin>>n;map<ll,ll> m;
           ll a[n];fo(i,n){cin>>a[i];m[a[i]]++;}
           sort(a,a+n);
           if(n%2){cout<<"NO"<<"\n";continue;}
           bool h=true;
           fo(i,n){
               if(m[a[i]]>n/2){h=false;break;}
               if(m[a[i]]==n/2){
                   if((i<n/2 && a[n/2]==a[i]) || (i >=n/2 && a[(n/2)-1]==a[i])){h=false;break;}
               }
           }
           if(h==false){cout<<"NO"<<"\n";}
           else{
               cout<<"YES"<<"\n";
               ll st=(n/2)-1;ll end=n-1;
               while(st>=0 && end>=n/2){
                   cout<<a[end]<<" "<<a[st]<<" ";
                   st--;end--;
               }
               cout<<"\n";
           }
            
 
            }
            return 0;
        }