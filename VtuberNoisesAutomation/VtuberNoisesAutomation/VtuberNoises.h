
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;

//Program Details
string DevName = "YuzuMin";
string VersionName = "2021.3 REV-1";
unsigned int VersionCode = 1;

//Program Execution (WARNING : DO NOT REMOVE OR MODIFY)
unsigned int execution_code = 0;
unsigned int Main_ExeCode = 0;   //Main Execution Code
unsigned int Sub_ExeCode = 0;    //Sub  Execution Code
unsigned char Main_ExeChar;      //Main Execution Character

//VTUBER DATA
string VtuberFN;
string VtuberLN;
unsigned int AudioStart;
unsigned int AudioEnd;
unsigned int ImageStart;
unsigned int ImageEnd;






int start_num;          //The 1st number of the (vtuber)noises mp3 file
int end_num;            //The last number of the (vtuber)noises mp3 file
int temp_num;
string vtuber;          //For Vtuber Name (vtuber)noises

//IMPORTANT FUNCTIONS (WARNING : DO NOT REMOVE OR MODIFY)
void ClearConsole() {
    system("cls");
}
void return_to_menu() {
    //Set answer to n to ensure the while loop isn't skipped
    Main_ExeChar = 'n';

    while (Main_ExeChar != 'y') {
        switch (Main_ExeChar) {
        case 'Y':
            Main_ExeChar = 'y';
            break;  //Exit to Sub Menu
        case 'y':
            break;  //Exit to Sub Menu
        default:
            cout << "\nReturn to menu? (Y/n)" << endl;
            cin >> Main_ExeChar;
        }
    }

    Sub_ExeCode = 0;
}
void return_to_main() {
    //Set answer to n to ensure the while loop isn't skipped
    Main_ExeChar = 'x';

    while (Main_ExeChar != 'O') {
        switch (Main_ExeChar) {
        case 'Y':
            Main_ExeCode = 0;   //Set Main execution code to 0 to prevent loopback
            Sub_ExeCode = 177013;   //Set Sub execution code to 177013 to exit Sub Menu
            Main_ExeChar = 'O';
            break;  //Exit to Main Menu
        case 'y':
            Main_ExeCode = 0;   //Set Main execution code to 0 to prevent loopback
            Sub_ExeCode = 177013;   //Set Sub execution code to 177013 to exit Sub Menu
            Main_ExeChar = 'O';
            break;  //Exit to Main Menu
        case 'N':
            Main_ExeCode = 0;   //Set Main execution code to 0 to prevent loopback
            Sub_ExeCode = 0;   //Set Sub execution code to 0 to prevent loopback
            Main_ExeChar = 'O';
            break;  //Exit to Main Menu
        case 'n':
            Main_ExeCode = 0;   //Set Main execution code to 0 to prevent loopback
            Sub_ExeCode = 0;   //Set Sub execution code to 0 to prevent loopback
            Main_ExeChar = 'O';
            break;  //Exit to Main Menu
        default:
            cout << "\nReturn to Main Menu? (Y/n)" << endl;
            cin >> Main_ExeChar;
        }
    }
    ClearConsole();
}
void exit_to_desktop() {
    //Set answer to n to ensure the while loop isn't skipped
    Main_ExeChar = 'x';

    while (Main_ExeChar != 'O') {
        switch (Main_ExeChar) {
        case 'Y':
            Main_ExeCode = 177013;   //Set Main execution code to 0 to prevent loopback
            Sub_ExeCode = 177013;   //Set Sub execution code to 99 to exit Sub Menu
            Main_ExeChar = 'O';
            break;  //Exit to Desktop
        case 'y':
            Main_ExeCode = 177013;   //Set Main execution code to 0 to prevent loopback
            Sub_ExeCode = 177013;   //Set Sub execution code to 99 to exit Sub Menu
            Main_ExeChar = 'O';
            break;  //Exit to Desktop
        case 'N':
            Main_ExeCode = 0;   //Set Main execution code to 0 to prevent loopback
            Sub_ExeCode = 0;   //Set Sub execution code to 0 to prevent loopback
            Main_ExeChar = 'O';
            break;  //Exit to Main Menu
        case 'n':
            Main_ExeCode = 0;   //Set Main execution code to 0 to prevent loopback
            Sub_ExeCode = 0;   //Set Sub execution code to 0 to prevent loopback
            Main_ExeChar = 'O';
            break;  //Exit to Main Menu
        default:
            cout << "\nExit to Desktop? (Y/n)" << endl;
            cin >> Main_ExeChar;
        }
    }
    ClearConsole();
}

//MISC FUNCTIONS
void About_Program() {

    ClearConsole();
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Vtuber Noises C++ Automation Program" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "By: YuzuMin" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl;
    cout << "Release Type : Rolling Release" << endl;
    cout << "Release Type : Beta Debug" << endl;
    cout << "Version Code : 2021-0225" << endl;
    cout << "Version Name : Beta Beaver" << endl;

    Main_ExeCode = 0;

    return_to_menu();
    ClearConsole();
}
void Program_Splash() {
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Vtuber Noises C++ Automation Program" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "By: " << DevName << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl;
}

//VTUBER DATA HANDLER FUNCTIONS
//VtuberNoises SET Functions
void SET_vtuberFN() {        //SET Vtuber's First Name
    cout << "Enter Vtuber First Name (Amelia): ";
    cin >> VtuberFN;
}
void SET_vtuberLN() {        //SET Vtuber's Last Name
    cout << "Enter Vtuber Last Name (Watson): ";
    cin >> VtuberLN;
}
void SET_audioStart() {      //SET MP3 file Starting Number
    string EnteredValue;
    cout << "Enter .mp3 file START Number (1): ";
    cin >> EnteredValue;
    AudioStart = stoi(EnteredValue);
}
void SET_audioEnd() {        //SET MP3 file Ending Number
    string EnteredValue;
    cout << "Enter .mp3 file END Number (50): ";
    cin >> EnteredValue;
    AudioEnd = stoi(EnteredValue);
}
void SET_imageStart() {      //SET Image file Starting Number
    string EnteredValue;
    cout << "Enter Image file START Number (1): ";
    cin >> EnteredValue;
    ImageStart = stoi(EnteredValue);
}
void SET_imageEnd() {        //SET Image file Ending Number
    string EnteredValue;
    cout << "Enter Image file END Number (6): ";
    cin >> EnteredValue;
    ImageEnd = stoi(EnteredValue);
}
//VtuberNoises GET Functions
string GET_vtuberFN() {      //GET Vtuber's First Name
    if (VtuberFN == "") {
        SET_vtuberFN();
    }
    return VtuberFN;
}
string GET_vtuberFN_LC() {   //GET Vtuber's First Name Lowercase
    if (VtuberFN == "") {
        SET_vtuberFN();
    }
    string data = VtuberFN;
    // convert string to back to lower case
    for_each(data.begin(), data.end(), [](char& c) {
        c = ::tolower(c);
        });
    return data;
}
string GET_vtuberLN() {      //GET Vtuber's Last Name
    if (VtuberLN == "") {
        SET_vtuberLN();
    }
    return VtuberLN;
}
int GET_audioStart() {         //GET MP3 file Starting Number
    if (AudioStart == NULL) {
        SET_audioStart();
    }
    return AudioStart;
}
int GET_audioEnd() {         //GET MP3 file Ending Number
    if (AudioEnd == NULL) {
        SET_audioEnd();
    }
    return AudioEnd;
}
int GET_imageStart() {       //GET Image file Starting Number
    if (ImageStart == NULL) {
        SET_imageStart();
    }
    return ImageStart;
}
int GET_imageEnd() {         //GET Image file Ending Number
    if (ImageEnd == NULL) {
        SET_imageEnd();
    }
    return ImageEnd;
}



//ClickerSettings.Java FUNCTIONS
void ClickerSettings_1() {
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << "To declare Switch variable in ClickerSettings.Java \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << endl;

    unsigned int AudioSTART;
    unsigned int AudioEND;
    unsigned int AudioTEMP = 0;
    unsigned char exe_char = 'x';

    while (exe_char != 'O') {
        switch (exe_char)
        {
        case 'y':
            exe_char = 'Y';
            break;
        case 'Y':
            SET_audioStart();
            SET_audioEnd();
            exe_char = 'x';
            break;
        case 'N':
            exe_char = 'n';
            break;
        case 'n':
            exe_char = 'O';
            break;
        default:
            //Prompt user for the starting and ending number of the noises
            ClearConsole();
            AudioSTART = GET_audioStart();
            AudioEND = GET_audioEnd();
            ClearConsole();
            cout << "MP3 Starting Number: " << AudioSTART << endl;
            cout << "MP3 Ending Number: " << AudioEND << endl;
            cout << "Would you like to change these values? (Y/n)";
            cin >> exe_char;
            ClearConsole();
            break;
        }
    }
    ClearConsole();


    //Declare variable for ClickerSettings.Java
    for (AudioTEMP = AudioSTART; AudioTEMP <= AudioEND; AudioTEMP++) {
        cout << "Switch switch" << AudioTEMP + 2 << ";" << endl;
    }

    return_to_menu();

}
void ClickerSettings_2() {
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << "To declare RadioButton and TableRow variable in ClickerSettings.Java \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << endl;

    unsigned int ImageSTART;
    unsigned int ImageEND;
    unsigned int ImageTEMP;
    string vtuberFN;
    unsigned char exe_char = 'x';

    while (exe_char != 'O') {
        switch (exe_char)
        {
        case 'y':
            exe_char = 'Y';
            break;
        case 'Y':
            SET_imageStart();
            SET_imageEnd();
            SET_vtuberFN();
            exe_char = 'x';
            break;
        case 'N':
            exe_char = 'n';
            break;
        case 'n':
            exe_char = 'O';
            break;
        default:
            //Prompt user for the starting and ending number of the noises
            ClearConsole();
            ImageSTART = GET_imageStart();
            ImageEND = GET_imageEnd();
            vtuberFN = GET_vtuberFN();
            ClearConsole();
            cout << "Image Starting Number: " << ImageSTART << endl;
            cout << "Image Ending Number: " << ImageEND << endl;
            cout << "Vtuber First Name: " << vtuberFN << endl;
            cout << "Would you like to change these values? (Y/n)";
            cin >> exe_char;
            ClearConsole();
            break;
        }
    }
    ClearConsole();

    for (ImageTEMP = ImageSTART; ImageTEMP <= ImageEND; ImageTEMP++) {

        cout << "TableRow ";
        cout << vtuberFN << "IMG" << ImageTEMP << "Row;" << endl;

    }

    for (ImageTEMP = ImageSTART; ImageTEMP <= ImageEND; ImageTEMP++) {

        cout << "RadioButton ";
        cout << vtuberFN << "IMG" << ImageTEMP << ";" << endl;

    }


    return_to_menu();
}
void ClickerSettings_3() {
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << "To setup Switches in ClickerSettings.Java \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << endl;

    unsigned int AudioSTART;
    unsigned int AudioEND;
    unsigned int AudioTEMP = 0;
    unsigned char exe_char = 'x';

    while (exe_char != 'O') {
        switch (exe_char)
        {
        case 'y':
            exe_char = 'Y';
            break;
        case 'Y':
            SET_audioStart();
            SET_audioEnd();
            exe_char = 'x';
            break;
        case 'N':
            exe_char = 'n';
            break;
        case 'n':
            exe_char = 'O';
            break;
        default:
            //Prompt user for the starting and ending number of the noises
            ClearConsole();
            AudioSTART = GET_audioStart();
            AudioEND = GET_audioEnd();
            ClearConsole();
            cout << "MP3 Starting Number: " << AudioSTART << endl;
            cout << "MP3 Ending Number: " << AudioEND << endl;
            cout << "Would you like to change these values? (Y/n)";
            cin >> exe_char;
            ClearConsole();
            break;
        }
    }
    ClearConsole();


    //For protected void onCreate(Bundle savedInstanceState)
    for (AudioTEMP = AudioSTART; AudioTEMP <= AudioEND; AudioTEMP++) {

        cout << "// for switch " << AudioTEMP + 2 << " to activate" << endl;
        cout << "switch" << AudioTEMP + 2 << "=findViewById(R.id.switch" << AudioTEMP + 2 << ");" << endl;
        cout << "SoundSettings =getSharedPreferences(\"save" << AudioTEMP + 2 << "\",MODE_PRIVATE);" << endl;
        cout << "switch" << AudioTEMP + 2 << ".setChecked(SoundSettings.getBoolean(\"value" << AudioTEMP + 2 << "\",true));" << endl;
        cout << "switch" << AudioTEMP + 2 << ".setOnClickListener(new View.OnClickListener() {" << endl;
        cout << "@Override" << endl;
        cout << "public void onClick(View v) {" << endl;
        cout << "if(switch" << AudioTEMP + 2 << ".isChecked()){" << endl;
        cout << "SoundSettingsEditor =getSharedPreferences(\"save" << AudioTEMP + 2 << "\",MODE_PRIVATE).edit();" << endl;
        cout << "SoundSettingsEditor.putBoolean(\"value" << AudioTEMP + 2 << "\",true);" << endl;
        cout << "SoundSettingsEditor.apply();" << endl;
        cout << "switch" << AudioTEMP + 2 << ".setChecked(true);" << endl;
        cout << "}else{" << endl;
        cout << "SoundSettingsEditor =getSharedPreferences(\"save" << AudioTEMP + 2 << "\",MODE_PRIVATE).edit();" << endl;
        cout << "SoundSettingsEditor.putBoolean(\"value" << AudioTEMP + 2 << "\",false);" << endl;
        cout << "SoundSettingsEditor.apply();" << endl;
        cout << "switch" << AudioTEMP + 2 << ".setChecked(false);" << endl;
        cout << "}" << endl;
        cout << "}" << endl;
        cout << "});" << endl;
        cout << endl;

    }


    return_to_menu();

}
void submenu2_4() {
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << "To setup Toggle Button in ClickerSettings.Java \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << endl;

    //Prompt user for the starting and ending number of the noises
    cout << "Enter the starting number for the noises : ";
    cin >> start_num;
    cout << "Enter the ending number for the noises : ";
    cin >> end_num;

    cout << "\n\n\n";


    cout << "toggle_btn=findViewById(R.id.toggle_btn);" << endl;
    cout << "toggle_btn.setOnClickListener(new View.OnClickListener() {" << endl;
    cout << "@Override" << endl;
    cout << "public void onClick(View v) {" << endl;
    cout << "if(switch3.isChecked()&&switch4.isChecked()){" << endl;
    cout << endl;
    for (temp_num = start_num; temp_num <= end_num; temp_num++) {

        cout << "SoundSettingsEditor =getSharedPreferences(\"save" << temp_num + 2 << "\",MODE_PRIVATE).edit();" << endl;
        cout << "SoundSettingsEditor.putBoolean(\"value" << temp_num + 2 << "\",false);" << endl;
        cout << "SoundSettingsEditor.apply();" << endl;
        cout << "switch" << temp_num + 2 << ".setChecked(false);" << endl;
        cout << endl;
    }

    cout << "}else{" << endl;

    cout << endl;
    for (temp_num = start_num; temp_num <= end_num; temp_num++) {

        cout << "SoundSettingsEditor =getSharedPreferences(\"save" << temp_num + 2 << "\",MODE_PRIVATE).edit();" << endl;
        cout << "SoundSettingsEditor.putBoolean(\"value" << temp_num + 2 << "\",true);" << endl;
        cout << "SoundSettingsEditor.apply();" << endl;
        cout << "switch" << temp_num + 2 << ".setChecked(true);" << endl;
        cout << endl;

    }


    cout << "}" << endl;
    cout << "}" << endl;
    cout << "});" << endl;



    return_to_menu();
}
void submenu2_5() {
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << "To setup RadioButton and TableRow in ClickerSettings.Java \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << endl;

    int startIMG_num;
    int endIMG_num;
    int tempIMG_num;
    int tempIMG_num2;
    string Vtuber;

    cout << "Enter starting number for IMG :";
    cin >> startIMG_num;
    cout << "Enter ending number for IMG :";
    cin >> endIMG_num;
    //Prompt user for Vtuber name
    cout << "Enter the Vtuber's name (no caps) : ";
    cin >> vtuber;
    cout << "Enter Vtuber name (1st letter caps) :";
    cin >> Vtuber;

    cout << endl;

    for (tempIMG_num = startIMG_num; tempIMG_num <= endIMG_num; tempIMG_num++) {

        cout << Vtuber << "IMG" << tempIMG_num << "=findViewById(R.id." << vtuber << tempIMG_num << "_img);" << endl;
        cout << Vtuber << "IMG" << tempIMG_num << "Row=findViewById(R.id." << vtuber << tempIMG_num << "_img_row);" << endl;

    }
    cout << endl;
    cout << endl;
    for (tempIMG_num = startIMG_num; tempIMG_num <= endIMG_num; tempIMG_num++) {

        cout << Vtuber << "IMG" << tempIMG_num << ".setOnClickListener(new View.OnClickListener() {" << endl;
        cout << "@Override" << endl;
        cout << "public void onClick(View v) {" << endl;
        cout << "charavalue=" << tempIMG_num << ";" << endl;
        cout << "SoundSettingsEditor =getSharedPreferences(\"Chara\",MODE_PRIVATE).edit();" << endl;
        cout << "SoundSettingsEditor.putInt(\"CharaValue\",charavalue);" << endl;
        cout << "SoundSettingsEditor.apply();" << endl;


        for (tempIMG_num2 = startIMG_num; tempIMG_num2 <= endIMG_num; tempIMG_num2++) {

            if (tempIMG_num2 == tempIMG_num) {
                cout << Vtuber << "IMG" << tempIMG_num2 << ".setChecked(true);" << endl;
            }
            else {
                cout << Vtuber << "IMG" << tempIMG_num2 << ".setChecked(false);" << endl;
            }
        }

        cout << "}" << endl;
        cout << "});" << endl;

        cout << Vtuber << "IMG" << tempIMG_num << "Row.setOnClickListener(new View.OnClickListener() {" << endl;
        cout << "@Override" << endl;
        cout << "public void onClick(View v) {" << endl;
        cout << "charavalue=" << tempIMG_num << ";" << endl;
        cout << "SoundSettingsEditor =getSharedPreferences(\"Chara\",MODE_PRIVATE).edit();" << endl;
        cout << "SoundSettingsEditor.putInt(\"CharaValue\",charavalue);" << endl;
        cout << "SoundSettingsEditor.apply();" << endl;


        for (tempIMG_num2 = startIMG_num; tempIMG_num2 <= endIMG_num; tempIMG_num2++) {

            if (tempIMG_num2 == tempIMG_num) {
                cout << Vtuber << "IMG" << tempIMG_num2 << ".setChecked(true);" << endl;
            }
            else {
                cout << Vtuber << "IMG" << tempIMG_num2 << ".setChecked(false);" << endl;
            }
        }

        cout << "}" << endl;
        cout << "});" << endl;
    }



    return_to_menu();
}
void submenu2_6() {
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << "To add if statements in private void retrievedata() \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << endl;

    int startIMG_num;
    int endIMG_num;
    int tempIMG_num;
    string Vtuber;

    cout << "Enter starting number for IMG :";
    cin >> startIMG_num;
    cout << "Enter ending number for IMG :";
    cin >> endIMG_num;
    cout << "Enter Vtuber name (1st letter caps) :";
    cin >> Vtuber;
    cout << endl;

    cout << "switch (charavalue) {" << endl;

    for (tempIMG_num = startIMG_num; tempIMG_num <= endIMG_num; tempIMG_num++) {

        if (tempIMG_num == endIMG_num) {
            cout << "default:" << endl;
        }
        else {
            cout << "case " << tempIMG_num << ":" << endl;
        }
        cout << Vtuber << "IMG" << tempIMG_num << ".setChecked(true);" << endl;
        cout << "break;" << endl;
    }

    cout << "}" << endl;

    return_to_menu();


}
void ClickerSettings_SubMenu() {

    Sub_ExeCode = 0;    // To ensure Sub_ExeCode does not hold garbage data
    while (Sub_ExeCode != 177013) {

        switch (Sub_ExeCode) {
        case 1:
            ClickerSettings_1();
            break;
        case 2:
            ClickerSettings_2();
            break;
        case 3:
            ClickerSettings_3();
            break;
        case 4:
            submenu2_4();
            break;
        case 5:
            submenu2_5();
            break;
        case 6:
            submenu2_6();
            break;
        case 98:
            return_to_main();
            break;
        case 99:
            exit_to_desktop();
            break;
        default:
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout << "Select an option from menu :" << endl;
            cout << "~~~~~~~~~" << endl;
            cout << "1.  Generate Switch variables (Switch switch)" << endl;
            cout << "2.  Generate RadioButton and TableRow variables" << endl;
            cout << "~~~~~~~~~~~~ (For OnCreate()) ~~~~~~~~~~~~" << endl;
            cout << "3.  Generate setup code for Switch variables" << endl;
            cout << "4.  Generate setup code for Toggle Button" << endl;
            cout << "5.  Generate setup code for RadioButton and TableRow" << endl;
            cout << "~~~~~~~~~~~~ (For retrievedata()) ~~~~~~~~~~~~" << endl;
            cout << "6.  Generate Image switch statement" << endl;
            cout << "~~~~~~~~~" << endl;
            cout << "98.  Exit to Main Menu" << endl;
            cout << "99.  Exit to Desktop" << endl;

            cin >> Sub_ExeCode;
            break;
        }
    }

}

//clicker_settings.xml FUNCTIONS
void submenu3_1() {
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "For Audio Switches in clicker_settings.xml \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << endl;

    //Prompt user for the starting and ending number of the noises
    cout << "Enter the starting number for the noises : ";
    cin >> start_num;
    cout << "Enter the ending number for the noises : ";
    cin >> end_num;

    cout << "\n\n\n";


    for (temp_num = start_num; temp_num <= end_num; temp_num++) {

        cout << "<TableRow" << endl;
        cout << "android:layout_marginBottom=\"5dp\"" << endl;
        cout << "android:paddingLeft=\"10dp\"" << endl;
        cout << "android:layout_width=\"match_parent\"" << endl;
        cout << "android:layout_height=\"match_parent\">" << endl;
        cout << "" << endl;
        cout << "<TextView" << endl;
        cout << "android:layout_weight=\"1\"" << endl;
        cout << "android:layout_width=\"wrap_content\"" << endl;
        cout << "android:layout_height=\"wrap_content\"" << endl;
        cout << "android:text=\"@string/noise" << temp_num << "_text\"" << endl;
        cout << "android:textColor=\"#f1f1f1\"" << endl;
        cout << "android:textSize=\"17sp\" />" << endl;
        cout << "" << endl;
        cout << "<Switch" << endl;
        cout << "android:id=\"@+id/switch" << temp_num + 2 << "\"" << endl;
        cout << "android:layout_width=\"match_parent\"" << endl;
        cout << "android:layout_height=\"wrap_content\" />" << endl;
        cout << "" << endl;
        cout << "</TableRow>" << endl;
        cout << endl;

    }

    return_to_menu();
}
void submenu3_2() {
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "For Radio Buttons in clicker_settings.xml \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << endl;

    int startIMG_num;
    int endIMG_num;
    int tempIMG_num;
    int tempIMG_num2;
    string Vtuber;

    cout << "Enter starting number for IMG :";
    cin >> startIMG_num;
    cout << "Enter ending number for IMG :";
    cin >> endIMG_num;
    cout << "Enter Vtuber name (1st letter caps) :";
    cin >> Vtuber;
    cout << "Enter the Vtuber's name (no caps) : ";
    cin >> vtuber;


    cout << endl;
    cout << endl;
    for (tempIMG_num = startIMG_num; tempIMG_num <= endIMG_num; tempIMG_num++) {

        cout << "<TableRow" << endl;
        cout << "android:id=\"@+id/" << vtuber << tempIMG_num << "_img_row\">" << endl;
        cout << "<ImageView" << endl;
        cout << "android:padding=\"10dp\"" << endl;
        cout << "android:src=\"@drawable/" << vtuber << tempIMG_num << "\"" << endl;
        cout << "android:layout_width=\"100dp\"" << endl;
        cout << "android:layout_height=\"100dp\"/>" << endl;
        cout << "<RadioButton" << endl;
        cout << "android:id=\"@+id/" << vtuber << tempIMG_num << "_img\"" << endl;
        cout << "android:layout_gravity=\"center_vertical\"" << endl;
        cout << "android:textSize=\"17dp\"" << endl;
        cout << "android:buttonTint=\"@color/colorAccent\"" << endl;
        cout << "android:text=\"" << Vtuber << " " << tempIMG_num << "\"" << endl;
        cout << "android:textColor=\"@color/colorAccent\"" << endl;
        cout << "android:layout_width=\"match_parent\"" << endl;
        cout << "android:layout_height=\"wrap_content\"/>" << endl;
        cout << "</TableRow>" << endl;
        cout << endl;

    }

    return_to_menu();
}
void Sub_Menu3() {

    Sub_ExeCode = 0;    // To ensure Sub_ExeCode does not hold garbage data
    while (Sub_ExeCode != 177013) {

        switch (Sub_ExeCode) {
        case 1:
            submenu3_1();
            break;
        case 2:
            submenu3_2();
            break;
        case 98:
            return_to_main();
            break;
        case 99:
            exit_to_desktop();
            break;
        default:
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout << "Select an option from menu :" << endl;
            cout << "~~~~~~~~~" << endl;
            cout << "1.  Generate switches for xml file" << endl;
            cout << "2.  Generate radiobutton for xml file" << endl;
            cout << "~~~~~~~~~" << endl;
            cout << "98.  Exit to Main Menu" << endl;
            cout << "99.  Exit to Desktop" << endl;

            cin >> Sub_ExeCode;
            break;
        }
    }
}

//strings.xml FUNCTIONS
void submenu4_1() {
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    //For README file
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "To generate string res for strings.xml \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << endl;

    ifstream myFile("file.txt");
    string myText;

    //Prompt user for the starting and ending number of the noises
    cout << "Enter the starting number for the noises : ";
    cin >> start_num;
    cout << "Enter the ending number for the noises : ";
    cin >> end_num;

    cout << "\n\n\n";

    temp_num = start_num;

    while (getline(myFile, myText))
    {
        if (temp_num > end_num) {
            break;
        }
        else {
            cout << "<string name=\"noise" << temp_num << "_text\">" << myText << "</string>" << endl;
            temp_num++;
        }
    }

    myFile.close();
    return_to_menu();

}
void Sub_Menu4() {

    Sub_ExeCode = 0;    // To ensure Sub_ExeCode does not hold garbage data
    while (Sub_ExeCode != 177013) {

        switch (Sub_ExeCode) {
        case 1:
            submenu4_1();
            break;
        case 98:
            return_to_main();
            break;
        case 99:
            exit_to_desktop();
            break;
        default:
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout << "Select an option from menu :" << endl;
            cout << "~~~~~~~~~" << endl;
            cout << "1.  Generate string res for strings.xml" << endl;
            cout << "~~~~~~~~~" << endl;
            cout << "98.  Exit to Main Menu" << endl;
            cout << "99.  Exit to Desktop" << endl;

            cin >> Sub_ExeCode;
            break;
        }
    }
}

//Release Documents FUNCTIONS
void submenu5_1() {
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    //For README file
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "For Documentation in README \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << endl;



    string VtuberFirst;
    string VtuberLast;


    cout << "Enter Vtuber First name (eg. Tokino) :";
    cin >> VtuberFirst;
    cout << "Enter Vtuber Last name (eg. Sora) :";
    cin >> VtuberLast;
    cout << "Enter the Vtuber's name (no caps) : ";
    cin >> vtuber;
    //Prompt user for the starting and ending number of the noises
    cout << "Enter the starting number for the noises : ";
    cin >> start_num;
    cout << "Enter the ending number for the noises : ";
    cin >> end_num;

    cout << "\n\n\n";

    cout << endl;
    cout << endl;


    cout << "# " << VtuberFirst << " " << VtuberLast << " Noises" << endl;
    cout << VtuberLast << " Noises is a clicker app for Android smartphones and tablets that brings entertainment to you by playing noises made by " << VtuberLast << " ." << endl;
    cout << "The interface of " << VtuberLast << " Noises is designed to be simple, intuitive and efficient. By removing what is not essential, we make access to everything you need even easier." << endl;
    cout << endl;

    cout << "# Download" << endl;
    cout << "[<img src=\"https://play.google.com/intl/en_us/badges/images/generic/en_badge_web_generic.png\"" << endl;
    cout << "alt=\"Get it on Google Play\"" << endl;
    cout << "height=\"80\">](https://play.google.com/store/apps/details?id=com.yuzumin." << vtuber << "noises)" << endl;


    cout << endl;
    cout << "# Features" << endl;
    cout << "* " << end_num << " Noises" << endl;
    cout << "* Alarm Clock" << endl;
    cout << "* Google Drive Download" << endl;

    cout << endl;
    cout << "# License" << endl;
    cout << "GNU General Public License V3" << endl;

    cout << endl;
    cout << "# List of Noises" << endl;
    //loops to generate (vtuber)noise(number) for documentation
    for (temp_num = start_num; temp_num <= end_num; temp_num++) {
        cout << "* " << vtuber << "noise" << temp_num << " " << endl;
    }


    return_to_menu();

}
void submenu5_2() {
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "For App Release Note \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << endl;

    cout << "\n\n\n";

    cout << endl;
    cout << endl;

    cout << "/***NEW FEATURES***/" << endl;
    cout << "•Developer Mode" << endl;
    cout << "•Alarm Clock" << endl;
    cout << "•Google Drive Download" << endl;

    cout << endl;
    cout << endl;
    cout << endl;

    cout << "/***FIXES***/" << endl;
    cout << "•New Randomizer" << endl;
    cout << "•Popup Text Error" << endl;
    cout << "•Google Drive Download" << endl;

    cout << endl;
    cout << endl;

    cout << "/***HOW TO USE***/" << endl;
    cout << "Go to menu and tap Version 7 times" << endl;
    cout << "to unlock Alarm feature" << endl;

    cout << endl;
    cout << endl;
    cout << endl;

    cout << "/***IMPORTANT***/" << endl;
    cout << "Alarm is still an unstable feature" << endl;
    cout << "Uses Media Volume instead of Alarm Volume" << endl;
    cout << "Currently is not able to delete alarms yet" << endl;

    cout << endl;
    cout << "IT IS NOT RECOMMENDED TO BE USED AS A MAIN ALARM" << endl;
    return_to_menu();

}
void Sub_Menu5() {

    Sub_ExeCode = 0;    // To ensure Sub_ExeCode does not hold garbage data
    while (Sub_ExeCode != 177013) {

        switch (Sub_ExeCode) {
        case 1:
            submenu5_1();
            break;
        case 2:
            submenu5_2();
            break;
        case 98:
            return_to_main();
            break;
        case 99:
            exit_to_desktop();
            break;
        default:
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout << "Select an option from menu :" << endl;
            cout << "~~~~~~~~~" << endl;
            cout << "1.  Generate Documentation for README" << endl;
            cout << "2.  Generate App Release Note" << endl;
            cout << "~~~~~~~~~" << endl;
            cout << "98.  Exit to Main Menu" << endl;
            cout << "99.  Exit to Desktop" << endl;

            cin >> Sub_ExeCode;
            break;
        }
    }
}

//MainActivity.Java FUNCTIONS
void MainActivity_1() {
    ClearConsole();
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "For Audio Buttons in activity_main0.xml \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << endl;

    unsigned int AudioSTART;
    unsigned int AudioEND;
    unsigned int AudioTEMP = 0;
    unsigned char exe_char = 'x';

    while (exe_char != 'O') {
        switch (exe_char)
        {
        case 'y':
            exe_char = 'Y';
            break;
        case 'Y':
            SET_audioStart();
            SET_audioEnd();
            exe_char = 'x';
            break;
        case 'N':
            exe_char = 'n';
            break;
        case 'n':
            exe_char = 'O';
            break;
        default:
            //Prompt user for the starting and ending number of the noises
            ClearConsole();
            AudioSTART = GET_audioStart();
            AudioEND = GET_audioEnd();
            ClearConsole();
            cout << "MP3 Starting Number: " << AudioSTART << endl;
            cout << "MP3 Ending Number: " << AudioEND << endl;
            cout << "Would you like to change these values? (Y/n)";
            cin >> exe_char;
            ClearConsole();
            break;
        }
    }

    ClearConsole();

    for (AudioTEMP = AudioSTART; AudioTEMP <= AudioEND; AudioTEMP++) {
        cout << "<androidx.cardview.widget.CardView" << endl;
        cout << "android:id=\"@+id/sound" << AudioTEMP << "\"" << endl;
        cout << "android:layout_width=\"100dp\"" << endl;
        cout << "android:layout_height=\"100dp\"" << endl;
        if (AudioTEMP == 1) {
            cout << "android:layout_marginHorizontal=\"10dp\"" << endl;
        }
        else {
            cout << "android:layout_marginRight=\"10dp\"" << endl;
        }
        cout << "app:cardBackgroundColor=\"@color/clearhomeicons\"" << endl;
        cout << "app:cardCornerRadius=\"20dp\">" << endl;
        cout << "<TextView" << endl;
        cout << "android:layout_width=\"match_parent\"" << endl;
        cout << "android:layout_height=\"match_parent\"" << endl;
        cout << "android:gravity=\"center\"" << endl;
        cout << "android:text=\"@string/noise" << AudioTEMP << "_text\"" << endl;
        cout << "android:textAlignment=\"center\"" << endl;
        cout << "android:textColor=\"@color/porcelain\" />" << endl;
        cout << "</androidx.cardview.widget.CardView>" << endl;
        cout << endl;
    }
    return_to_menu();
}
void MainActivity_2() {
    ClearConsole();
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "To declare CardView in MainActivity.xml \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << endl;

    unsigned int AudioSTART;
    unsigned int AudioEND;
    unsigned int AudioTEMP = 0;
    unsigned char exe_char = 'x';

    while (exe_char != 'O') {
        switch (exe_char)
        {
        case 'y':
            exe_char = 'Y';
            break;
        case 'Y':
            SET_audioStart();
            SET_audioEnd();
            exe_char = 'x';
            break;
        case 'N':
            exe_char = 'n';
            break;
        case 'n':
            exe_char = 'O';
            break;
        default:
            //Prompt user for the starting and ending number of the noises
            ClearConsole();
            AudioSTART = GET_audioStart();
            AudioEND = GET_audioEnd();
            ClearConsole();
            cout << "MP3 Starting Number: " << AudioSTART << endl;
            cout << "MP3 Ending Number: " << AudioEND << endl;
            cout << "Would you like to change these values? (Y/n)";
            cin >> exe_char;
            ClearConsole();
            break;
        }
    }

    ClearConsole();
    for (AudioTEMP = AudioSTART; AudioTEMP <= AudioEND; AudioTEMP++) {
        cout << "CardView SoundBTN" << AudioTEMP << ";" << endl;
    }

    return_to_menu();
}
void MainActivity_3() {
    ClearConsole();
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "To setup CardView in MainActivity0.xml \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << endl;

    unsigned int AudioSTART;
    unsigned int AudioEND;
    unsigned int AudioTEMP = 0;
    unsigned char exe_char = 'x';

    while (exe_char != 'O') {
        switch (exe_char)
        {
        case 'y':
            exe_char = 'Y';
            break;
        case 'Y':
            SET_audioStart();
            SET_audioEnd();
            exe_char = 'x';
            break;
        case 'N':
            exe_char = 'n';
            break;
        case 'n':
            exe_char = 'O';
            break;
        default:
            //Prompt user for the starting and ending number of the noises
            ClearConsole();
            AudioSTART = GET_audioStart();
            AudioEND = GET_audioEnd();
            ClearConsole();
            cout << "MP3 Starting Number: " << AudioSTART << endl;
            cout << "MP3 Ending Number: " << AudioEND << endl;
            cout << "Would you like to change these values? (Y/n)";
            cin >> exe_char;
            ClearConsole();
            break;
        }
    }

    ClearConsole();
    for (AudioTEMP = AudioSTART; AudioTEMP <= AudioEND; AudioTEMP++) {
        cout << "SoundBTN" << AudioTEMP << "=findViewById(R.id.sound" << AudioTEMP << ");" << endl;
        cout << "SoundBTN" << AudioTEMP << ".setVisibility(View.GONE);" << endl;
        cout << "SoundBTN" << AudioTEMP << ".setOnClickListener(new View.OnClickListener() {" << endl;
        cout << "@Override" << endl;
        cout << "public void onClick(View v) {" << endl;
        cout << "playSound(" << AudioTEMP + 2 << ");" << endl;
        cout << "}" << endl;
        cout << "});" << endl;
        cout << endl;
    }
    return_to_menu();
}
void MainActivity_4() {
    ClearConsole();
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << "To add switch statements in private void playSound(num) \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << endl;

    string vtuberFN;
    unsigned int AudioSTART;
    unsigned int AudioEND;
    unsigned int AudioTEMP = 0;
    unsigned char exe_char = 'x';

    while (exe_char != 'O') {
        switch (exe_char)
        {
        case 'y':
            exe_char = 'Y';
            break;
        case 'Y':
            SET_vtuberFN();
            SET_audioStart();
            SET_audioEnd();
            exe_char = 'x';
            break;
        case 'N':
            exe_char = 'n';
            break;
        case 'n':
            exe_char = 'O';
            break;
        default:
            //Prompt user for the starting and ending number of the noises
            ClearConsole();
            vtuberFN = GET_vtuberFN_LC();
            AudioSTART = GET_audioStart();
            AudioEND = GET_audioEnd();
            ClearConsole();
            cout << "Vtuber First Name: " << vtuberFN << endl;
            cout << "MP3 Starting Number: " << AudioSTART << endl;
            cout << "MP3 Ending Number: " << AudioEND << endl;
            cout << "Would you like to change these values? (Y/n)";
            cin >> exe_char;
            ClearConsole();
            break;
        }
    }

    ClearConsole();
    cout << "switch (num) {" << endl;
    for (AudioTEMP = AudioSTART; AudioTEMP <= AudioEND; AudioTEMP++) {
        cout << "case " << AudioTEMP + 2 << ":" << endl;
        cout << "noise = MediaPlayer.create(this, R.raw." << vtuberFN << "noise" << AudioTEMP << ");" << endl;
        cout << "noise.setOnCompletionListener(listener);" << endl;
        cout << "noise.start();" << endl;
        cout << "if (switch1) {" << endl;
        cout << "Toast.makeText(this, getString(R.string.noise" << AudioTEMP << "_text), Toast.LENGTH_SHORT).show();" << endl;
        cout << "}" << endl;
        cout << "set1.start();" << endl;
        cout << "break;" << endl;
    }
    cout << "default:" << endl;
    cout << "Toast.makeText(this, \"NO SOUND SELECTED\", Toast.LENGTH_SHORT).show();" << endl;
    cout << "break;" << endl;
    cout << "}" << endl;

    return_to_menu();
}
void MainActivity_5() {
    ClearConsole();
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << "To add switch statement in private void retrievedata() \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << endl;

    string vtuberFN;
    unsigned int ImageSTART;
    unsigned int ImageEND;
    unsigned int ImageTEMP = 0;
    unsigned char exe_char = 'x';

    while (exe_char != 'O') {
        switch (exe_char)
        {
        case 'y':
            exe_char = 'Y';
            break;
        case 'Y':
            SET_audioStart();
            SET_audioEnd();
            exe_char = 'x';
            break;
        case 'N':
            exe_char = 'n';
            break;
        case 'n':
            exe_char = 'O';
            break;
        default:
            //Prompt user for the starting and ending number of the noises
            ClearConsole();
            ImageSTART = GET_audioStart();
            ImageEND = GET_audioEnd();
            vtuberFN = GET_vtuberFN_LC();
            ClearConsole();
            cout << "MP3 Starting Number: " << ImageSTART << endl;
            cout << "MP3 Ending Number: " << ImageEND << endl;
            cout << "Vtuber First Name: " << vtuberFN << endl;
            cout << "Would you like to change these values? (Y/n)";
            cin >> exe_char;
            ClearConsole();
            break;
        }
    }

    ClearConsole();

    cout << "switch (charavalue) {" << endl;
    for (ImageTEMP = ImageSTART; ImageTEMP <= ImageEND; ImageTEMP++) {
        if (ImageTEMP == ImageEND) {
            cout << "default:" << endl;
        }
        else {
            cout << "case " << ImageTEMP << ":" << endl;
        }
        cout << "image.setImageResource(R.drawable." << vtuberFN << ImageTEMP << ");" << endl;
        cout << "break;" << endl;
    }
    cout << "}" << endl;

    return_to_menu();
}
void MainActivity_6() {
    ClearConsole();
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << "To add if statements in private void retrievedata() \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << endl;

    unsigned int ImageSTART;
    unsigned int ImageEND;
    unsigned int ImageTEMP = 0;
    unsigned char exe_char = 'x';

    while (exe_char != 'O') {
        switch (exe_char)
        {
        case 'y':
            exe_char = 'Y';
            break;
        case 'Y':
            SET_audioStart();
            SET_audioEnd();
            exe_char = 'x';
            break;
        case 'N':
            exe_char = 'n';
            break;
        case 'n':
            exe_char = 'O';
            break;
        default:
            //Prompt user for the starting and ending number of the noises
            ClearConsole();
            ImageSTART = GET_audioStart();
            ImageEND = GET_audioEnd();
            ClearConsole();
            cout << "Image Starting Number: " << ImageSTART << endl;
            cout << "Image Ending Number: " << ImageEND << endl;
            cout << "Would you like to change these values? (Y/n)";
            cin >> exe_char;
            ClearConsole();
            break;
        }
    }

    ClearConsole();
    //For private void retrievedata()
    for (ImageTEMP = ImageSTART; ImageTEMP <= ImageEND; ImageTEMP++) {
        cout << "SavedSettings =getSharedPreferences(\"save" << ImageTEMP + 2 << "\", MODE_PRIVATE);" << endl;
        cout << "if (" << "SavedSettings.getBoolean(\"value" << ImageTEMP + 2 << "\",false)" << ") {" << endl;
        cout << "listofsounds.add(" << ImageTEMP + 2 << ");" << endl;
        cout << "SoundBTN" << ImageTEMP << ".setVisibility(View.VISIBLE);" << endl;
        cout << "}else{" << endl;
        cout << "SoundBTN" << ImageTEMP << ".setVisibility(View.GONE);" << endl;
        cout << "}" << endl;
        cout << endl;
    }

    return_to_menu();
}
void MainActivity_SubMenu() {

    Sub_ExeCode = 0;    // To ensure Sub_ExeCode does not hold garbage data
    while (Sub_ExeCode != 177013) {

        switch (Sub_ExeCode) {
        case 1:
            MainActivity_1();
            break;
        case 2:
            MainActivity_2();
            break;
        case 3:
            MainActivity_3();
            break;
        case 4:
            MainActivity_4();
            break;
        case 5:
            MainActivity_5();
            break;
        case 6:
            MainActivity_6();
            break;
        case 98:
            return_to_main();
            break;
        case 99:
            exit_to_desktop();
            break;
        default:
            ClearConsole();
            cout << "Select an option from menu :" << endl;
            cout << "~~~~~~~~~" << endl;
            cout << "1.  Generate CardView Buttons" << endl;
            cout << "~~~~~~~~~~~~ (For onCreate()) ~~~~~~~~~~~~" << endl;
            cout << "2.  Generate Declare Cardview" << endl;
            cout << "3.  Generate Cardview onClick" << endl;
            cout << "~~~~~~~~~~~~ (For playSound(num)) ~~~~~~~~~~~~" << endl;
            cout << "4.  Generate Audio switch statement" << endl;
            cout << "~~~~~~~~~~~~ (For retrievedata()) ~~~~~~~~~~~~" << endl;
            cout << "5.  Generate Image switch statement" << endl;
            cout << "6.  Generate Audio if statements" << endl;
            cout << "~~~~~~~~~" << endl;
            cout << "98.  Exit to Main Menu" << endl;
            cout << "99.  Exit to Desktop" << endl;

            cin >> Sub_ExeCode;
            break;
        }
    }

}

//Vtuber Noises Automation Main Menu
void VNA_MainMenu() {
    Program_Splash();

    Main_ExeCode = 0; //To ensure Main_Execode does not hold garbage data

    while (Main_ExeCode != 177013) {

        switch (Main_ExeCode) {
        case 1:
            MainActivity_SubMenu();
            break;
        case 2:
            ClickerSettings_SubMenu();
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