#include<stdio.h>
#include<string.h>
int main()
{
        FILE *fp;
        char word[50],temp[50];
        int count=0;
        fp=fopen("sample.txt","r");
        if(fp==NULL)
        {
                printf("file is empty!\n");
                return 1;
        }
        printf("enter word to search:");
        scanf("%s",word);
        while(fscanf(fp,"%s",temp)!=EOF)
        {
                if(strcmp(temp,word)==0)
                        count++;
        }
        printf("repeated word %s %d times\n",word,count);
        fclose(fp);
        return 0;
}

