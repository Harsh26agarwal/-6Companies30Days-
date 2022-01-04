class Solution {
public:
    int minSubArrayLen(int x, vector<int>& arr) {
        int n=arr.size();
        int sum = 0, min_len = n + 1,f=0;
	int i = 0, j = 0;
	while (j < n) {
       sum += arr[j];
		while (sum >=x && i < n) {
            f=1;
			if (j- i+1 < min_len)
				min_len = j- i+1;
			sum -= arr[i];
			i++;
		}
		j++;
	}
        if(f)
	return min_len;
    return f;
    }
};