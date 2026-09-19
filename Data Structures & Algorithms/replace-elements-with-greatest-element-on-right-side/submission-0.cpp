class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> a; 
        for(int i = 0; i < arr.size() - 1; i++)
        {
            int temp = arr.at(i + 1); 
            for(int j = i + 1; j < arr.size(); j++)
            {
                if(arr[j] > temp)
                {
                    temp = arr[j]; 
                }
            }
            a.push_back(temp); 
        }
        a.push_back(-1); 
        return a;
    }
};