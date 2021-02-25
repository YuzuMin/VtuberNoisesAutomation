// VtuberNoisesAutomation.cpp 
// This C++ program is used to help generate code for VtuberNoises Projects

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int execution_code = 0;

int Main_ExeCode = 0;   //Main Execution Code
int Sub_ExeCode = 0;    //Sub Execution Code

char answer;

int start_num; //The 1st number of the (vtuber)noises mp3 file
int end_num; //The last number of the (vtuber)noises mp3 file
int temp_num;
string vtuber; //For Vtuber Name (vtuber)noises


// To Exit from function 
void return_to_menu() {
    //Set answer to n to ensure the while loop isn't skipped
    answer = 'n';

    while (answer!='y') {
        switch (answer) {
        case 'Y':
            answer = 'y';
            break;  //Exit to Sub Menu
        case 'y':
            break;  //Exit to Sub Menu
        default:
            cout << "\nReturn to menu? (Y/n)" << endl;
            cin >> answer;
        }
    }

    Sub_ExeCode = 0;
}






void submenu1_1() {
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << "To add switch statements in private void startRandomSound() \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << endl;

    cout << "switch (num) {" << endl;

    for (temp_num = start_num; temp_num <= end_num; temp_num++) {
        cout << "case " << temp_num + 2 << ":" << endl;
        cout << "noise = MediaPlayer.create(this, R.raw." << vtuber << "noise" << temp_num << ");" << endl;
        cout << "noise.setOnCompletionListener(listener);" << endl;
        cout << "noise.start();" << endl;
        cout << "if (switch1) {" << endl;
        cout << "Toast.makeText(this, getString(R.string.noise"<<temp_num<<"_text), Toast.LENGTH_SHORT).show();" << endl;
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

void submenu1_2() {
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << "To add switch statement in private void retrievedata() \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << endl;


    int startIMG_num;
    int endIMG_num;
    int tempIMG_num;

    cout << "Enter starting number for IMG :";
    cin >> startIMG_num;
    cout << "Enter ending number for IMG :";
    cin >> endIMG_num;
    cout << "Enter Vtuber name (no caps) :";
    cin >> vtuber;
    cout << endl;

    cout << "switch (charavalue) {" << endl;

    for (tempIMG_num = startIMG_num; tempIMG_num <= endIMG_num; tempIMG_num++) {

        if (tempIMG_num == endIMG_num) {
            cout << "default:" << endl;
        }
        else {
            cout << "case " << tempIMG_num << ":" << endl;
        }
        cout << "image.setImageResource(R.drawable."<<vtuber << tempIMG_num << ");" << endl;
        cout << "break;" << endl;
    }

    cout << "}" << endl;

    return_to_menu();

}

void submenu1_3() {
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << "To add if statements in private void retrievedata() \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << endl;

    //Prompt user for the starting and ending number of the noises
    cout << "Enter the starting number for the noises : ";
    cin >> start_num;
    cout << "Enter the ending number for the noises : ";
    cin >> end_num;

    //For private void retrievedata()
    for (temp_num = start_num; temp_num <= end_num; temp_num++) {
        cout << "SavedSettings =getSharedPreferences(\"save" << temp_num + 2 << "\", MODE_PRIVATE);" << endl;
        cout << "if ("<<"SavedSettings.getBoolean(\"value" << temp_num + 2 << "\",true)" << ") {" << endl;
        cout << "listofsounds.add(" << temp_num + 2 << ");" << endl;
        cout << "}";
        cout << endl;
    }

    return_to_menu();

}

void submenu2_1() {
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << "To declare Switch variable in ClickerSettings.Java \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << endl;

    //Prompt user for the starting and ending number of the noises
    cout << "Enter the starting number for the noises : ";
    cin >> start_num;
    cout << "Enter the ending number for the noises : ";
    cin >> end_num;

    cout << "\n\n\n";


    //Declare variable for ClickerSettings.Java
    for (temp_num = start_num; temp_num <= end_num; temp_num++) {
        cout << "Switch switch" << temp_num + 2 << ";" << endl;
    }

    return_to_menu();

}


void submenu2_2() {
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << "To declare RadioButton and TableRow variable in ClickerSettings.Java \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
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

    cout << endl;
    cout << endl;

    for (tempIMG_num = startIMG_num; tempIMG_num <= endIMG_num; tempIMG_num++) {

        cout << "TableRow ";
        cout << Vtuber << "IMG" << tempIMG_num << "Row;" << endl;

    }

    for (tempIMG_num = startIMG_num; tempIMG_num <= endIMG_num; tempIMG_num++) {

        cout << "RadioButton ";
        cout << Vtuber << "IMG" << tempIMG_num << ";" << endl;

    }


    return_to_menu();
}

void submenu2_3() {
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << "To setup Switches in ClickerSettings.Java \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << endl;

    //Prompt user for the starting and ending number of the noises
    cout << "Enter the starting number for the noises : ";
    cin >> start_num;
    cout << "Enter the ending number for the noises : ";
    cin >> end_num;

    cout << "\n\n\n";


    //For protected void onCreate(Bundle savedInstanceState)
    for (temp_num = start_num; temp_num <= end_num; temp_num++) {

        cout << "// for switch " << temp_num + 2 << " to activate" << endl;
        cout << "switch" << temp_num + 2 << "=findViewById(R.id.switch" << temp_num + 2 << ");" << endl;
        cout << "SoundSettings =getSharedPreferences(\"save" << temp_num + 2 << "\",MODE_PRIVATE);" << endl;
        cout << "switch" << temp_num + 2 << ".setChecked(SoundSettings.getBoolean(\"value" << temp_num + 2 << "\",true));" << endl;
        cout << "switch" << temp_num + 2 << ".setOnClickListener(new View.OnClickListener() {" << endl;
        cout << "@Override" << endl;
        cout << "public void onClick(View v) {" << endl;
        cout << "if(switch" << temp_num + 2 << ".isChecked()){" << endl;
        cout << "SoundSettingsEditor =getSharedPreferences(\"save" << temp_num + 2 << "\",MODE_PRIVATE).edit();" << endl;
        cout << "SoundSettingsEditor.putBoolean(\"value" << temp_num + 2 << "\",true);" << endl;
        cout << "SoundSettingsEditor.apply();" << endl;
        cout << "switch" << temp_num + 2 << ".setChecked(true);" << endl;
        cout << "}else{" << endl;
        cout << "SoundSettingsEditor =getSharedPreferences(\"save" << temp_num + 2 << "\",MODE_PRIVATE).edit();" << endl;
        cout << "SoundSettingsEditor.putBoolean(\"value" << temp_num + 2 << "\",false);" << endl;
        cout << "SoundSettingsEditor.apply();" << endl;
        cout << "switch" << temp_num + 2 << ".setChecked(false);" << endl;
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

        cout << Vtuber << "IMG" << tempIMG_num <<".setOnClickListener(new View.OnClickListener() {" << endl;
        cout << "@Override" << endl;
        cout << "public void onClick(View v) {" << endl;
        cout << "charavalue="<< tempIMG_num<<";" << endl;
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
        cout << Vtuber<<"IMG" << tempIMG_num << ".setChecked(true);" << endl;
        cout << "break;" << endl;
    }

    cout << "}" << endl;

    return_to_menu();


}


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
        cout << "android:text=\"@string/noise"<<temp_num<<"_text\"" << endl;
        cout << "android:textColor=\"#f1f1f1\"" << endl;
        cout << "android:textSize=\"17sp\" />" << endl;
        cout << "" << endl;
        cout << "<Switch" << endl;
        cout << "android:id=\"@+id/switch" << temp_num + 2 << "\"" << endl;
        cout << "android:layout_width=\"match_parent\"" << endl;
        cout << "android:layout_height=\"match_parent\" />" << endl;
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
        cout << "android:id=\"@+id/"<<vtuber<< tempIMG_num <<"_img_row\">" << endl;
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

    while (getline(myFile,myText))
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
    cout << "* " << end_num << " noises" << endl;
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



void submenu6_1() {
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << "For App Terms & Conditions \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << endl;

    string Vtuber;
    cout << "Enter Vtuber name (1st letter caps) :";
    cin >> Vtuber;

    cout << endl;
    cout << endl;


    cout << "By downloading or using the app, these terms will automatically apply to you – you should make sure therefore that you read them carefully before using the app. You’re allowed to copy, or modify the app, any part of the app, or our trademarks in any way. You’re allowed to attempt to extract the source code of the app, and you also should try to translate the app into other languages, or make derivative versions. The app itself, and all the trade marks, copyright, database rights and other intellectual property rights related to it, still belong to YuzuMin and Respective Owners." << endl;
    cout << endl;
    cout << "YuzuMin is committed to ensuring that the app is as useful and efficient as possible. For that reason, we reserve the right to make changes to the app or to charge for its services, at any time and for any reason. We will never charge you for the app or its services without making it very clear to you exactly what you’re paying for" << endl;
    cout << endl;
    cout << "The "<< Vtuber <<" Noises app stores and processes personal data that you have provided to us, in order to provide my Service. It’s your responsibility to keep your phone and access to the app secure. We therefore recommend that you do not jailbreak or root your phone, which is the process of removing software restrictions and limitations imposed by the official operating system of your device. It could make your phone vulnerable to malware/viruses/malicious programs, compromise your phone’s security features and it could mean that the " << Vtuber << " Noises app won’t work properly or at all." << endl;
    cout << endl;
    cout << "The app does use third party services that declare their own Terms and Conditions." << endl;
    cout << endl;
    cout << "Link to Terms and Conditions of third party service providers used by the app" << endl;
    cout << endl;
    cout << "Google Play Services\n";
    cout << "You should be aware that there are certain things that YuzuMin will not take responsibility for. Certain functions of the app will require the app to have an active internet connection. The connection can be Wi-Fi, or provided by your mobile network provider, but YuzuMin cannot take responsibility for the app not working at full functionality if you don’t have access to Wi-Fi, and you don’t have any of your data allowance left.\n";
    cout << "\n";
    cout << "If you’re using the app outside of an area with Wi-Fi, you should remember that your terms of the agreement with your mobile network provider will still apply. As a result, you may be charged by your mobile provider for the cost of data for the duration of the connection while accessing the app, or other third party charges. In using the app, you’re accepting responsibility for any such charges, including roaming data charges if you use the app outside of your home territory (i.e. region or country) without turning off data roaming. If you are not the bill payer for the device on which you’re using the app, please be aware that we assume that you have received permission from the bill payer for using the app.\n";
    cout << "\n";
    cout << "Along the same lines, YuzuMin cannot always take responsibility for the way you use the app i.e. You need to make sure that your device stays charged – if it runs out of battery and you can’t turn it on to avail the Service, YuzuMin cannot accept responsibility.\n";
    cout << "\n";
    cout << "With respect to YuzuMin’s responsibility for your use of the app, when you’re using the app, it’s important to bear in mind that although we endeavour to ensure that it is updated and correct at all times, we do rely on third parties to provide information to us so that we can make it available to you. YuzuMin accepts no liability for any loss, direct or indirect, you experience as a result of relying wholly on this functionality of the app.\n";
    cout << "\n";
    cout << "At some point, we may wish to update the app. The app is currently available on Android – the requirements for system(and for any additional systems we decide to extend the availability of the app to) may change, and you’ll need to download the updates if you want to keep using the app. YuzuMin does not promise that it will always update the app so that it is relevant to you and/or works with the Android version that you have installed on your device. However, you promise to always accept updates to the application when offered to you, We may also wish to stop providing the app, and may terminate use of it at any time without giving notice of termination to you. Unless we tell you otherwise, upon any termination, (a) the rights and licenses granted to you in these terms will end; (b) you must stop using the app, and (if needed) delete it from your device.\n";
    cout << "\n";
    cout << "Changes to This Terms and Conditions\n";
    cout << "\n";
    cout << "I may update our Terms and Conditions from time to time. Thus, you are advised to review this page periodically for any changes. I will notify you of any changes by posting the new Terms and Conditions on this page.\n";
    cout << "\n";
    cout << "These terms and conditions are effective as of 2021-02-24\n";
    cout << "\n";
    cout << "Contact Us\n";
    cout << "\n";
    cout << "If you have any questions or suggestions about my Terms and Conditions, do not hesitate to contact me at yuzuminteam@gmail.com.\n";
    cout << "\n";
    cout << "This Terms and Conditions page was generated by App Privacy Policy Generator" << endl;
    cout << endl;

    return_to_menu();

}

void submenu6_2() {
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << "For App Privacy Policy \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << endl;

    string Vtuber;
    cout << "Enter Vtuber name (1st letter caps) :";
    cin >> Vtuber;

    cout << endl;
    cout << endl;

    cout << "YuzuMin built the " << Vtuber << " Noises app as an Open Source app. This SERVICE is provided by YuzuMin at no cost and is intended for use as is.\n";
    cout << "\n";
    cout << "This page is used to inform visitors regarding my policies with the collection, use, and disclosure of Personal Information if anyone decided to use my Service.\n";
    cout << "\n";
    cout << "If you choose to use my Service, then you agree to the collection and use of information in relation to this policy. The Personal Information that I collect is used for providing and improving the Service. I will not use or share your information with anyone except as described in this Privacy Policy.\n";
    cout << "\n";
    cout << "The terms used in this Privacy Policy have the same meanings as in our Terms and Conditions, which is accessible at " << Vtuber << " Noises unless otherwise defined in this Privacy Policy.\n";
    cout << "\n";
    cout << "Information Collection and Use\n";
    cout << "\n";
    cout << "For a better experience, while using our Service, I may require you to provide us with certain personally identifiable information. The information that I request will be retained on your device and is not collected by me in any way.\n";
    cout << "\n";
    cout << "The app does use third party services that may collect information used to identify you.\n";
    cout << "\n";
    cout << "Link to privacy policy of third party service providers used by the app\n";
    cout << "\n";
    cout << "Google Play Services\n";
    cout << "Log Data\n";
    cout << "\n";
    cout << "I want to inform you that whenever you use my Service, in a case of an error in the app I collect data and information (through third party products) on your phone called Log Data. This Log Data may include information such as your device Internet Protocol (“IP”) address, device name, operating system version, the configuration of the app when utilizing my Service, the time and date of your use of the Service, and other statistics.\n";
    cout << "\n";
    cout << "Cookies\n";
    cout << "\n";
    cout << "Cookies are files with a small amount of data that are commonly used as anonymous unique identifiers. These are sent to your browser from the websites that you visit and are stored on your device's internal memory.\n";
    cout << "\n";
    cout << "This Service does not use these “cookies” explicitly. However, the app may use third party code and libraries that use “cookies” to collect information and improve their services. You have the option to either accept or refuse these cookies and know when a cookie is being sent to your device. If you choose to refuse our cookies, you may not be able to use some portions of this Service.\n";
    cout << "\n";
    cout << "Service Providers\n";
    cout << "\n";
    cout << "I may employ third-party companies and individuals due to the following reasons:\n";
    cout << "\n";
    cout << "To facilitate our Service;\n";
    cout << "To provide the Service on our behalf;\n";
    cout << "To perform Service-related services; or\n";
    cout << "To assist us in analyzing how our Service is used.\n";
    cout << "I want to inform users of this Service that these third parties have access to your Personal Information. The reason is to perform the tasks assigned to them on our behalf. However, they are obligated not to disclose or use the information for any other purpose.\n";
    cout << "\n";
    cout << "Security\n";
    cout << "\n";
    cout << "I value your trust in providing us your Personal Information, thus we are striving to use commercially acceptable means of protecting it. But remember that no method of transmission over the internet, or method of electronic storage is 100% secure and reliable, and I cannot guarantee its absolute security.\n";
    cout << "\n";
    cout << "Links to Other Sites\n";
    cout << "\n";
    cout << "This Service may contain links to other sites. If you click on a third-party link, you will be directed to that site. Note that these external sites are not operated by me. Therefore, I strongly advise you to review the Privacy Policy of these websites. I have no control over and assume no responsibility for the content, privacy policies, or practices of any third-party sites or services.\n";
    cout << "\n";
    cout << "Children’s Privacy\n";
    cout << "\n";
    cout << "These Services do not address anyone under the age of 13. I do not knowingly collect personally identifiable information from children under 13 years of age. In the case I discover that a child under 13 has provided me with personal information, I immediately delete this from our servers. If you are a parent or guardian and you are aware that your child has provided us with personal information, please contact me so that I will be able to do necessary actions.\n";
    cout << "\n";
    cout << "Changes to This Privacy Policy\n";
    cout << "\n";
    cout << "I may update our Privacy Policy from time to time. Thus, you are advised to review this page periodically for any changes. I will notify you of any changes by posting the new Privacy Policy on this page.\n";
    cout << "\n";
    cout << "This policy is effective as of 2021-02-24\n";
    cout << "\n";
    cout << "Contact Us\n";
    cout << "\n";
    cout << "If you have any questions or suggestions about my Privacy Policy, do not hesitate to contact me at yuzuminteam@gmail.com.\n";
    cout << "\n";
    cout << "This privacy policy page was created at privacypolicytemplate.net and modified/generated by App Privacy Policy Generator";

    return_to_menu();
}


void return_to_main() {
    //Set answer to n to ensure the while loop isn't skipped
    answer = 'x';

    while (answer != 'O') {
        switch (answer) {
        case 'Y':
            Main_ExeCode = 0;   //Set Main execution code to 0 to prevent loopback
            Sub_ExeCode = 177013;   //Set Sub execution code to 177013 to exit Sub Menu
            answer = 'O';
            break;  //Exit to Main Menu
        case 'y':
            Main_ExeCode = 0;   //Set Main execution code to 0 to prevent loopback
            Sub_ExeCode = 177013;   //Set Sub execution code to 177013 to exit Sub Menu
            answer = 'O';
            break;  //Exit to Main Menu
        case 'N':
            Main_ExeCode = 0;   //Set Main execution code to 0 to prevent loopback
            Sub_ExeCode = 0;   //Set Sub execution code to 0 to prevent loopback
            answer = 'O';
            break;  //Exit to Main Menu
        case 'n':
            Main_ExeCode = 0;   //Set Main execution code to 0 to prevent loopback
            Sub_ExeCode = 0;   //Set Sub execution code to 0 to prevent loopback
            answer = 'O';
            break;  //Exit to Main Menu
        default:
            cout << "\nReturn to Main Menu? (Y/n)" << endl;
            cin >> answer;
        }
    }
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}

void exit_to_desktop() {
    //Set answer to n to ensure the while loop isn't skipped
    answer = 'x';

    while (answer != 'O') {
        switch (answer) {
        case 'Y':
            Main_ExeCode = 177013;   //Set Main execution code to 0 to prevent loopback
            Sub_ExeCode = 177013;   //Set Sub execution code to 99 to exit Sub Menu
            answer = 'O';
            break;  //Exit to Desktop
        case 'y':
            Main_ExeCode = 177013;   //Set Main execution code to 0 to prevent loopback
            Sub_ExeCode = 177013;   //Set Sub execution code to 99 to exit Sub Menu
            answer = 'O';
            break;  //Exit to Desktop
        case 'N':
            Main_ExeCode = 0;   //Set Main execution code to 0 to prevent loopback
            Sub_ExeCode = 0;   //Set Sub execution code to 0 to prevent loopback
            answer = 'O';
            break;  //Exit to Main Menu
        case 'n':
            Main_ExeCode = 0;   //Set Main execution code to 0 to prevent loopback
            Sub_ExeCode = 0;   //Set Sub execution code to 0 to prevent loopback
            answer = 'O';
            break;  //Exit to Main Menu
        default:
            cout << "\nExit to Desktop? (Y/n)" << endl;
            cin >> answer;
        }
    }
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}








// CODE FOR MainActivity Sub Menu
void Sub_Menu1() {

    Sub_ExeCode = 0;    // To ensure Sub_ExeCode does not hold garbage data
    while (Sub_ExeCode != 177013) {

        switch (Sub_ExeCode) {
        case 1:
            submenu1_1();
            break;
        case 2:
            submenu1_2();
            break;
        case 3:
            submenu1_3();
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
            cout << "~~~~~~~~~~~~ (For startRandomSound()) ~~~~~~~~~~~~" << endl;
            cout << "1.  Generate Audio switch statement" << endl;
            cout << "~~~~~~~~~~~~ (For retrievedata()) ~~~~~~~~~~~~" << endl;
            cout << "2.  Generate Image switch statement" << endl;
            cout << "3.  Generate Audio if statements" << endl;
            cout << "~~~~~~~~~" << endl;
            cout << "98.  Exit to Main Menu" << endl;
            cout << "99.  Exit to Desktop" << endl;

            cin >> Sub_ExeCode;
            break;
        }
    }

}


void Sub_Menu2() {

    Sub_ExeCode = 0;    // To ensure Sub_ExeCode does not hold garbage data
    while (Sub_ExeCode != 177013) {

        switch (Sub_ExeCode) {
        case 1:
            submenu2_1();
            break;
        case 2:
            submenu2_2();
            break;
        case 3:
            submenu2_3();
            break;
        case 4:
            submenu2_4();
            break;
        case 5:
            submenu2_5();
            break;
        case 6:
            //submenu1_2() serves same purpose
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

void Sub_Menu6() {

    Sub_ExeCode = 0;    // To ensure Sub_ExeCode does not hold garbage data
    while (Sub_ExeCode != 177013) {

        switch (Sub_ExeCode) {
        case 1:
            submenu6_1();
            break;
        case 2:
            submenu6_2();
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
            cout << "1.  Generate Terms & Conditions" << endl;
            cout << "2.  Generate Privacy Policy" << endl;
            cout << "~~~~~~~~~" << endl;
            cout << "98.  Exit to Main Menu" << endl;
            cout << "99.  Exit to Desktop" << endl;

            cin >> Sub_ExeCode;
            break;
        }
    }
}


void About_Program() {

    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
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
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}




int main()
{
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Vtuber Noises C++ Automation Program" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "By: YuzuMin" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl;



    /*

    //Prompt user for Vtuber name
    cout << "Enter the Vtuber's name (no caps) : ";
    cin >> vtuber;

    //Prompt user for the starting and ending number of the noises
    cout << "Enter the starting number for the noises : ";
    cin >> start_num;
    cout << "Enter the ending number for the noises : ";
    cin >> end_num;

    cout << "\n\n\n";

    */

    Main_ExeCode = 0; //To ensure Main_Execode does not hold garbage data

    while (Main_ExeCode != 177013) {
        
        switch (Main_ExeCode) {
        case 1:
            Sub_Menu1();
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
        case 6:
            Sub_Menu6();
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
            cout << "6.  Generate Legal Documents" << endl;
            cout << "~~~~~~~~~" << endl;
            cout << "98. About Program" << endl;
            cout << "99. Exit to Desktop" << endl;

            cin >> Main_ExeCode;
            break;
        }
    }
}


