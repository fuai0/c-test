/**
 * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
 *
 * 
 * @param pushV int����һά���� 
 * @param pushVLen int pushV���鳤��
 * @param popV int����һά���� 
 * @param popVLen int popV���鳤��
 * @return bool������
 */
 #include <stdlib.h>
 #include <stdio.h>
 #define max 1001
typedef struct{
    int* data;
    int lenth;
}stack;
bool IsPopOrder(int* pushV, int pushVLen, int* popV, int popVLen ) 
{
    int* arr1=pushV;
    int* arr2=popV;
    if(pushVLen!=popVLen)
    return false;
    int len = pushVLen;
    for(int w=0;w<len;w++)//�ж���������ֵ�Ƿ���ͬ
    {
        for(int j=0;;j++)
        {
            if(arr1[w]==arr2[j])
            {
                break;
            }
            if(j==len)
            return false;

        }
    }
    stack l;
    l.data=(int*)malloc(sizeof(int)*max);
    l.lenth=1;
    int i=0;
    int w=0;
    l.data[l.lenth]=arr1[w];
    while(i!=len)
    {
       
        if(l.data[l.lenth]!=arr2[i])
        {   
            l.lenth++;
            w++;
            l.data[l.lenth]=arr1[w];
            if(l.data[l.lenth]!=arr2[i])
           {

           }
          else 
           {
            l.lenth--;
                i++;
           }
        }
        else 
        {
            i++;
            l.lenth--;
        }
        if(w>=len)
              return false;
    }
    free(l.data);
    l.data=NULL;
    return true;








    // write code here
}