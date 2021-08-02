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
    cout<<"     Battery-Low Notifier Started...\n \n     Please Do not close this window!\n\n     AUTHOR : KALI : THE HACKER (Luckyverma-sudo)"<<endl;
    
    while(true){

        SYSTEM_POWER_STATUS spsPwr;
        if( GetSystemPowerStatus(&spsPwr) ) {

            percent = static_cast<double>(spsPwr.BatteryLifePercent);
            if (percent<=13)
            {
                cout<<"\n\n       !!Battery Low.....Battery Low.....Battery Low!!\n";
                system("msg * Hey KALI, your laptop's battery is low, plug it into power!");

                int j = 0;
                while(j!=7){
                    j++;
                    for (int i = 0; i < 2; i++){
                        Beep(2000, 180);
                    }
                    for (int i = 0; i < 2; i++){
                        Beep(400, 380);
                    }
                }
                break;
            }
                
        }
        else return 1;
    } 
}
