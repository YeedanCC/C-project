#include<stdio.h>
#include<string.h>
int main()
{
	int n,i;
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
		char d[1300]; 
		int a[600]={0},b[600]={0},c[600]={0},j,p,q,z,m=0,w,u,k,number=0;
		gets(d);
		w=strlen(d);
		for(j=0;j<w;j++)
		{
			if(d[j]=='-'||d[j]=='+')
			{
				u=j;
				break;
			}
		}
		for(j=u-1;j>=0;j--)
		{
			a[u-1-j]=d[j]-48;
			p=u;
		}
		for(j=w-1;j>=u+1;j--)
		{
			b[w-1-j]=d[j]-48;
			q=w-u-1;
		}
		if(d[u]=='+')
		{
			for(j=0;j<600;j++)
			{
				c[j]=a[j]+b[j]+c[j];
				if(c[j]>=10)
				{
					c[j]=c[j]-10;
					c[j+1]=1;
				}
			}
			if(p<q)
			{
				p=q;
			}
			if(c[p]==0)
			{
				for(j=p-1;j>=0;j--)
				{
					printf("%d",c[j]);
				}
			}
			else
			{
				for(j=p;j>=0;j--)
				{
					printf("%d",c[j]);
				}
			}
			printf("\n");
		}
		if(d[u]=='-')
		{
			if(p>q)
			{
				for(j=0;j<p;j++)
			    {
			    	if(a[j]>=b[j])
			    	{
			    		c[j]=a[j]-b[j];
					}
					else
					{
						c[j]=a[j]+10-b[j];
						for(z=j+1;z<p;z++)
						{
							if(a[z]==0)
							{
								a[z]=9;
							}
							else
							{
								a[z]=a[z]-1;
								break;
							}
						}
					}
				}
				for(j=p-1;j>=0;j--)
				{
					if(c[j]==0)
					{
						m++;
					}
					else
					{
						break;
					}
				}
				for(j=p-1-m;j>=0;j--)
				{
					printf("%d",c[j]);
				}
				printf("\n");
			}
			if(p<q)
			{
				for(j=0;j<q;j++)
			    {
			    	if(b[j]>=a[j])
			    	{
			    		c[j]=b[j]-a[j];
					}
					else
					{
						c[j]=b[j]+10-a[j];
						for(z=j+1;z<q;z++)
						{
							if(b[z]==0)
							{
								b[z]=9;
							}
							else
							{
								b[z]=b[z]-1;
								break;
							}
						}
					}
				}
				for(j=q-1;j>=0;j--)
				{
					if(c[j]==0)
					{
						m++;
					}
					else
					{
						break;
					}
				}
				printf("-");
				for(j=q-1-m;j>=0;j--)
				{
					printf("%d",c[j]);
				}
				printf("\n");   
			}
			if(p==q)
			{
				for(j=p-1;j>=0;j--)
				{
					if(a[j]<b[j])
					{
						for(k=0;k<q;k++)
			            {
			    	        if(b[k]>=a[k])
			    	        {
			    		        c[k]=b[k]-a[k];
					        }
					        else
					        {
						        c[k]=b[k]+10-a[k];
						        for(z=k+1;z<q;z++)
						        {
							        if(b[z]==0)
							        {
								        b[z]=9;
							        }
							        else
							        {
								        b[z]=b[z]-1;
								        break;
							        }
						        } 
					        }   
				        }
				        for(k=q-1;k>=0;k--)
				        {
					        if(c[k]==0)
					        {
						        m++;
					        }   
					        else
					        {
						        break;
					        }   
				        }
				        printf("-");
				        for(k=q-1-m;k>=0;k--)
				        {
					        printf("%d",c[k]);
				        }
				        printf("\n");
						break;   
			        }
			        if(a[j]>b[j])
					{
						for(k=0;k<p;k++)
			            {
			    	        if(a[k]>=b[k])
			    	        {
			    		        c[k]=a[k]-b[k];
					        }
					        else
					        {
						        c[k]=a[k]+10-b[k];
						        for(z=k+1;z<p;z++)
						        {
							        if(a[z]==0)
							        {
								        a[z]=9;
							        }
							        else
							        {
								        a[z]=a[z]-1;
								        break;
							        }
						        } 
					        }   
				        }
				        for(k=p-1;k>=0;k--)
				        {
					        if(c[k]==0)
					        {
						        m++;
					        }   
					        else
					        {
						        break;
					        }   
				        }
				        for(k=p-1-m;k>=0;k--)
				        {
					        printf("%d",c[k]);
				        }
				        printf("\n");
						break; 
			        }
			        number++;
				}
				if(number==p)
				{
					printf("0\n");
				} 
			}
		}
	}
}

