/**
 * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
 *
 * 
 * @param node int���� 
 * @return ��
 */
 int arr[1000]={0};
 int a1=0;
 int a2=0;
void push(int node ) {
    arr[a1++]=node;
    // write code here
}

/**
 * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
 *
 * 
 * @param �� 
 * @return int����
 */
int pop() {
    int x=0;
    x=arr[a2++];
    return x;
    // write code here
    
}