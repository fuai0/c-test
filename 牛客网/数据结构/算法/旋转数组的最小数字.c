
/**
 * 
 * @param rotateArray int整型一维数组 
 * @param rotateArrayLen int rotateArray数组长度
 * @return int整型
 */
int minNumberInRotateArray(int* rotateArray, int rotateArrayLen ) 
{
    int* arr = rotateArray;
    int len = rotateArrayLen;
    int left = 0;
    int right = len-1;
    while(left<right)
    {
        int mid=(left+right)/2;
        if(rotateArray[mid]<rotateArray[right])
        {
        right=mid;
        }
         else if(rotateArray[mid]>rotateArray[right])
         {
          left=mid+1;
         }
        else {
          right--;
          }
}
return rotateArray[left];
}
