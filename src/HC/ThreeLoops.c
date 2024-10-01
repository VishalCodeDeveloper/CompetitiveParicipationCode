#include<stdio.h>

int main()
{
	int n,sum;
	scanf("%d%d",&n,&sum);
	int ans=0,a,b,c;
	for(a=1;a<=n;a++)
	{
    //Exiting loop before completion as if suffice the condition of sum
		for(b=1;b<=(sum - (a - 1));b++)
		{
      //Exiting loop before completion as if suffice the condition of sum
			for(c=1;c<=(sum - (a + b));c++)
			{
				if(a+b+c==sum){
					ans++;
				}
			}
			
		}
		
	}
	printf("%d\n",ans);
	return 0;
	
}
