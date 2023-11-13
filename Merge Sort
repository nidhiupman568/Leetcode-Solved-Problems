class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {   
         int temp[r - l + 1];
         int x = l, y = m + 1, idx = 0;
         
         while(x <= m && y <= r){
            (arr[x] < arr[y]) ? (temp[idx] = arr[x], x++, idx++) : (temp[idx] = arr[y], y++, idx++);
         }
         
         while(x <= m) temp[idx] = arr[x], x++, idx++;
         while(y <= r) temp[idx] = arr[y], y++, idx++;
         
         for(int i = l; i <= r; i++){
             arr[i] = temp[i - l];
         }
    }
    
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l >= r) return;
        int mid = (l + r)/2;
        
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        
        merge(arr, l, mid, r);
    }
};
 
