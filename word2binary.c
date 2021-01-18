#include<stdio.h>
int main()
{ char str[10];
    int a[10],b[100],i=0,j=0,k;
    printf("Enter the word: ");
    scanf("%s",str);
    while(str[i]!='\0')
    {   a[i]=str[i];
        printf("%d\t",a[i]);
        i++;
    }
    printf("\n");
    while(a[j]!='\0')
    { k=0;
      while(a[j]!=0)
      {  b[k]=a[j]%2;
          a[j]=a[j]/2;
          if(a[j]!=0)
          k++;
      }
        while (k>=0)
        {
            printf("%d",b[k--]);
        }
        printf(" ");
        j++;
    }
    printf("\n");
    return 0;
}
