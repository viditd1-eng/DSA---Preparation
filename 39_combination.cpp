class Solution {
public:
    vector<vector<int>> ans;
    vector<int> curr;

    void backtrack(vector<int>& candidates, int start, int target){
        if(target == 0){
            ans.push_back(curr);
            return;
        }
        for(int i=start;i<candidates.size();i++){
            if(candidates[i]>target){
                continue;
            }
            curr.push_back(candidates[i]);

            backtrack(candidates,i,target-candidates[i]);

            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        backtrack(candidates,0,target);
        return ans;
    }
};
