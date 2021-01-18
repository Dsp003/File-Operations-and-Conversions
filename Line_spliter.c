#include<stdio.h>
#include<stdlib.h>
int main()
{ FILE *p1,*p2;
    char a[25],b[25],c = '\0';
    int i=1;
    printf("Enter the file name to be opened: ");
    scanf("%s",a);
    p1=fopen(a, "r");
    if(p1 == NULL)
    { printf("The file %s cannot be opened",a);
        exit(0);
    }
    sprintf(b, "packet_%d.txt",i);
    p2=fopen(b, "w");
    printf("%s has been created",b);
    while ((c=getc(p1))!= EOF)
    {   if(c != '\n')
        {  putc(c, p2);
        }
        else
        {  i++;
           sprintf(b, "packet_%d.txt",i);
           p2=fopen(b, "w");
           printf("\n%s has been created",b);
        }
    }
    fclose(p1);
    fclose(p2);
    return 0;
}
