class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> temp;
        for(auto& i : nums) {
            temp[i]++;
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        for(auto& i : temp) {
            minHeap.push({i.second, i.first}); //pushes frequency, then value
            if (minHeap.size() > k) { //checks if minHeap has more than k amount of entries
                minHeap.pop();
            }
        }
        vector<int> result;
        for(int i = 0; i < k; ++i) {
            result.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return result;
    }
};
