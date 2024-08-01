void MyStack :: push(int x)
{
    
    // Your Code
    
    if(top<1000-1) arr[++top] = x;
    
    
}
//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    // Your Code       
   
    // If x found in array
    if(top>= 0) return arr[top--];
    else return -1;
   
}