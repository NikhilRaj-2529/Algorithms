// GFG Problem
// Sorting Elements of an Array by Frequency

class Solution{
    public:
    static bool comp(const pair<int, int>& a, const pair<int, int>& b){
        if (a.first != b.first) return a.first > b.first;
        else return a.second < b.second;
    }
    vector<int> sortByFreq(int arr[],int n){
        //Your code here
        vector<pair<int,int>> vt;
        map<int,int> mpp;
        for(int i = 0 ; i < n ;i++) mpp[arr[i]]++;
        for(auto it : mpp) vt.push_back({it.second,it.first});
        sort(vt.begin(),vt.end(),comp);
        vector<int> ans;
        for(int i = 0 ; i < vt.size() ; i++){
            while(vt[i].first != 0){
                ans.push_back(vt[i].second);
                vt[i].first--;
            }
        }
        return ans;
    }
};
