// Made By Bilal Ahmed Khan (2023-10-0238) & Behroz Karim (2023-10-0234)

#include <iostream>
#include <conio.h> //It provides console input/output
#include <stdio.h> // It uses streams to operate with physical devices
#include <stdlib.h> //It includes functions involving memory allocation, process control, conversions and others
#include <ctime> //It contains time() function used to get the current time
#include <cstdlib> //It declares set of general purpose functions.
#include <windows.h> //It provides built in functions.
#include <MMsystem.h> //It adds multimedia functions.
#include <fstream> //It is used for file handling purpose.

using namespace std;
void endline(int en) //This function is used for generating new lines.
{
    for (int i=0;i<en;i++)
    {
        cout << endl;
    }
}
int main()
{

    string _username;
    string _old_username = "Player Name";
    int _highscore=0; //It is the highest initial score which is later on used in file-handling.
    int _score=0; // It is the current score of the user.
    char arr1[100]; // It will be used to store the highest score.
    char arr2[100]; // it will be used to store user name of highest scorer.

    system ("COLOR 9E"); //This is used for changing the color of the console & text.

    cout << endl;
    cout << " ____________________________________________________________________________"  <<endl;
    cout << "               ____   _         ______      _        _   ____    _"            <<endl;
    cout << "    |       | |    | | \\     | |           | \\      / | |    |  | \\     | " <<endl;
    cout << "    |       | |    | |  \\    | |   ___     |  \\    /  | |    |  |  \\    |"  <<endl; //This is hard code to print the logo of our Hangman Game.
    cout << "    |_______| |____| |   \\   | |  |   |    |   \\  /   | |____|  |   \\   | " <<endl;
    cout << "    |       | |    | |    \\  | |  |_  |    |    \\/    | |    |  |    \\  | " <<endl;
    cout << "    |       | |    | |     \\_| |______|    |          | |    |  |     \\_|  " <<endl;
    cout << " ____________________________________________________________________________" <<endl;
    cout << "                                                              "                <<endl;

    //PlaySound(TEXT("WELCOME.wav"),NULL,SND_SYNC); //It plays the welcome sound in background

    endline(5);
    cout << "\t \t \t Please Enter Your Username" << endl; // This is the main menu of the game.
    cout << "\t\t\t____________________________" << endl;
    endline(2);
    cout << "\t \t \t \t  ";
    cin >> _username; // User inputs his user name here.
    system("cls"); // It is used to clear the console.

    start: //This label is declared here and will be used in goto function in next lines which will bring back the program to that label.

    cout << " ___________________________________________________________________________"  <<endl;
    cout << "               ____   _         ______      _        _   ____    _"            <<endl;
    cout << "    |       | |    | | \\     | |           | \\      / | |    |  | \\     | " <<endl;
    cout << "    |       | |    | |  \\    | |   ___     |  \\    /  | |    |  |  \\    |"  <<endl; //This is hard code to print the logo of our Hangman Game.
    cout << "    |_______| |____| |   \\   | |  |   |    |   \\  /   | |____|  |   \\   | " <<endl;
    cout << "    |       | |    | |    \\  | |  |_  |    |    \\/    | |    |  |    \\  | " <<endl;
    cout << "    |       | |    | |     \\_| |______|    |          | |    |  |     \\_|  " <<endl;
    cout << " ____________________________________________________________________________" <<endl;
    cout << "                                                              "                <<endl;
    cout << "                                                              "                << endl;
    endline(1);

    cout << "\t \t \t Press Required Key To Continuue" << endl; // This is the main menu of the game.
    cout << "\t\t\t_________________________________" << endl;
    endline(2);
    cout << "\t \t\t\t1. Start New Game \t" << endl;
    cout << endl;
    cout << "\t\t \t \t2. Credits \t" << endl;
    cout << endl;
    cout << "\t \t\t \t3. Highest Scores" << endl;
    cout << endl;
    cout << "\t\t\t \t4. Exit " << endl;
    cout << endl;

    checkpoint: //This label is declared here and will be used in goto function in next lines which will bring back the program to that label.

    int main_menu_input;
    main_menu_input=getch(); // "main_menu_input is the input which the user gives on the main menu screen.

    while(main_menu_input!=50&&main_menu_input!=51&&main_menu_input!=49&&main_menu_input!=52) // This loop runs only when input is not equal 1,2,3 or 4. Also 49,50,51,and 52 are the ASCII values of 1,2,3 and 4 respectively
    {
        goto checkpoint; //Here the program will jump to the checkpoint declared in line 43.
    }
    system ("cls");

    if (main_menu_input==52)
    {
        return 0; //It means that if user presses 4 on the main menu screen then the game will end.
    }

    if (main_menu_input==50) // If the user presses 2, credits screen will be displayed.
    {   endline(2);
        cout << "\t \t \t\t    MADE BY" << endl;
        cout << "\t \t\t\t   __________" << endl;
        cout << endl;
        cout << "\t\t\t\t  Behroz Karim \n" << endl;
        cout << "\t\t\t\tBilal Ahmed Khan" << endl;
        endline(3);
        cout << "\t \t \t\t   GUIDED BY" << endl;
        cout << "\t \t \t\t _____________" << endl;
        cout <<  endl;
        cout << "\t \t \t\t   Haris Noor" << endl;
        endline(3);
        cout << "\t \t \t     All Copy Rights Reserved \n\n" << endl;
        endline(2);
        cout << "     Back : Escape \t \t \t \t                 Exit : E" << endl;
        int credit_menu_input; // Here "credit_menu_input" is the key pressed by the user on credits screen.
        while(1) //This loop is used to avoid pressing "enter" key and to avoid wrong inputs.
        {
            credit_menu_input=getch();
            if(credit_menu_input==27)
            {
                system("cls");
                goto start; // If user presses "Escape" key then, main menu screen will be displayed.
            }
            if(credit_menu_input==101 || credit_menu_input==69) //69 and 101 are the ASCII values for E and e respectively.
            {
                system("cls");
                goto ending; // If user presses "E" or "e" key then, game will be closed.
            }
        }
    } // Credits screen condition ends.

    if (main_menu_input==49) // If user presses "1" on the main screen,following code will run.
    {
        checkpoint2: //This label is declared here and will be used in goto function in next lines which will bring back the program to that label.
        endline(7);
        cout << "\t \t \t   Please Select A Mode"<< endl; // This displays the mode of game i.e single player or double player.
        cout << "\t \t \t  ______________________" << endl;
        cout << endl;
        cout << endl;
        cout << "\t \t \t     1. Single Player" << endl;
        cout << endl;
        cout << "\t \t \t     2. Double Player\n\n" << endl;
        endline(6);
        cout << "     Back : Escape \t \t \t \t                 Exit : E" << endl;

        int mode_input=0; //Here mode_input is the key pressed by the user on the game mode screen.

        while(1)
        {   mode_input=getch();
            if (mode_input==50) //If user presses "2", double player game will start.
            {
                system ("cls");
                string word,alphabet;
                int wrong_inputs=0; // It is used to count the wrong inputs.
                endline(7);
                cout << "\t\t\t     Please Enter A Word " << endl;
                cout << "\t\t\t    _____________________" << endl;
                cout << endl;
                cout << "\t \t \t          ";
                cin >> word; //Here the user enters the word which he wants to give to his opponent to guess.
                system ("cls");
                string asterick=""; // this string is declared to show the the hidden word in form of asterisks.
                int word_length=word.length(); //Here the integer word_length is equal to the length of the word.

                for (int i=0;i<word_length;i++)
                {
                    asterick=asterick+"*"; // This for loop stores the hidden word in the form of asterisks.
                }

                do
                {
                    endline(2);
                    cout << "\t\t\t\t Guess The Word" << endl;
                    cout << "\t \t \t\t________________" << endl;
                    cout << endl;
                    cout << "\t \t \t \t";
                    for (int space=11;space>word_length;space--)
                    {
                        cout << " "; // It is just for spacing.
                    }
                    cout << asterick; // It prints the hidden word in asterisks form.
                    cout << endl;
                    cout << endl;

                    int a_not_equal=0; //It is a counter used below to count wrong inputs.
                    int lives_remaining = 6-wrong_inputs; // This variable is used for remaining lives.
                    cout << endl;
                    cout << "\t\t\t       Lives Remaining = " << lives_remaining << endl; // It prints the remaining lives.
                    endline(3);
                    cout << "\t\t\t     Please Enter An Alphabet" << endl;
                    cout << "\t\t\t    __________________________" << endl;
                    cout << endl;
                    cout << "\t\t\t\t\t";
                    alphabet=getch(); // Here an alphabet is taken from the user.
                    endline(2);

                    for (int pieces=0;pieces<word_length;pieces++) //This loop checks whether the entered alphabet is correct or not.
                    {
                        string r = word.substr(pieces,1); // It breaks the hidden word into alphabetical pieces.
                        if (alphabet==r) // If the input alphabet matches with any of the piece following code runs.
                        {
                            system ("cls");
                            string o=asterick.replace(pieces,1,alphabet); // It replaces the initial asterisk word into uncoded asterisk word.
                        }
                        if (alphabet != r) // If the input alphabet does not matches with any of the piece following code runs.
                        {   system ("cls");
                            a_not_equal++;

                        }
                    }

                    if (a_not_equal==word_length)
                    {
                        wrong_inputs++; //It increases the wrong inputs which eventually decreases lives remaining in line 183.
                    }
                }
                while (wrong_inputs!=6 && asterick!=word); // This loop while ends when wrong input becomes equal to 6 or asterisk word equals to the input word.
                if (asterick==word) //If the uncoded asterisks word becomes equal to the input word following code runs.
                {   endline(9);
                    cout << "\t\t\t\t You Won" << endl;
                    cout << "\t\t\t\t_________" << endl;
                    _score++;
                    endline(12);
                    //PlaySound(TEXT("CONGRATS.wav"),NULL,SND_SYNC);
                    cout << "    Back To Main Menu : Escape \t \t \t \t    Exit Game : E" << endl;
                    int word_win_menu; // Here word_win_menu is the key pressed by the user on winning screen.
                    while(1)
                    {
                        word_win_menu=getch();
                        if(word_win_menu==27) //27 is the ASCII value of key ESC
                        {
                            system("cls");
                            goto start; // If user presses "Escape" key then, main menu screen will be displayed.
                        }
                        if(word_win_menu==101 || word_win_menu==69)
                        {
                            system("cls");
                            goto ending; // If user presses "E" or "e" key then, game will be closed.
                        }
                    }
                }
                if (wrong_inputs==6) //If the wrong input becomes equal to 6 following code runs.
                {  // PlaySound(TEXT("GAMEOVER.wav"),NULL,SND_SYNC); //It plays the audio of game over.
                    endline(9);
                    _score--;
                    cout << "\t\t\t\t You Lost" << endl;
                    cout << "\t\t\t\t__________" << endl;
                    endline(2);
                    //PlaySound(TEXT("SONG3.wav"),NULL,SND_SYNC); //This plays a funny audio if the user loses.
                    cout << "\t\t\tThe Word Was \"" << word << "\"" << endl;
                    endline(10);
                    cout << "    Back To Main Menu : Escape \t \t \t \t    Exit Game : E"  << endl;
                    int word_lose_menu; // Here "word_lose_menu" is the key pressed by the user on losing screen.
                    while(1)
                    {
                        word_lose_menu=getch();
                        if(word_lose_menu==27)
                        {
                            system("cls");
                            goto start; // If user presses "Escape" key then, main menu screen will be displayed.
                        }
                        if(word_lose_menu==101 || word_lose_menu==69)
                        {
                            system("cls");
                            goto ending; // If user presses "E" or "e" key then, game will be closed.
                        }
                    }
                }
            } // Here the If condition for double player ends.



            if (mode_input==49) //If the user selects the single player mode following code will run.
            {
                system ("cls");
                endline(7);
                cout << "\t \t \t   Please Select A Category"<< endl;
                cout << "\t \t \t  _______________________" << endl;
                endline(2);
                cout << "\t \t \t \t 1. Countries" << endl;
                cout  << endl;
                cout << "\t\t\t    2. Cities Of Pakistan" << endl;
                cout  << endl;
                cout << "\t \t \t \t 3. Animals" << endl;
                endline(6);
                cout << "     Back : Escape \t \t \t \t                 Exit : E" << endl;
                int category_input;

                while(1)
                {
                    category_input=getch();

                    if (category_input==49) // If user selects the category of "Countries" following code runs.
                    {   int wrong_input1=0; // It is used to count the wrong inputs. It is used in the next lines.
                        string alphabet1; //It is the alphabet which users inputs to guess the word.
                        system("cls");
                        srand(time(0)); // It is used for changing the random number on each try.
                        string countries[88]={"afghanistan","albania","algeria","anguilla","argentina","armenia","australia","austria","azerbaijan","bahrain","bangladesh","barbados","belgium","bermuda","bhutan","brazil","canada","chile","china","colombia","denmark","egypt","ethiopia","fiji","finland","france","georgia","germany","ghana","greece","guyana","hungary","iceland","india","indonesia","iran","iraq","italy","japan","jordan","kazakhstan","kenya","kuwait","lebanon","libya","madagascar","malaysia","maldives","malta","mexico","mongolia","morocco","namibia","nepal","nigeria","norway","oman","pakistan","panama","philippines","poland","portugal","qatar","romania","russia","serbia","singapore","somalia","spain","sudan","sweden","switzerland","syria","tajikistan","tanzania","thailand","netherlands","tunisia","turkey","turkmenistan","uganda","ukraine","uruguay","uzbekistan","venezuela","vietnam","yemen","zimbabwe"};
                        int rcountries = (rand()%88); // It generates random number between 1 to 88
                        string country = countries[rcountries]; //Here a random country is generated from array of countries.
                        string asterick1=""; // this string is declared to show the hidden country in form of asterisks.
                        int country_length=country.length(); // Here length of the country name is stored.

                        for (int i=0;i<country_length;i++)
                        {
                            asterick1=asterick1+"*"; // This for loop stores the hidden word in the form of asterisks.
                        }

                        do
                        {
                            endline(2);
                            cout << "\t\t\t\t Guess The Word" << endl;
                            cout << "\t \t \t\t________________" << endl;
                            cout << endl;
                            cout << "\t \t \t \t";
                            for (int space=9;space>country_length;space--)
                            {
                                cout << " "; // It is just used for spacing.
                            }
                            cout << asterick1; // It prints the hidden word in asterisks form.
                            cout << endl;
                            cout << endl;

                            int a_not_equal1=0;
                            int lives_remaining1 = 6-wrong_input1; // This variable is used for remaining lives.
                            cout << endl;
                            cout << "\t\t\t     Lives Remaining = " << lives_remaining1 << endl; // It displays the lives remaining
                            endline(3);
                            cout << "\t\t\t     Please Enter An Alphabet" << endl;
                            cout << "\t\t\t    __________________________" << endl;
                            cout << endl;
                            cout << "\t\t\t\t\t";
                            alphabet1=getch(); // Here an alphabet is taken from the user.
                            endline(2);

                            for (int pieces1=0;pieces1<country_length;pieces1++)
                            {
                                string r1 = country.substr(pieces1,1); // It breaks the hidden country into alphabetical pieces.
                                if (alphabet1==r1) // If the input alphabet matches with any of the piece following code runs.
                                {
                                    system ("cls");
                                    string o1=asterick1.replace(pieces1,1,alphabet1); // It replaces the initial asterisk word into uncoded asterisk word.
                                }
                                if (alphabet1 != r1) // If the input alphabet does not match with any of the piece following code runs.
                                {   system ("cls");
                                    a_not_equal1++;
                                }
                            }

                            if (a_not_equal1==country_length)
                            {
                                wrong_input1++; //It increases the wrong inputs which eventually decreases lives remaining in line 322.
                            }
                        }
                        while (wrong_input1!=6 && asterick1!=country); // This while loop ends when wrong input becomes equal to 6 or asterisk word equals to the input word.
                        if (asterick1==country) //If the uncoded asterisks word becomes equal to the given country following code runs.
                        {   endline(9);
                            cout << "\t\t\t\t You Won" << endl;
                            cout << "\t\t\t\t_________" << endl;
                            _score++;
                            endline(12);
                           // PlaySound(TEXT("CONGRATS.wav"),NULL,SND_SYNC);
                            cout << "    Back To Main Menu : Escape \t \t \t \t    Exit Game : E" << endl;
                            int country_win_menu; // Here country_win _input is the key pressed by the user on credits screen.
                            while(1)
                            {
                                country_win_menu=getch();
                                if(country_win_menu==27)
                                {
                                    system("cls");
                                    goto start; // If user presses "Escape" key then, main menu screen will be displayed.
                                }
                                if(country_win_menu==101 || country_win_menu==69)
                                {
                                    system("cls");
                                    goto ending; // If user presses "E" or "e" key then, game will be closed.
                                }
                            }
                        }
                        if (wrong_input1==6)  //If the wrong input becomes equal to 6 following code runs.
                        {   //PlaySound(TEXT("GAMEOVER.wav"),NULL,SND_SYNC);
                            endline(9);
                            _score--;
                            cout << "\t\t\t\t You Lost" << endl;
                            cout << "\t\t\t\t__________" << endl;
                            endline(2);
                            //PlaySound(TEXT("SONG3.wav"),NULL,SND_SYNC); //This function is used to generate sound if the user loses.
                            cout << "\t\t\tThe Word Was \"" << country << "\"" << endl;
                            endline(10);
                            cout << "    Back To Main Menu : Escape \t \t \t \t    Exit Game : E"  << endl;
                            int country_lose_menu; // Here country_lose_menu is the key pressed by the user on credits screen.
                            while(1)
                            {
                                country_lose_menu=getch();
                                if(country_lose_menu==27)
                                {
                                    system("cls");
                                    goto start; // If user presses "Escape" key then, main menu screen will be displayed.
                                }
                                if(country_lose_menu==101 || country_lose_menu==69)
                                {
                                    system("cls");
                                    goto ending; // If user presses "E" or "e" key then, game will be closed.
                                }
                            }
                        }
                        endline(2);
                    }

                    if (category_input==50) // All the code is same as the above loop for the countries.
                    {
                        int wrong_input2=0;
                        string alphabet2;
                        system("cls");
                        srand(time(0));
                        string cities[52]={"kotli","mirpur","muzaffarabad","rawalakot","lasbela","liari","loralai","mastung","ormara","panjgur","pasni","pishin","quetta","saindak","sibi","hunza","gilgit","skardu","shangrila","abbottabad","charsadda","chitral","malakand","mansehra","peshawar","swabi","swat","attock","bahawalpur","faisalabad","gujrat","kasur","lahore","mianwali","multan","murree","muzaffargarh","okara","panjgur","rawalpindi","sahiwal","sialkot","taxila","ghotki","hyderabad","karachi","larkana","nawabshah","shikarpur","sukkur","thatta","umarkot"};
                        int rcities = (rand()%52);
                        string city = cities[rcities]; // Here a random city is generated.
                        string asterick2="";
                        int city_length=city.length();

                        for (int i=0;i<city_length;i++)
                        {
                            asterick2=asterick2+"*";
                        }

                        do
                        {
                            endline(2);
                            cout << "\t\t\t\t Guess The Word" << endl;
                            cout << "\t \t \t\t________________" << endl;
                            cout << endl;
                            cout << "\t \t \t \t";
                            for (int space=9;space>city_length;space--)
                            {
                                cout << " ";
                            }
                            cout << asterick2;
                            cout << endl;
                            cout << endl;

                            int a_not_equal2=0;
                            int lives_remaining2 = 6-wrong_input2;
                            cout << endl;
                            cout << "\t\t\t     Lives Remaining = " << lives_remaining2 << endl;
                             endline(3);
                            cout << "\t\t\t     Please Enter An Alphabet" << endl;
                            cout << "\t\t\t    __________________________" << endl;
                            cout << endl;
                            cout << "\t\t\t\t\t";
                            alphabet2=getch();
                            endline(2);

                            for (int pieces2=0;pieces2<city_length;pieces2++)
                            {
                                string r2 = city.substr(pieces2,1);
                                if (alphabet2==r2)
                                {
                                    system ("cls");
                                    string o2=asterick2.replace(pieces2,1,alphabet2);
                                }
                                if (alphabet2 != r2)
                                {   system ("cls");
                                    a_not_equal2++;
                                }
                            }

                            if (a_not_equal2==city_length)
                            {
                                wrong_input2++;
                            }
                        }
                        while (wrong_input2!=6 && asterick2!=city);
                        if (asterick2==city)
                        {   endline(9);
                            cout << "\t\t\t\t You Won" << endl;
                            cout << "\t\t\t\t_________" << endl;
                            _score++;
                            endline(12);
                            //PlaySound(TEXT("CONGRATS.wav"),NULL,SND_SYNC); //It plays an audio on winning.
                            cout << "    Back To Main Menu : Escape \t \t \t \t    Exit Game : E" << endl;
                            int city_win_menu; // Here "a" is the key pressed by the user on credits screen.
                            while(1)
                            {
                                city_win_menu=getch();
                                if(city_win_menu==27)
                                {
                                    system("cls");
                                    goto start; // If user presses "Escape" key then, main menu screen will be displayed.
                                }
                                if(city_win_menu==101 || city_win_menu==69)
                                {
                                    system("cls");
                                    goto ending; // If user presses "E" or "e" key then, game will be closed.
                                }
                            }
                        }
                        if (wrong_input2==6)
                        {   //PlaySound(TEXT("GAMEOVER.wav"),NULL,SND_SYNC);
                            endline(9);
                            _score--;
                            cout << "\t\t\t\t You Lost" << endl;
                            cout << "\t\t\t\t__________" << endl;
                            endline(2);
                           //PlaySound(TEXT("SONG3.wav"),NULL,SND_SYNC); //This function is used to generate sound if the user loses.
                            cout << "\t\t\tThe Word Was \"" << city << "\"" << endl;
                            endline(10);
                            cout << "    Back To Main Menu : Escape \t \t \t \t    Exit Game : E"  << endl;
                            int city_lose_menu; // Here "a" is the key pressed by the user on credits screen.
                            while(1)
                            {
                                city_lose_menu=getch();
                                if(city_lose_menu==27)
                                {
                                    system("cls");
                                    goto start; // If user presses "Escape" key then, main menu screen will be displayed.
                                }
                                if(city_lose_menu==101 || city_lose_menu==69)
                                {
                                    system("cls");
                                    goto ending; // If user presses "E" or "e" key then, game will be closed.
                                }
                            }
                        }

                        endline(2);
                    } // End of countries loop.

                    if (category_input==51) // The code for whole loop is same as the previous loops.
                    {
                        int wrong_input3=0;
                        string alphabet3;
                        system("cls");
                        srand(time(0));
                        string animals[34] = {"baboon","bat","buffalo","bull","bear","rat","rabbit","cow","cat","chimpanzee","dolphin","dog","elephant","fox","giraffe","goat","horse","tiger","lion","panda","raccoon","owl","eagle","hen","cock","ostrich","raven","sheep","seagull","swan","turkey","vulture","zebra","yawk"};
                        int ranimals = (rand()%34);
                        string animal = animals[ranimals]; // Here a random animal name is generated.
                        string asterick3="";
                        int animal_length=animal.length();

                        for (int i=0;i<animal_length;i++)
                        {
                            asterick3=asterick3+"*";
                        }

                        do
                        {
                            endline(2);
                            cout << "\t\t\t\t Guess The Word" << endl;
                            cout << "\t \t \t\t________________" << endl;
                            cout << endl;
                            cout << "\t \t \t \t";
                            for (int space=9;space>animal_length;space--)
                            {
                                cout << " ";
                            }
                            cout << asterick3;
                            cout << endl;
                            cout << endl;

                            int a_not_equal3=0;
                            int lives_remaining3 = 6-wrong_input3;

                            cout << endl;
                            cout << "\t\t\t     Lives Remaining = " << lives_remaining3 << endl;
                            endline(3);
                            cout << "\t\t\t     Please Enter An Alphabet" << endl;
                            cout << "\t\t\t    __________________________" << endl;
                            cout << endl;
                            cout << "\t\t\t\t\t";
                            alphabet3=getch();
                            endline(2);
                            for (int pieces3=0;pieces3<animal_length;pieces3++)
                            {
                                string r3 = animal.substr(pieces3,1);
                                if (alphabet3==r3)
                                {
                                    system ("cls");
                                    string o3=asterick3.replace(pieces3,1,alphabet3);
                                }
                                if (alphabet3 != r3)
                                {
                                    system ("cls");
                                    a_not_equal3++;

                                }
                            }

                            if (a_not_equal3==animal_length)
                            {
                                wrong_input3++;
                            }
                        } // Here the loop for animals category ends
                        while (wrong_input3!=6 && asterick3!=animal);
                        if (asterick3==animal)
                        {
                            endline(9);
                            cout << "\t\t\t\t You Won" << endl;
                            cout << "\t\t\t\t_________" << endl;
                            _score++;
                            endline(12);
                            //PlaySound(TEXT("CONGRATS.wav"),NULL,SND_SYNC);
                            cout << "    Back To Main Menu : Escape \t \t \t \t    Exit Game : E" << endl;
                            int animal_win_menu; // Here "a" is the key pressed by the user on credits screen.
                            while(1)
                            {
                                animal_win_menu=getch();
                                if(animal_win_menu==27)
                                {
                                    system("cls");
                                    goto start; // If user presses "Escape" key then, main menu screen will be displayed.
                                }
                                if(animal_win_menu==101 || animal_win_menu==69)
                                {
                                    system("cls");
                                    goto ending; // If user presses "E" or "e" key then, game will be closed.
                                }
                            }
                        }
                        if (wrong_input3==6)
                        {   //PlaySound(TEXT("GAMEOVER.wav"),NULL,SND_SYNC);
                            endline(9);
                            _score--;
                            cout << "\t\t\t\t You Lost" << endl;
                            cout << "\t\t\t\t__________" << endl;
                            endline(2);
                            //PlaySound(TEXT("SONG3.wav"),NULL,SND_SYNC); //This function is used to generate sound if the user loses.
                            cout << "\t\t\tThe Word Was \"" << animal << "\"" << endl;
                            endline(10);
                            cout << "    Back To Main Menu : Escape \t \t \t \t    Exit Game : E"  << endl;
                            int animal_lose_menu; // Here "a" is the key pressed by the user on credits screen.
                            while(1)
                            {
                                animal_lose_menu=getch();
                                if(animal_lose_menu==27)
                                {
                                    system("cls");
                                    goto start; // If user presses "Escape" key then, main menu screen will be displayed.
                                }
                                if(animal_lose_menu==101 || animal_lose_menu==69)
                                {
                                    system("cls");
                                    goto ending; // If user presses "E" or "e" key then, game will be closed.
                                }
                            }
                        }
                        endline(2);
                    } // // Here the If condition for animals category ends

                    if(category_input==27) // If user presses "Escape" key, following code runs.
                    {
                        system("cls");
                        goto checkpoint2; // Game is redirected to checkpoint point 2.
                    }

                    if(category_input==101 || category_input==69) // If user presses "E" or "e" key, following code runs.
                    {
                        system("cls");
                        goto ending; // Game ends.
                    }
                }


            }

            if(mode_input==27)
            {
                system("cls");
                goto start;
            }

            if(mode_input==101 || mode_input==69)
            {
                system("cls");
                goto ending;
            }


        }


    }
    ending:
        //File Handling for HighScore Starts here.
        ifstream readfile_username;
    readfile_username.open("USERNAME.txt"); //creates the user name text file
    if(readfile_username.is_open())
    {
        while(!readfile_username.eof())
        {
            readfile_username >> _old_username; // Saves the user name in text file
        }
    }
    readfile_username.close();
    ofstream writefile_username("USERNAME.txt"); //It is used to write the text file
     if(writefile_username.is_open())
    {
        if(_score > _highscore)
        {
            _old_username = _username; // score is replaced by current player score if the score is greater than the previous high score
        }
        writefile_username << _old_username;
    }
    writefile_username.close();
    ifstream readfile; // It is used here for file handling.
    readfile.open("HighScore.txt"); // It creates a text file to store highest score.

    if(readfile.is_open())
    {
        while(!readfile.eof())
        {
            readfile >> _highscore; // It saves the highest score in text file.
        }
    }

    readfile.close();
    ofstream writefile("HighScore.txt"); //ofstream writes the text file

    if(writefile.is_open())
    {
        if(_score > _highscore)
        {
            _highscore = _score; //if the score of player is greater than the previous highest score it is replaced by the current score.
        }
        writefile << _highscore;
    }
    writefile.close();
    if (main_menu_input==51)
    {   endline(2);
       // cout << "\t \t \t \t"; //Score Of " << username << " is " << games_won << endl;
        ifstream reading("HighScore.txt"); // Reading From File
        reading.getline(arr1,100); //Copying the text HighScore.txt  to the array, arr1
        ifstream reading1("USERNAME.txt");
        reading1.getline(arr2,100); // copying the text from USERNAME.txt to the array, arr2
        //DISPLAY of high score starts here
        cout << "\t \t \t \t Highest Score" << endl;
        cout << "\t \t\t\t_______________" << endl;
        endline(1);
        cout << "\t \t \t   Player Name: " << arr2 << endl;
        cout << "\t \t \t \t  Score: " << arr1 << endl;
        endline(3);
       // cout << "\t \t \t \t";
        cout << "\t\t\t      Your Current Score " << endl;
        cout << "\t\t\t     ____________________" << endl;
        endline(1);
        cout << "\t\t\t\t      " << _score << endl;
        endline(2);
        cout <<"\t \t\t\t     Key" << endl;
        cout <<"\t\t\t\t    _____" << endl;
        endline(1);
        cout << "\t \t\t\t On Winning: +1" << endl;
        cout << "\t \t\t\t On Losing: -1" << endl;
        endline(2);
        cout << "     Back : Escape \t \t \t \t                 Exit : E" << endl;
        int high_score_menu; // Here "a" is the key pressed by the user on credits screen.
        while(1)
        {
            high_score_menu=getch();
            if(high_score_menu==27)
            {
                system("cls");
                goto start; // If user presses "Escape" key then, main menu screen will be displayed.
            }
            if(high_score_menu==101 || high_score_menu==69)
            {
                system("cls");
                return 0; // If user presses "E" or "e" key then, game will be closed.
            }
        }

    }


    return 0;
}

