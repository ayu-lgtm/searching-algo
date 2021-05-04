#include <stdio.h>
#include <stdlib.h>
void array(int p[],int q)
{
    printf("Enter the elements of array:");
    for(int i=1;i<=q;i++)
    {
        scanf("%d",&p[i]);
    }
    int temp;
    for(int i=1;i<=q;i++)
    {
        for(int j=1;j<q-i;j++)
        {
            if(p[j]>=p[j+1])
            {
                temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
    printf("Array a[%d] :  ",q);
    printf("{");
    for(int i=1;i<=q;i++)
    {
        printf("%d,",p[i]);
    }
    printf("}");
}
int binary_search(int p[],int t,int q,int l)
{
      int mid;
      mid=(t+q)/2;
      if(q>=t)
      {
            if(p[mid]==l)
            {
                return mid;
            }
            if(p[mid]>l)
            {
                return binary_search(p,t,mid-1,l);
            }
            return binary_search(p,mid+1,q,l);
      }
      return -1;
}
int main()
{
        int n;
    printf("Enter the size of array a[]:\n");
    scanf("%d",&n);
    int a[n];
    array(a,n);
    int l;
    printf("\n");
    printf("For Searching Elememt,Enter NUMBER: ");
    scanf("%d",&l);
    printf("\n");
    int result=binary_search(a,1,n,l);
    (result==-1)?printf("\n %dElement is not present in array a[%d].",l,n)
                :printf("\n %d Element is present in array a[%d] at location %d.",l,n,result);
    return 0;
}
