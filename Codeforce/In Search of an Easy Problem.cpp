#include  <iostream>
using namespace std;
 
int main(){
 int x;
 cin>>x;
 int arr[x];
 int count=0;
 
 
 for(int i=0;i<x;i++){
   cin>>arr[i];
 } 
 
 for(int j;j<x;j++){
   if (arr[j]==1){
     count++;}
 }
 
if(count>=1){
  cout<<"HARD";}
 else{
   cout<<"EASY";}
 
}
