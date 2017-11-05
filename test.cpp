#include <iostream>
using namespace std;

int s =3;
class Mode{
    public:
    void InsertSort(int a[s][2], int n){
    for(int i= 1; i<n; i++){  
        if(a[i][0] < a[i-1][0]){   
            int j= i-1;   
            int x = a[i][0];        //复制为哨兵，即存储待排序元素  
            a[i][0] = a[i-1][0];           //先后移一个元素  
            a[i][1] = a[i-1][1];           
            while(x < a[j][0]){  //查找在有序表的插入位置  
                a[j+1][0] = a[j][0];  
                j--;         //元素后移  
            }  
            a[j+1][0] = x;      //插入到正确位置  
       }  
    }  
    }
    void calculate(arr[n][2],ar[s][s]){
        int a;
        int s = 0;
        a = ar[0][0];
        for(int i = 1; i < s;i++){
            if(a == arr[i][0]){
                ar[s][1]+=1;
                ar[s][d]=arr[i][1];
            }
            else{
                s+=1;
                ar[s][0]=arr[i][0];
                ar[s][1]+=1;
                ar[s][d]=arr[i][1];
            }
        }
    }
    void InsertSort(int a[s][2]);
    private:
        int b = 2;
};
int main()
{
    int n =3;
    int arr[n][2];
    for(int i = 0; i < n ; i++ ){
        arr[i][0] = i;
        arr[i][1] = i;

    }
    Mode first;
    first.InsertSort(arr[n][2], 3);
    first.calculate(arr[n][2],ar[s][s]);
    first.InsertSort(ar[s][2]);
}
