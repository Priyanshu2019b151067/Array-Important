int solve(vector<int>& arr) {
    unordered_map<int,int> um;
    for(auto &x : arr){
        um[x]++;
    }
    for(auto x : um){
        if(x.second < 3) return x.first;
    }
}


// T.C - O(N) 
// S.C - O(N)
// Second Approach
 int solve(vector<int>& arr) {
   sort(arr.begin(),arr.end());
   int i = 0;
   int j = 2;
   while(j < arr.size()){
       if(arr[i] != arr[j]){
           return arr[i];
       }
       i = j+1;
       j = j + 3;
   }
   return arr[i];
}

// T.C - O(nlogn)
// S.C - O(1)

// Third Approach

int solve(vector<int>& arr) {
   int ans = 0;
   for(int i = 0;i < 32;i++){
       int c = 0;
       for(auto x : arr){
             if(x&(1 << i)){
                 c++;
             }
       }
       c = c%3;
       ans += (c << i);
   }
   return ans;
}

// T.C - O(32*N)
// S.C -O(1)