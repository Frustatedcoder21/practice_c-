
//selection sort hai mama;
#include <bits/stdc++.h>

using namespace std;

int main()
{ int arr[5]={2,1,4,3,5}, small=INT_MAX;
 for(int i=0;i<4;i++)
 {   int min_index=i; // yaha pe subarray ke first element ko smallest element index le rhe
     for(int j=i+1;j<5;j++)// first element ko chodke loop chalega bro
     { 
     if(arr[j]<arr[min_index])
      min_index=j; } // agar first element ko chodke agar chota element  milega toh usko store krte jaenge
      swap(arr[min_index],arr[i]); // phir yaha pe swap hoga
 }
 /* 
 printing 
 ka khela h jaenge*/
 
 for(int j=0;j<5;j++)
 { cout <<arr[j];}        
    
    

    return 0;
}