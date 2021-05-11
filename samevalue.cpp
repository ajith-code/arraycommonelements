#include <iostream>


using namespace std;


int main()

{
     
int a[]={10,20,3,4,5,6,7};

int b[]={12,3,14,5,4};
    
int c[]={7,8,3,4,50,5};
    
    
    
for(int i=0;i<=6;i++)
    
{
      
for(int j=0;(j<=5);j++)
       
{
        
        
if(a[i]==b[j])
         
{

          
for(int k=0;k<=5;k++)
           
{
              
if(a[i]==c[k])
              
{
                
cout<<"same integer are present in array :"<<a[i]<<"\n";  
              
}
           
}
         
}
       
}
    
}
    
   

    
return 0;

}