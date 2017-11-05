#include <iostream>
using namespace std;

//输入一组数并求众数,出现位置,出现次数,数字大小
class Mode{
    public:
        void mode(int arr[]){
            int i,j,max;
            int sum[30],out[30];

        for(i=0;i<30;i++)
                {sum[i]=0;out[i]=0;}
 
        for(i=0;i<30;i++)
                for(j=0;j<i;j++)
                        if(a[i]==a[j])
                                sum[i]++;
        j=0;
        max=0;
        for(i=0;i<30;i++)
        {
                if(max<sum[i])
                        {max=sum[i];j=0;out[j]=a[i];}
                else if(max==sum[i])
                        {j++;out[j]=a[i];}
        }
 

        };

     private:
         int nu[30];//序号
         int num[30];//大小
         int a[30];//次数
         int where[30][20];//位置
};
//
void read(int arr[]){
    int n;
    cin>>n;
    for(int i=0;i<30;i++)
        cin>>arr[i];
}
//读取
void sort(int a[]){
 int i,j,b;
 for(j=0;j<30;j++)
 {
     for(i=30;j<i;i--)
     {
      if(a[i]>a[i-1])
      {
       b=a[i];
       a[i]=a[i-1];
       a[i-1]=b;
      }
     }
 }
}


int main(){
    int arr[30];
    read(arr[]);
    sort(arr[]);
    Mode.mode(arr[]);


    //delete[] arr;
    return 0;
}
