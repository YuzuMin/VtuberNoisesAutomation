// VtuberNoisesAutomation.cpp 
// This C++ program is used to help generate code for VtuberNoises Projects
#include "VtuberNoises.h"

int main()
{
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Vtuber Noises C++ Automation Program" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "By: YuzuMin" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl;

    Main_ExeCode = 0; //To ensure Main_Execode does not hold garbage data

    while (Main_ExeCode != 177013) {
        
        switch (Main_ExeCode) {
        case 1:
            MainActivity_SubMenu();
            break;
        case 2:
            Sub_Menu2();
            break;
        case 3:
            Sub_Menu3();
            break;
        case 4:
            Sub_Menu4();
            break;
        case 5:
            Sub_Menu5();
            break;
        case 98:
            About_Program();
            break;
        case 99:
            exit_to_desktop();
            break;
        case 85130:

            break;
        default:
            cout << "Select an option from menu :" << endl;
            cout << "~~~~~~~~~" << endl;
            cout << "1.  Generate code for MainActivity.Java" << endl;
            cout << "2.  Generate code for ClickerSettings.Java" << endl;
            cout << "3.  Generate code for clicker_settings.xml" << endl;
            cout << "4.  Generate text for strings.xml" << endl;
            cout << "~~~~~~~~~~~~ (For Documentation) ~~~~~~~~~~~~" << endl;
            cout << "5.  Generate Release Documents" << endl;
            cout << "~~~~~~~~~" << endl;
            cout << "98. About Program" << endl;
            cout << "99. Exit to Desktop" << endl;

            cin >> Main_ExeCode;
            break;
        }
    }
}


