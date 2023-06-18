/**
 * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
 *
 * 
 * @param nums int����һά���� 
 * @param numsLen int nums���鳤��
 * @param target int���� 
 * @return int����
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
