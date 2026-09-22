class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //rbegin and rend basically just go from ascending to descending order
//first find the frequency for each int inside of the array nums
    unordered_map <int, int> count;
    for(int num : nums) {
        count[num]++;
    }

//now inside of count it is [num, freq] and we need this to be in a vector pair of int int cause you cant switch the order of a hash
    vector<pair<int, int>> order;
    for(auto &p : count) {
        order.push_back({p.second, p.first});
    }
    //sort it in descending order
    sort(order.rbegin(), order.rend());

    //put the k num of most freq into array
    vector<int> result;
    for (int i = 0; i < k; ++i) {
        result.push_back(order[i].second); //.second would be the actual value which is what they want
    }
    
    return result;
    }
};
