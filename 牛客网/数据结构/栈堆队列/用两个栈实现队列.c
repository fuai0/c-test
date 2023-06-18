/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 * 
 * @param node int整型 
 * @return 无
 */
 int arr[1000]={0};
 int a1=0;
 int a2=0;
void push(int node ) {
    arr[a1++]=node;
    // write code here
}

/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 * 
 * @param 无 
 * @return int整型
 */
int pop() {
    int x=0;
    x=arr[a2++];
    return x;
    // write code here
    
}