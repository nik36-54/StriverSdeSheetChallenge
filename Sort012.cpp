void sort012(int *arr, int n)
{
   int low=0,high=n-1,mid=0;
   while(mid<=high)
   {
       if(arr[mid]==0)
       {
           swap(arr[low],arr[mid]);
           low++;
           mid++;
       }
       else if(arr[mid]==2)
       {
           swap(arr[high],arr[mid]);
           high--;
       }
       else
       {
           mid++;
       }
   }
    
// National Dutch Flag Algorithm O(N) time
// and O(1) space.
}