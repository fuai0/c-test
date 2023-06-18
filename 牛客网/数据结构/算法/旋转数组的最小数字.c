
/**
 * 
 * @param rotateArray int����һά���� 
 * @param rotateArrayLen int rotateArray���鳤��
 * @return int����
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
