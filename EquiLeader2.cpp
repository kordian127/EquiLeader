#include <iostream>
#include <map>


using namespace std;

int main(){
    int a[]={1,-3,1,1,1,2};
    int sizeA=sizeof(a)/4;
    map<int,int> m1,m2;
    int maxVal1=0, maxVal2=0;
    int numb1, numb2, size1=0, size2=0;

    for(int i=1; i<sizeA;i++)
    {
        for(int j=i;j<sizeA;j++)
        {
            if(m1.find(a[j])==m1.end())
                m1[a[j]]=1;
            else
                m1[a[j]]++;

            if(m1[a[j]]>maxVal1){
                maxVal1=m1[a[j]];
                numb1=a[j];
            }

            size1++;

        }
        for(int k=0;k<i;k++)
        {
            if(m2.find(a[k])==m2.end())
                m2[a[k]]=1;
            else
                m2[a[k]]++;

            if(m2[a[k]]>maxVal2){
                maxVal2=m2[a[k]];
                numb2=a[k];
            }

            size2++;
        }

        if(numb1==numb2 && maxVal1>size1/2 && maxVal2>size2/2)
        {
            cout<<numb1<<"="<<numb2<<"dla "<<i-1<<endl;
        }

        size1=0;
        size2=0;
        m1.clear();
        m2.clear();
        maxVal1=0;
        maxVal2=0;
    }

    return 0;
}
