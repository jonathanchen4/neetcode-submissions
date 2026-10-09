class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> freq;
        for(auto &it : tasks) {
            freq[it]++;
        }

        priority_queue<int> maxHeap;
        for(auto& [it, count] : freq) {
            maxHeap.push(count);
        }

        int time = 0;
        queue<pair<int, int>> cooldown;
        while(!maxHeap.empty() || !cooldown.empty()) {
            ++time;

            if(maxHeap.empty()) {
                time = cooldown.front().second;
            }
            else {
                int count = maxHeap.top() - 1;
                if (count > 0) {
                    cooldown.push({count, time + n});
                }
                maxHeap.pop();
            }

            if(!cooldown.empty() && cooldown.front().second == time) {
                maxHeap.push(cooldown.front().first);
                cooldown.pop();
            }
        }
        return time;
    }
};
