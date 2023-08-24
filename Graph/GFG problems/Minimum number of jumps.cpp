// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        int cnt=0,l=0,r=0;
        if(arr[0]==0)return -1;
        while(r<n-1)
        {
            int mx=0;
            for(int i=l;i<=r;i++){
                mx=max(mx,i+arr[i]);
            }
            l=r+1;
            if(r==mx)return -1;
            r=mx;
            cnt++;
        }
        return cnt;
    }
};