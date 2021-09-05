#include<iostream>
using namespace std;
int main()
{

         int i=0;
		 int  index=9999999;
         string  s;
          cin>>s;
        int a[256],b[256];
        for(i=0;i<256;i++)
        {
            a[i]=0;
            b[i]=0;
        }
    
        for(i=0;s[i]!='\0';i++)
	       {
		  a[s[i]]++;
            b[s[i]]=i;
	   }
       
        for(i=0;i<256;i++)
        {
            if(a[i]==1 && b[i]<index)
            {
                index=b[i];
            }
        }
      if(index==9999999)
          index=-1;
       cout<<index;
        return 0;
       
}
    
    


