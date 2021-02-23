// VtuberNoisesAutomation.cpp 
// This C++ program is used to help generate code for VtuberNoises Projects

#include <iostream>
using namespace std;

int execution_code = 0;
char answer;

int start_num; //The 1st number of the (vtuber)noises mp3 file
int end_num; //The last number of the (vtuber)noises mp3 file
int temp_num;
string vtuber; //For Vtuber Name (vtuber)noises



void return_to_menu() {
    //Set answer to n to ensure the while loop isn't skipped
    answer = 'n';

    while (1) {

        if (answer == 'Y') {
            break;
        }
        else if (answer == 'y') {
            break;
        }
        else {
            cout << "\nReturn to menu? (Y/n)" << endl;
            cin >> answer;
        }
    }
}



void generate_1() {

    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << "To declare boolean variable in MainActivity.Java \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << endl;



    //Declare boolean variable for MainActivity.Java
    for (temp_num = start_num; temp_num <= end_num; temp_num++) {
        cout << "boolean switch" << temp_num + 2 << ";" << endl;
    }


    return_to_menu();

}

void generate_2() {
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << "To add else if statements in private void startRandomSound() \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << endl;

    //For private void startRandomSound()
    for (temp_num = start_num; temp_num <= end_num; temp_num++) {
        cout << "else if (num == " << temp_num + 2 << ") {" << endl;
        cout << "noise = MediaPlayer.create(this, R.raw." << vtuber << "noise" << temp_num << ");" << endl;
        cout << "noise.setOnCompletionListener(listener);" << endl;
        cout << "noise.start();" << endl;
        cout << "if (switch1) {" << endl;
        cout << "Toast.makeText(this, \"vtuber text\", Toast.LENGTH_SHORT).show();" << endl;
        cout << "}" << endl;
        cout << "set1.start();" << endl;
        cout << "}";
    }


    return_to_menu();

}

void generate_4() {
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << "To add else if statements in private void startRandomSound() \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << endl;

    cout << "switch (month) {" << endl;

    //For private void startRandomSound()
    for (temp_num = start_num; temp_num <= end_num; temp_num++) {
        cout << "case " << temp_num + 2 << ":" << endl;
        cout << "noise = MediaPlayer.create(this, R.raw." << vtuber << "noise" << temp_num << ");" << endl;
        cout << "noise.setOnCompletionListener(listener);" << endl;
        cout << "noise.start();" << endl;
        cout << "if (switch1) {" << endl;
        cout << "Toast.makeText(this, \"vtuber text\", Toast.LENGTH_SHORT).show();" << endl;
        cout << "}" << endl;
        cout << "set1.start();" << endl;
        cout << "break;" << endl;

    }

    cout << "}" << endl;


    return_to_menu();

}

void generate_3() {
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << "To add if statements in private void retrievedata() \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << endl;


    //For private void retrievedata()
    for (temp_num = start_num; temp_num <= end_num; temp_num++) {
        cout << "SavedSettings =getSharedPreferences(\"save" << temp_num + 2 << "\", MODE_PRIVATE);" << endl;
        cout << "switch" << temp_num + 2 << "= SavedSettings.getBoolean(\"value" << temp_num + 2 << "\",true);" << endl;
        cout << "if (switch" << temp_num + 2 << ") {" << endl;
        cout << "listofsounds.add(" << temp_num + 2 << ");" << endl;
        cout << "}";
        cout << endl;
    }

    return_to_menu();

}

void generate_11() {
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << "To declare Switch variable in ClickerSettings.Java \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << endl;

    //Declare variable for ClickerSettings.Java
    for (temp_num = start_num; temp_num <= end_num; temp_num++) {
        cout << "Switch switch" << temp_num + 2 << ";" << endl;
    }

    return_to_menu();

}


void generate_12() {
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << "To setup Switches in ClickerSettings.Java \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << endl;

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


void generate_13() {
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << "To setup Toggle Button in ClickerSettings.Java \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << endl;

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





void generate_14() {
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << "To setup RadioButton in ClickerSettings.Java \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
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


void generate_15() {
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << "To declare RadioButton and TableRow in ClickerSettings.Java \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
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

        cout <<"TableRow ";
        cout << Vtuber << "IMG" << tempIMG_num << "Row;" << endl;

    }

    for (tempIMG_num = startIMG_num; tempIMG_num <= endIMG_num; tempIMG_num++) {

        cout << "RadioButton ";
        cout << Vtuber << "IMG" << tempIMG_num << ";" << endl;

    }


    return_to_menu();
}

void generate_16() {
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << "To link RadioButton and TableRow in ClickerSettings.Java \n";
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
    cout << "Enter Vtuber name (1st letter caps) :";
    cin >> Vtuber;

    cout << endl;
    cout << endl;


    for (tempIMG_num = startIMG_num; tempIMG_num <= endIMG_num; tempIMG_num++) {

        cout << Vtuber << "IMG" << tempIMG_num << "=findViewById(R.id."<<vtuber << tempIMG_num << "_img);" << endl;
        cout << Vtuber << "IMG" << tempIMG_num << "Row=findViewById(R.id." << vtuber << tempIMG_num << "_img_row);" << endl;

    }


    return_to_menu();
}




void generate_21() {
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "For Audio Switches in clicker_settings.xml \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << endl;

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




void generate_22() {
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




void generate_31() {
    //For README file
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "To generate string res for strings.xml \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << endl;

    for (temp_num = start_num; temp_num <= end_num; temp_num++) {
        cout << "<string name=\"noise" << temp_num << "_text\">Vtuber Text</string>" << endl;
    }

    return_to_menu();

}



void generate_41() {
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
















int main()
{
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Vtuber Noises C++ Automation Program" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl;





    //Prompt user for Vtuber name
    cout << "Enter the Vtuber's name (no caps) : ";
    cin >> vtuber;

    //Prompt user for the starting and ending number of the noises
    cout << "Enter the starting number for the noises : ";
    cin >> start_num;
    cout << "Enter the ending number for the noises : ";
    cin >> end_num;

    cout << "\n\n\n";

    while (execution_code != 99) {
        cout << "Select an option from menu :" << endl;


        cout << "~~~~~~~~~ For MainActivity.Java ~~~~~~~~~" << endl;
        cout << "1. Generate boolean variable (boolean switch)" << endl;
        cout << "2. Generate else if statements for private void startRandomSound()" << endl;
        cout << "3. Generate if statements in private void retrievedata()" << endl;
        cout << "4. Generate switch conditions for private void startRandomSound()" << endl;


        cout << "~~~~~~~~~ For ClickerSettings.Java ~~~~~~~~~" << endl;
        cout << "11. Generate Switch variable (Switch switch)" << endl;
        cout << "12. Generate setup code for Switches" << endl;
        cout << "13. Generate setup code for Toggle Button" << endl;
        cout << "14. Generate setup code for Radio Buttons" << endl;
        cout << "15. Generate declaration of RadioButton and TableRow " << endl;
        cout << "16. Generate link for RadioButton and TableRow " << endl;


        cout << "~~~~~~~~~ For clicker_settings.xml ~~~~~~~~~" << endl;
        cout << "21. Generate switches for xml file" << endl;
        cout << "22. Generate radiobutton for xml file" << endl;


        cout << "~~~~~~~~~ For strings.xml ~~~~~~~~~" << endl;
        cout << "31. Generate string res for strings.xml" << endl;

        cout << "~~~~~~~~~ For Documentation ~~~~~~~~~" << endl;
        cout << "41. Generate Documentation for README" << endl;


        cout << "~~~~~~~~~" << endl;
        cout << "99. Exit to Desktop" << endl;
        cout << "~~~~~~~~~" << endl;
        cin >> execution_code;


        if (execution_code == 1) {
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            generate_1();
            cout << "\n\n\n";
        }
        else if (execution_code == 2) {
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            generate_2();
            cout << "\n\n\n";
        }
        else if (execution_code == 3) {
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            generate_3();
            cout << "\n\n\n";
        }
        else if (execution_code == 4) {
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            generate_4();
            cout << "\n\n\n";
        }
        else if (execution_code == 11) {
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            generate_11();
            cout << "\n\n\n";
        }
        else if (execution_code == 12) {
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            generate_12();
            cout << "\n\n\n";
        }
        else if (execution_code == 13) {
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            generate_13();
            cout << "\n\n\n";
        }
        else if (execution_code == 14) {
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            generate_14();
            cout << "\n\n\n";
        }
        else if (execution_code == 15) {
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            generate_15();
            cout << "\n\n\n";
        }
        else if (execution_code == 16) {
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            generate_16();
            cout << "\n\n\n";
        }
        else if (execution_code == 21) {
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            generate_21();
            cout << "\n\n\n";
        }
        else if (execution_code == 22) {
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            generate_22();
            cout << "\n\n\n";
        }
        else if (execution_code == 31) {
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            generate_31();
            cout << "\n\n\n";
        }
        else if (execution_code == 41) {
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            generate_41();
            cout << "\n\n\n";
        }
        else if (execution_code == 99) {
            cout << "\n\n\n\n\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "Program has ended successfully" << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "Exit Code : 99" << endl;
            break;
        }
        else {
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        }



    }

}


