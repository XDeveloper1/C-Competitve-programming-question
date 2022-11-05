#include<iostream>
#include<algorithm>
 
using namespace std;
class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
       if(N=0)
    return "";
        if(N==1)
        return arr[0];
            sort(arr,arr+N);
            int en = min(arr[0].size(),arr[N-1].size());

        string first = arr[0],last = arr[N-1];
        int i=0;
    while (i<en&&first[i]==last[i])
        i++;
         string pre = first.substr(0,i);
            return pre;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends