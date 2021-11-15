// CPP program to illustrate
// working of erase() function
#include<bits/stdc++.h>
using namespace std;


int maxOfAllMin(int numComputer, vector<int> hardDiskSpace,int segmentLength)
{
    int n = hardDiskSpace.size();
    int min=-1,k=0;
    vector<int> res;
for(int i=0;i<=n-segmentLength;i++){
    cout<<hardDiskSpace[i];
        min = hardDiskSpace[i];
        for(int j=1;j<segmentLength;j++){
            cout<<min<<">"<<hardDiskSpace[i+j]<<endl;
            if(min>hardDiskSpace[i+j]){
                min = hardDiskSpace[i+j];
            }
        }
        res[k++] = min;
    }
    return k+1;
}
int main()
{
	vector<int> a{1,2,3,1,2};
    int m = 5;
    int s = 1;
	cout<<maxOfAllMin(m,a,s);
	return 0;
}
