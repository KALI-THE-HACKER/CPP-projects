/*
main.cpp - Low Battery Notifier

A simple C++ tool/script, that will notify you when your laptop battery is low, this tool is currently working for windows only.This tool is one of my starter projects.

Author : Lucky verma (https://github.com/luckyverma-sudo/)
Created on : August 2, 2021

Last modified by : Rishav Das (https://github.com/rdofficial/)
Last modified on : October 6, 2021

Changed made in the last modification :
1. Updated the code structure and the document structure in order to make it more beautiful. Added more comments, as well as commented docs.

Authors contributed to this script (Add your name below if you have contributed) :
1. Lucky Verma (github:https://github.com/luckyverma-sudo/, email:luckyv0545746@gmail.com)
2. Rishav Das (github:https://github.com/rdofficial/, email:rdofficial192@gmail.com)
*/

#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char *argv[]){
	int percent;
	cout << "\tBattery-Low Notifier Started...\n\n\tPlease Do not close this window!\n\n\tAUTHOR : KALI - THE HACKER (Luckyverma-sudo)" << endl;

	while (true){
        	SYSTEM_POWER_STATUS spsPwr;
		if (GetSystemPowerStatus(&spsPwr)){
			// If we retrieve the battery information successfully, then we continue

			percent = static_cast<double>(spsPwr.BatteryLifePercent);
			if (percent <= 13) {
				cout << "\n\n\t!!Battery Low.....Battery Low.....Battery Low!!" << endl;
				system("msg * Hey KALI, your laptop's battery is low, plug it into power!");

				int j = 0;
				while (j != 7){
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
		} else {
			return 1;
		}
	}
}
