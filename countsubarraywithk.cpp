#include <bits/stdc++.h>
using namespace std;

int countSubarrays(vector<int>& arr, int k) {
 int n = arr.size();
 int count = 0;

 for (int i = 0; i<n; i++) {
     int sum = 0;
        for(int j=i;j<n;j++)
        {
            
                sum+=arr[j];
                if(sum==k)
                
                    count++;
                
            
        }
       
}
 return count;
}

int main() {
    vector<int> arr = {10, 2, -2, -20, 10};
    int k = -10;
    cout << countSubarrays(arr, k);
    return 0;
}
