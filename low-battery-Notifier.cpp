/* Description : A simple C++ tool/script, that will notify you when your laptop battery is low, this tool is currently working for windows only.This tool is one of my starter projects.

   Author : KALI : THE HACKER ™ (Lucky verma)
   Date : This Project is started and completed on - August 02, 2021.
   
   Note : You are allowed to use your skills to make this tool even more better.
   
  */

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
