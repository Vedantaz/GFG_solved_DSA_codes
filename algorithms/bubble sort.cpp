class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {
        // Your code here  
       bool swapped = true;
<<<<<<< HEAD
       int start = 0;
       int end = n-1;
    
       while (swapped) {
            swapped = false;

=======
       int start = 0, end = n-1;
    
       while (swapped) {
            swapped = false;
        
            
>>>>>>> fc687de48ecb85f65afcd96cf30837de80cabf9a
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
<<<<<<< HEAD
            swapped = false;
=======
        
            swapped = false;
        
>>>>>>> fc687de48ecb85f65afcd96cf30837de80cabf9a
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
<<<<<<< HEAD

=======
>>>>>>> fc687de48ecb85f65afcd96cf30837de80cabf9a
