#include <iostream>
using namespace std;
#include <vector>
#include <queue>

class sliding
{
public:
 queue<int> q;
 vector<int>ans;
 
   void windows(vector<int> &arr, int k)
   {
      int index = 0;
      int size = arr.size();
      while(index!=size){

      if (q.empty())
      {
         for (int i = 0; i < k; i++)
         {
            q.push(arr[index]);
            index++;
         }
         ans.push_back(display(q));
      }
      else
      {
            q.pop();
            q.push(arr[index]);
            index++;
           ans.push_back(display(q));
         }
      
      }
   }
   
   int display(queue<int>q){
       while (!q.empty()){
           if(q.front()<0){
               return q.front();
           }
           q.pop();
       }
       return 0;
   }
   
   
};

int main()
{
   vector<int> arr = {3, -6, 2, -7, -8, 11};
   sliding a;
   int k = 2;  
   a.windows(arr, k);
   return 0;
}
