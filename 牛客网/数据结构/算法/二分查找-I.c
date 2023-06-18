/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 * 
 * @param nums int整型一维数组 
 * @param numsLen int nums数组长度
 * @param target int整型 
 * @return int整型
 */
int search(int* nums, int numsLen, int target ) 
{
    int left = 0;
    int right = numsLen-1;
    if(right<=left)
    {
        if(*(nums) == target)
        return 0;
        else
        return -1;
    }
    int mid =0;
    while(left != right && left < right)
    {
        mid = (left+right)/2;
        if(*(nums+mid) == target)
            return mid;
        else if(*(nums+mid) > target)
            right = mid-1;
        else if(*(nums+mid) < target)
            left = mid+1;
    }
    if(*(nums+left)==target)
    return left;
    else
    return -1;

    // write code here
}
