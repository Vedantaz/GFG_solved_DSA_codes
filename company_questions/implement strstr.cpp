int strstr(string s, string x)
{
     //Your code here
     
      int i,j=0;

     for(i=0;i<s.length();i++)

     {

         if(s[i]==x[j])

         j++;

         else{

             i-=j;

             j=0;

         }

         if(j==x.length())

         return i-j+1;

     }

     return -1;
     
     
}