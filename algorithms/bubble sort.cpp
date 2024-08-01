class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {
        // Your code here  
       bool swapped = true;
       int start = 0;
       int end = n-1;
    
       while (swapped) {
            swapped = false;

            for (int i = start; i < end; i++) {
              if (arr[i] > arr[i+1]) {
                // swap arr[i] and arr[i+1]
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                swapped = true;
              }
            }
        
            // if no swap occurred in the previous loop, break
            if (!swapped) {
              break;
            }
            swapped = false;
            // sort from right to left
            for (int i = end-1; i >= start; i--) {
              if (arr[i] > arr[i+1]) {
                // swap arr[i] and arr[i+1]
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                swapped = true;
              }
            }
        
            // update the boundaries
            start++;
            end--;
  }
    }
};

