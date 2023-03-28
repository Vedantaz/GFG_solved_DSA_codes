
class solution{

    public:
    int print2largest(int arr[], int n) {

            int i, large, res;
            large = res = INT_MIN;
            for (i = 0; i < n ; i++)
            {
            
                    if (arr[i] > large)
                    {
                        res = large;
                        large = arr[i];
                    }
            
                    else if (arr[i] > res && arr[i] != large)
                    {
                        res = arr[i];
                    }
            }
            if (res != INT_MIN)
            {
                return res;
            }
            return -1;
            
        }
}