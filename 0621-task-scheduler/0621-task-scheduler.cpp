class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {

        unordered_map<char, int> freq;

        for(char task : tasks) {
            freq[task]++;
        }


        priority_queue<int> pq;

        for(auto it : freq) {
            pq.push(it.second);
        }

        int time = 0;


        while(!pq.empty()) {

            vector<int> temp;
            int cycle = n + 1;

            while(cycle > 0 && !pq.empty()) {

                int f = pq.top();
                pq.pop();

                f--;

                if(f > 0) {
                    temp.push_back(f);
                }

                time++;
                cycle--;
            }

            for(int f : temp) {
                pq.push(f);
            }

            if(!pq.empty()) {
                time += cycle;
            }
        }

        return time;
    }
};