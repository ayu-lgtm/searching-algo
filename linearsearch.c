#include <stdio.h>
#include <stdlib.h>
void array(int p[],int q)
{
    printf("Enter the elements of array:");
    for(int i=1;i<=q;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("Given Array a[%d] :  ",q);
    printf("{");
    printf("%d,",p[1]);
    for(int i=2;i<q;i++)
    {
        printf("%d,",p[i]);
    }
    printf("%d",p[q]);
    printf("}");
}
void find(int p[],int q,int l)
{
    int i;
    int z=1;
    for(i=1;i<=q;i++)
    {
        if(p[i]==l)
        {
            printf("\nElement %d Present In %d position.\n",l,i);
            z=0;
        }

    }
    if(z==1)
    {
        printf("\n%d isn't Present in the array a[%d].\n",l,q);
    }
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
    find(a,n,l);
    return 0;
}
