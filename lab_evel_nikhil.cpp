#include<iostream>
using namespace std;

main()
{
int arr[100],p=0,n,i,j,f=0,number;

cout<<"enter the array size :";
cin>>n;
cout<<"\nenter "<<n<<" elements"<<endl;
if(n<=99){
for(i=0;i<n;i++)
{
    cin>>arr[i];
}
for(i=0;i<n-1;i++){
for(j=0;j<n-1;j++)
    {
    if(arr[j]>arr[j+1])
        {
       number=arr[j];
       arr[j]=arr[j+1];
       arr[j+1]=number;
        }

    }
}

cout<<"array is "<<endl;

for(i=0;i<n;i++){cout<<"\n"<<arr[i]<<" ";}


cout<<"enter the number to enter in the array :";
cin>>number;

for(i=0;i<n;i++)
{
    if(number==arr[i]){f++;};
}
for(i=0;i<n;i++)
{
    if(arr[i]<number&&arr[i+1]>number){p=i;}
}
cout<<"\nposition "<<p+1<<endl;
    if(f==0){

        for(j=n;j>p;j--)
            {
            if(arr[j-1]>number)
                {
                arr[j]=arr[j-1];
                }

            }



        arr[p+1]=number;

cout<<"array is "<<endl;

for(i=0;i<=n;i++){cout<<arr[i]<<" ";}


}
else{

cout<<"duplicate in array present"<<endl;

for(i=0;i<n;i++){cout<<"\n"<<arr[i]<<" ";}



}







}
else{cout<<"number should be less then 100";}



}
