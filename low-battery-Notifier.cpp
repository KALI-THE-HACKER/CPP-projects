#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char *argv[]) {
    int percent;
    while(true){

        SYSTEM_POWER_STATUS spsPwr;
        if( GetSystemPowerStatus(&spsPwr) ) {

            percent = static_cast<double>(spsPwr.BatteryLifePercent);
            // cout<<"Percent : "<<percent<<endl;
            // cout<<typeid(percent).name()<<endl<<endl;
            if (percent<=14)
            {
                cout<<"Battery Low\n";
                system("msg * Hey KALI, your laptop's battery is low, plug it into power!");
                break;
            }
                
        }
        else return 1;
    } 
}