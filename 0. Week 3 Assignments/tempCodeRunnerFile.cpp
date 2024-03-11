   if (arr[left] < arr[right])
         {
             right--;
         }
         else
         {
             swap(arr[left],arr[right]);
             left++;
             right--;
         }
