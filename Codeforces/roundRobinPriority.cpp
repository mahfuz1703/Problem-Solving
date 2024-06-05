#include<bits/stdc++.h>
using namespace std;

int main(){
    int process; cin>>process;

    vector<int> time(process), priority(process);

    for(int i = 0; i < process; i++){
        cin >> time[i];
    }
    for(int i = 0; i < process; i++){
        cin >> priority[i];
    }

    vector<pair<int,int>> cpuTime;
    for(int i=0; i<process; i++){
        cpuTime.push_back({priority[i],time[i]});
    }
    sort(cpuTime.begin(),cpuTime.end());
    int totalCpuTime = 0;
    
    vector<int> tt,b;
    for(auto u:cpuTime){
        totalCpuTime +=u.second;
        tt.push_back(totalCpuTime);
    }
    double tt_time = 0;
    for(auto u:tt){
        tt_time +=u;
    }
    
    for(auto u:cpuTime){
        int rr = u.second;
        b.push_back(rr);
    }
    double wt_time = 0;
    for(int i=0; i<process; i++){
        wt_time += tt[i]-b[i];
    }
    
    double Waiting = 0;
    for(int i=0; i<process; i++){
         Waiting = tt[i]-b[i];
        cout<<"Process "<<i+1<<" Waitting Time: "<<Waiting <<" Turnaround Time: "<<tt[i]<<endl;
    }
    
    cout<<"Average Waiting time : "<<wt_time/process<<endl;
    cout<<"Average Turnaround time : "<<tt_time/process<<endl;
    return 0;
}