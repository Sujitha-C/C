#include<stdio.h>
#include<stdlib.h>
void topscorer();
void evenrollno();
void uniquedetail();
int n;
struct student
{
	char a[100];
	int rollno,age,marks;
}s[100];
int main()
{
	int i,temp=0,j,num,ch;
	scanf("%d",&n);
	printf("enter the student details..name..rollno..age..marks\n");
	for(i=0;i<n;i++)
	{
		printf("student: %d\n",i+1);
		scanf("%s",&s[i].a);
		scanf("%d%d%d",&s[i].rollno,&s[i].age,&s[i].marks);
    }
    printf("\n1.Top scorer\n2.Even no list\n3.Unique details\n4.exit\n");
	while(1)
	{
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				    topscorer();	
                	break;
            case 2:
           	        evenrollno();
                 	break;
			case 3:
			 		uniquedetail();
	                break;
	        case 4:
	        	exit(1);
	        	break;
		}
	}
}
void topscorer()
{
	int i,j,temp;
	temp=0;
	printf("\nTop scorer\n");
                	for(i=0;i<n;i++)
	                {
	                	if(s[i].marks>temp)
		                {
		                    temp=s[i].marks;
	                 	}
                 	}
                	for(i=0;i<n;i++)
	                {
	                 	if(temp==s[i].marks)
		                {
			                j=i;
			                break;
		                }
                   	}
                	printf("name:%s\nrollno:%d\nage:%d\nmarks:%d\n",s[j].a,s[j].rollno,s[j].age,s[j].marks);
}
void evenrollno()
{
	int i;
	printf("\neven rollno list\n");
	                for(i=0;i<n;i++)
	                {
	                	if(s[i].rollno%2==0)
		                {
			                printf("name:%s\nrollno:%d\nage:%d\nmarks:%d\n",s[i].a,s[i].rollno,s[i].age,s[i].marks);
		                }
                 	}
}
void uniquedetail()
{
	int num,i;
	printf("\n\nenter any rollno:");
	                scanf("%d",&num);
	                printf("\n");
                   	for(i=0;i<n;i++)
	                {
	                 	if(s[i].rollno==num)
	                	{
			                printf("name:%s\nrollno:%d\nage:%d\nmarks:%d\n",s[i].a,s[i].rollno,s[i].age,s[i].marks);
		                }
	                }
}
