#include<iostream>
using namespace std;

int main(){
    float firstInSem, secondInSem, finalSem, assignment, attendance;
    float total;

    cout<<"Enter your 1st or 3rd In-Sem Marks:-\n"<<endl;
    cin>>firstInSem;
    cout<<"Enter your 2nd or 3rd In-Sem Marks:-\n"<<endl;
    cin>>secondInSem;
    cout<<"Enter your Final Sem Marks:-\n"<<endl;
    cin>>finalSem;
    cout<<"Enter your Assignment Marks:-\n"<<endl;
    cin>>assignment;
    cout<<"Enter your Attendance Marks:-\n"<<endl;
    cin>>attendance;
    total = (firstInSem*30)/100 + (secondInSem*30)/100 + (finalSem*50)/100 + (assignment) + (attendance);
    cout<<"Your Total Marks :- "<< total << endl;
    if (total >= 35 )
    {   if (finalSem >= 35)
    {
        cout<<"You are Safe and you crossed Danger Zone, Your extra marks is " << total - 35 << endl;
    }else
    {
        cout<<"You are UnSafe and you have to gain " << (35 - finalSem) << " more marks.\nMeans Next time in Final Back Paper you have to score Only 35 Marks" << endl;
    }
    
    } else
        cout<<"You are UnSafe and you have to gain " << (35 - total)*2 << " more marks.\n Means Next time in Final Back Paper you have to score " << (finalSem + (35 - total)*2) <<endl;
    {
        
    }
    return 0;
}
