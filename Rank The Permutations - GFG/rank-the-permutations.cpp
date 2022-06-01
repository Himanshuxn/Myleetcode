// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
 long long fact[16];

    long long mod = 1000003;
 void find_factorial()
    {
       fact[0] = 1;
    
       fact[1] = 1;
    
       for(int i = 2; i <= 15; i++)
       {
           fact[i] = i * fact[i - 1];
       }
    }
    int rank(string str){
    //       int n = S.length();
    // long long fact[26]={};
    // int letters[256]={};
    // fact[0]=1;
    // fact[1]=1;
    // long long M =  1000003;
    // for(int i = 1;i<n;i++)
    // {
    //  fact[i+1]=(i+1)*fact[i];   
    // }
    // for(int i = 0;i<n;i++)
    // {
    //   letters[S[i]]++;  
    // }
    
    // long long answer = 0;
    // for(int i = 0 ; i<n;i++)
    // {
    //     long long smallerLetters=0;
    //   for(int j = 0;j<S[i];j++)
    //   {
    //       if(letters[j]==S[i])
    //       break;
    //       if(letters[j])
    //       smallerLetters++;
    //   }
    //   letters[S[i]]--;
    //   answer+=(smallerLetters*fact[n-1-i]);
    // }
    // return (answer+1)%M;
       

   

    
        
        int n = str.size();
        
        unordered_map<int, int> mp;
        
        for(int i = 0; i < n; i++)
        {
            mp[str[i]]++;
        }
        
        for(auto x : mp)
        {
            if(x.second > 1)
            {
                return 0;
            }
        }
        
        find_factorial();
        
        int x = n - 1;
        
        vector<int> freq(256, 0);
        
        for(int i = 0; i < n; i++)
        {
            freq[str[i]]++;
        }
        
        long long ans = 0;
        
        for(int i = 0; i < n; i++)
        {
            int count = 0;
            
            for(int j = 0; j < 256; j++)
            {
                if(str[i] == j)
                {
                    break;
                }
                else if(freq[j])
                {
                    count++;
                }
            }
            
            freq[str[i]] = 0;
            
            long long factorial = fact[x];
            
            x--;
            
            ans = (ans % mod + (count % mod * factorial % mod)) % mod;
        }
        
        return ans + 1;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.rank(S)<<endl;
    }
    return 0;
}  // } Driver Code Ends