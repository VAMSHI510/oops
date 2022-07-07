// CPPGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<Windows.h>
#include<conio.h>
#include <iostream>
#include<stdlib.h>
#include<random>
#include<cstdlib>
#include<ctime>
using namespace std;


    void GameRules()
    {
        cout << "Welcome To 2 Player Battle Gmame:\n" << "Rules:\n";
        cout << "1) Each Player Has Only One Turn At A Time \n" << "2) Each Player Has Diffrent Damages, Heals,Additional Damage And Special Ability.\n";
        cout << "NOTE: Each Special Ability Has 20% Watching \n";
        cout << "3) The one's Health Is Below 0, Will Diw And Loose The Game" << "4) Player Can Have Two Options In Its Turn, Either To Damage Other Player or To Heal You \n";
        cout << "5) Press H To Heal And D To Damage \n" << endl;
        cout << "There Are Three Types Of PlayerbIn Our Game \n" << endl;
        cout << "1) Powerfull Player - Has ---> High Health, Avag Heal, Low Base Damage, High Additional Damage ...:) \n" << "   Special Ability-Hug Heal(Heals Higher HP!) \n" << "   Double Attack!(Attacks Two Times In Single Turn) \n" << endl;
        cout << "2) SkillFull Player -Has----> Avag Health, High Heal, Avag Base Damage, Avag Additional Damage ...:) \n" << "   Special Ability-Attack Blocker(take 0 Damage SomeTimes) \n" << "   Heal + DAmage... In Single Turn! \n" << endl;
        cout << "3) Raged Player - Has----> Low Health, Very High Heal, High Base Damage, very Additional Damage..) \n" << "   Specail Abality(depended on Health) - Range(Damage Increases When Close To Death!) \n" << "   High Chances For Critical Hit \n" << endl;

    }

    bool Player1isPlaying;
    int player1, player2;
    char PlayerAction;
    char Restart;

    enum PlayerType
    {
        Powerful_Player,
        Skillful_Player,
        Raged_Player,

    };

    //PlayerType Player1;
    //PlayerType Player2;


class Player
{
    int Health; 
    int Base_Damage, Min_Additional_Damage, Max_Additional_Damage;
    int Min_Heal_Capacity, Max_Heal_Capacity;
    int Choice;
        
    Player() {
    int health = 195;
    int base_damage = 25;
    int min_additional_damage = 7;
    int max_Additional_damage = 17;
    int min_healing_capacity = 3;
    int max_healing_capacity = 15;
            int Choice;
            //Player *p;
            //PowerfullPlayer *pf,p;
            //pf = &p;
            cout << " Hey Player 1: Select Type Of The Player That You Want To Choose ---|)\n" << endl;
            cout << " Enter 1 for Powerful Player, 2 Skillful Player for And 3 for Raged Player\n";
            cin >> player1;      
            switch (player1)
            {
            case 1:
            {
                cout << " \nHealth is :\n" << Health << " Base Damage is : \n" << Base_Damage << " Additional Damage Is : \n" << Min_Additional_Damage << "-" << Max_Additional_Damage << " and Healing Capacity is : \n" << Min_Heal_Capacity << "-" << Max_Heal_Capacity;
                break;
            }

            case 2:
            {
                cout << " \n Hi I am Skillful Player, Thanks for Selecting me...I am Master of Dodging and Attacking Back..Let our Victory Make Noise Mate!\n" << endl;
                cout << " player health is : 175\n" << " Base Damage is : 45\n" << " Additional DAmage Is : 7 - 13\n" << " and Healing Capacity is : 5 - 15\n" << endl;
                break;

            }

            case 3:
            {
                cout << " \nHi I am Raged Player, Thanks for Selecting me...I have burning fire in my eyes,, you just dont worry I will cut down the opposition..\n" << endl;
                cout << " Player health is : 75\n" << "Base Damage is : 45\n" << "Additional Damage is : 9 - 23\n" << "and Healing Capacity is : 40 - 55\n" << endl;
                break;
            }
            default:
            {
                cout << " Don't Do Wrong Things--||)\n"<<" Choose Write Things Only\n" << endl;
                Player();
            }
                
                    
            }
        }
     virtual void Player2()
     {
           cout << " \n Hey Player 2: Select Type Of The Player That You Want To Choose Except The Player Selected By Player1---|)\n" << endl;
           cout << " Enter 1 for Powerful Player, 2 Skillful Player for And 3 for Raged Player\n"<<endl;
           cin >> player2;

           if (player1 == player2)
           {
               cout << "Choose The Player Which Is Not Choosen By Player1";
              Player2();
           }
           
               switch (player2)
               {
               case 1:
               {
                   cout << " Entering 1 For Powerful Player\n" << endl;
                   cout << " player health is : 195\n"<< " Base Damage is : 25\n" << " Additional Damage Is : 7 - 17\n" << " and Healing Capacity is : 3 - 15\n";
                   break;
               }

               case 2:
               {
                   cout << " \n Hi I am Skillful Player, Thanks for Selecting me...I am Master of Dodging and Attacking Back..Let our Victory Make Noise Mate!\n" << endl;
                   cout << " player health is : 175\n" << " Base Damage is : 45\n" << " Additional DAmage Is : 7 - 13\n" << " and Healing Capacity is : 5 - 15\n" << endl;
                   break;

               }

               case 3:
               {
                   cout << " \nHi I am Raged Player, Thanks for Selecting me...I have burning fire in my eyes,, you just dont worry I will cut down the opposition..\n" << endl;
                   cout << " Player health is : 75\n" << "Base Damage is : 45\n" << "Additional Damage is : 9 - 23\n" << "and Healing Capacity is : 40 - 55\n" << endl;
                   break;
               }
               default:
               {
                   cout << " Enter Valid Input" << " Don't Do Wrong Things--||)";
                   cout << " Don't Do Wrong Things\n" << endl << " Choose right Things Only" << endl;
                   Player2();
                   break;
               }
               }
           }
        
     
};

class PowerfullPlayer :public Player
{

};





int main()
{
    //srand(time(0));

   //for (int i = 0; i < 1; i++)
       //cout << rand()%10+5 << " \n";
    
  
  
    //char Player;
    Player p;
    p.Player2();
    cout << "Nice get ready both of you!! Player 1 will go first.. \n" << endl << "Player 1 Playing:  Press D to deal damage or H to heal yourself\n";
    //Player();
   /* enum Gender { Male, Female };

    // Creating Gender type variable
    Gender gender = Male;

    switch (gender)
    {
    case Male:
        cout << "Gender is Male";
        break;
    case Female:
        cout << "Gender is Female";
        break;
    default:
        cout << "Value can be Male or Female";
    }
    return 0;
    */
    //GameRules();
   // if (Player == 'H' || Player == 'h')
    //{
        //cin >>Player;
        //cout << "oops";
        //getchar();
        Sleep(20);
    //}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
