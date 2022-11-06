#include<stdio.h>
#include<stdlib.h>
int n=0;
struct sign
{
	char name[100],email[100],password[100],dob[100]; 
};
int main()
{
	int ch,i,j,k,m;
	char nm[100],pwd[100];
	struct sign a[100];
	label:while(1)
	{
		printf("1.signup\n2.login\n3.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 2:
				printf("enter name\n");
				scanf("%s",&nm);
				printf("enter password\n");
				scanf("%s",&pwd);
				printf("\n");
				for(i=0;i<n;i++)
				{
					j=strcmp(a[i].name,nm);
					k=strcmp(a[i].password,pwd);
					if(j==0 && k==0)
					{
						printf("login successfully.\n");
						while(1)
						{
							printf("1.view\n2.edit\n3.back\n");
						scanf("%d",&m);
						switch(m)
						{
							case 1:
								printf("name:%s\npassword:%s\nmail:%s\ndob:%s\n",a[i].name,a[i].password,a[i].email,a[i].dob);
								break;
							case 2:
									printf("enter name:");
				                    scanf("%s",&a[i].name);
				                    printf("\n");
			                      	printf("enter password:");
			                    	scanf("%s",&a[i].password);
			                      	printf("\n");
			                    	printf("enter email:");
				                    scanf("%s",&a[i].email);
				                    printf("\n");
				                    printf("enter dob:");
				                    scanf("%s",&a[i].dob);
			                    	printf("\n");
							    	break;
							case 3:
								goto label;
								break;
						}
						}
						break;
					}
				}
				if(!(j==0) && !(k==0))
				{
					printf("can't resister.\n");
				}
				break;
			case 1:
				printf("enter name:");
				scanf("%s",&a[n].name);
				printf("\n");
				printf("enter password:");
				scanf("%s",&a[n].password);
				printf("\n");
				printf("enter email:");
				scanf("%s",&a[n].email);
				printf("\n");
				printf("enter dob:");
				scanf("%s",&a[n].dob);
				printf("\n");
				printf("account successfully created.\n");
				n++;
				break;
			case 3:
				exit(1);
				break;
		}
	}
}
