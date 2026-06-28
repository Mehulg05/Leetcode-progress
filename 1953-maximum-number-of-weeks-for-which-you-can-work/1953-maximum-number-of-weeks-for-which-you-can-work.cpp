class Solution {
public:
    long long numberOfWeeks(vector<int>& milestones) {
        int n = milestones.size();
        long long sum =0;
        long long m =0;
        for(int i=0;i<n;i++){
            sum+=milestones[i];
            m=max(m, (long long)milestones[i]);
        }

        long long others= sum-m;
        if(m<=others+1) return sum;
        else return 2*others+1;
    }
};