#include <bits/stdc++.h>
using namespace std;

int main(){
    int q = 3;
    int process; cin >> process;
    vector <int> cpuTime(process);
    vector <int> tmp(process);
    int totalCPU = 0;
    for(int i = 0; i < process; i++){
        cin >> cpuTime[i];
        tmp[i] = cpuTime[i];
        totalCPU += cpuTime[i];
    }
    vector <int> turnaroundTime(process);
    int tt = 0;
    int p = 0;
    while(tt <= totalCPU){
        for(int j = p; j < process; j++){
            if(cpuTime[j] > q){
                cpuTime[j] -= q;
                tt += q;
            }
            else if(cpuTime[j] == q){
                cpuTime[j] -= q;
                tt += q;
                turnaroundTime[j] = tt + 1;
                p++;
            }
            else{
                cpuTime[j] = 0;
                tt += cpuTime[j];
                turnaroundTime[j] = tt + 1;
                p++;
            }
        }
        tt++;
    }
    int totalWT = 0;
    int totalTT = 0;
    for(int i = 0; i < process; i++){
        int wt = turnaroundTime[i] - tmp[i];
        totalWT += wt;
        int tt = turnaroundTime[i];
        totalTT += tt;

        cout << "Process " << i+1 << " : Waiting Time : " << wt << " Turnaround Time : " << tt << "\n"; 
    }
    double awt = (double) totalWT / process;
    double att = (double) totalTT / process;
    cout << "Average Waiting time : " << awt << "\n";
    cout << "Average Turnaround time : " << att << "\n";

    return 0;   
}