class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int p1=0;
        int p2  = n-1;
        for(int i=0;i<n;i++){
            int sum = numbers[p1]+numbers[p2];
            if(sum == target){
                return {p1+1,p2+1};
            }else if(sum < target){
                p1++;
            }else{
                p2--;
            }
        }
    }
};
