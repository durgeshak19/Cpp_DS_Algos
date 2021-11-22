#include<bits/stdc++.h>
using namespace std;
// question : Given an array of jobs where every job has a deadline and associated profit if the job is finished before the deadline.
// It is also given that every job takes a single unit of time, so the minimum possible deadline for any job is 1.
// How to maximize total profit if only one job can be scheduled at a time.

// sort by finishing time and select next activity when whose start time >= current end time 

struct Job{
    public:
    char id;
    int deadline;
    int profit;
};

bool comparison(Job a ,Job b){

    return (a.profit > b.profit);
}

void printJobScheduling(vector<Job> &arr ){
    sort(arr.begin(),arr.end(),comparison);

    int n = arr.size();

    vector<int> res(n);
    vector<bool> slot(n,false) ;

    for(int i=0;i<n;i++){

        for(int j=min(n,arr[i].deadline)-1;j>=0;j--){

            if(slot[j] == false){
                res[j] = i;
                slot[j] = true;
                break;    
            }
        }
    }
    for (int i=0; i<n; i++)
       if (slot[i])
         cout << arr[res[i]].id << " ";


}

int main(){

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

#endif

    vector<Job> arr ={ {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27},
                   {'d', 1, 25}, {'e', 3, 15}};

    printJobScheduling(arr);

}