class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if (arr.size() < 3) {
            return (false);
        }
        int index = 0;
        int increasing_nbr = -1;
        while (index < arr.size() && increasing_nbr < arr[index]) {
            increasing_nbr = arr[index];
            index++;
        }
        if (index == arr.size() || index == 1) {
            return (false);
        }
        int decreasing_nbr = increasing_nbr;
        for (index; index < arr.size(); index++) {
            if (decreasing_nbr > arr[index]) {
                decreasing_nbr = arr[index];
            }
            else {
                return (false);
            }
        }
        return (true);
    }
};