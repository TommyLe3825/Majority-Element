class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::unordered_map<int, int> count; // keep count of the elements
        for(int num : nums){
            count[num]++; // this should keep count as the value which is linked to the key which is the current element
        }
        int majorityElement = nums[0]; //keeps track of the element with the most occurences
        int counter = count[nums[0]]; //holding the count of the first element of the nums array

        for(auto &pair : count){ //for each key-value pair in count...
            if(pair.second > counter){ //check if the current value is greater than counter
                counter = pair.second; //updating the counter with the new value
                majorityElement = pair.first; //updating majorityElement with the new key
            }
        }
        return majorityElement;
    }
};
