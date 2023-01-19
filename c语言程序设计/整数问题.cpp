#include<stdio.h>
int main()
{
	int n,i,j,a,b,m,c,d,e,f,g,h,k,l,o,p,q,r,s,t,u,v,w,x,y=0,z;
	scanf("%d",&n);
	z=n;
	for(i=1;i<=n-1;i++)
	{
		a=a*10;
	}
	for(j=1;j<=n;j++)
	{
		b=b*10;
	}
	for(m=a;m<b;m++)
	{
	    for(c=1;c<10;c++)
	    {
	    	d=n/10;
	    	n=d;
	    	if(d<10) break;
		}
		for(e=1;e<10;e++)
		{
			n=z;
			f=n/10;
			n=f;
			if(f<100) break;
			
		}
		for(g=1;g<10;g++)
		{
			n=z;
			h=n/10;
			n=h;
			if(h<1000) break;
			
		}
		for(k=1;k<10;k++)
		{
			n=z;
			l=n/10;
			n=l;
			if(l<10000) break;
			
		}
		for(o=1;o<10;o++)
		{
			n=z;
			p=n/10;
			n=p;
			if(p<100000) break;
			
		}
		for(q=1;q<10;q++)
		{
			n=z;
			r=n/10;
			n=r;
			if(r<1000000) break;
			
		}
		for(s=1;s<10;s++)
		{
			n=z;
			t=n/10;
			n=t;
			if(t<10000000) break;
			
		}
		for(u=1;u<10;u++)
		{
			n=z;
			v=n/10;
			n=v;
			if(v<100000000) break;
			
		}
		for(w=1;w<10;w++)
		{
			n=z;
			x=n/10;
			n=x;
			if(x<1000000000) break;
			
		}
		switch (n){ 
		case 8:{if(v%64==0&&t%49==0&&r%36==0&&p%25==0&&l%16==0&&h%9==0&&f%4==0) {y++;}
			else break;
		}
			case 7:{if(t%49==0&&r%36==0&&p%25==0&&l%16==0&&h%9==0&&f%4==0) {y++;}
			else break;
		}
			case 6:{if(r%36==0&&p%25==0&&l%16==0&&h%9==0&&f%4==0) {y++;}
			else break;
		}
			case 5:{if(p%25==0&&l%16==0&&h%9==0&&f%4==0) {y++;}
			else break;
		}
			case 4:{if(l%16==0&&h%9==0&&f%4==0) {y++;}
			else break;
		}
			case 3:{if(h%9==0&&f%4==0) {y++;}
			else break;
		}
			case 2:{if(f%4==0) {y++;}
			else break;
		}
			case 1:{y++;break;	}
		}
	}
	printf("%d\n",y);
}
