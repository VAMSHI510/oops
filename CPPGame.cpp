#include<Windows.h>
#include<conio.h>
#include <iostream>
#include<stdlib.h>
#include<random>
#include<cstdlib>
#include<ctime>
#include<stdio.h>
using namespace std;


    void GameRules()
    {
        cout << "Welcome To 2 Player Battle Gmame:\n" << "Rules:\n";
        cout << "1) Each Player Has Only One Turn At A Time \n" << "2) Each Player Has Diffrent Damages, Heals,Additional Damage And Special Ability.\n";
        cout << "NOTE: Each Special Ability Has 20% Watching \n";
        cout << "3) The one's Health Is Below 0, Will Diw And Loose The Game" << "4) Player Can Have Two Options In Its Turn, Either To Damage Other Player or To Heal You \n";
        cout << "5) Press H To Heal And D To Damage \n" << endl;
        cout << "There Are Three Types Of Players In Our Game \n" << endl;
        cout << "1) The_Warrior - Has ---> High Health, Avag Heal, Low Base Damage, High Additional Damage ...:) \n" << "   Special Ability-Hug Heal(Heals Higher HP!) \n" << "   Double Attack!(Attacks Two Times In Single Turn) \n" << endl;
        cout << "2) The_Samurai -Has----> Avag Health, High Heal, Avag Base Damage, Avag Additional Damage ...:) \n" << "   Special Ability-Attack Blocker(take 0 Damage SomeTimes) \n" << "   Heal + DAmage... In Single Turn! \n" << endl;
        cout << "3) The_Spartans - Has----> Low Health, Very High Heal, High Base Damage, very Additional Damage..) \n" << "   Specail Abality(depended on Health) - Range(Damage Increases When Close To Death!) \n" << "   High Chances For Critical Hit \n" << endl;

    }

    bool Player1isPlaying;
    bool player;
    //int player1, player2;
    //int choice;
    
    int Player_I;
    int Player_II;
    char Choice;
    char PlayerAction;
    char Restart;

    enum PlayerType
    {
        The_Warrior=1,
        The_Samurai=2,
        The_Spartans=3,

    };

    PlayerType player1, player2;
    //PlayerType Player2;
  
class Player
{
protected:
   // int Health; 
    //int Base_Damage, Min_Additional_Damage, Max_Additional_Damage;
   // int Min_Heal_Capacity, Max_Heal_Capacity;
   // int Choice;
    virtual void Damage() = 0;
    virtual void Heal() = 0;

    //void Rock();
       
        
     
};
class Warrior :public Player
{
public:
    int Halth = 195;
    int Base_Damage = 25;
    int Min_Additional_Damage = 7;
    int Max_Additional_Damage = 17;
    int Min_Healing_Capacity = 3;
    int Max_Healing_Capacity = 15;
    int Random;
    int random;
    int halth;
    //Spartans s;
    //int random;
//public:
    friend class implement;
    friend void Action();
      
    void Rock() {
        //srand(time(0));
        //int random = rand() % 11 + 7;
        //cout << random;
    }
   

    void Damage()
     {
        halth = Halth;
        random = rand() % 11 + 7;
        //helth -= Base_Damage;
        //cout << "Health after Damge is:" << helth << "\n";
        //cout << "The aditional Damage Amount is\n" << random;
        //helth -= random;
        //Helth = helth;
        Random=random;

       //cout << "health after Damage is:"<<helth<<"\n";
        //cout << "Additional_Damage Amount is: " << Random << "\n";
        halth -= Random;
        Halth = halth;
        /*if (ch == 3 && choice == 1) {
            //cout << "Heal Amount is\n" << PowerfullPlayer::Random;
            //cout << "The total Heal of PowerFullPlayer is\n" << b.Health;
            //char d;
            //int health = Helth;
            //char Choice;
            srand(time(0));

            helth = Helth;
            random = rand() % 11 + 7;
            helth -= Base_Damage;
            cout << "Health after Damge is:" << helth << "\n";
            cout << "The aditional Damage Amount is\n" << random;
            helth -= random;
            Helth = helth;
            //Random=random;

           //cout << "health after Damage is:"<<health<<"\n";
            //cout << "Additional_Damage Amount is: " << random << "\n";
            //health -= random;
            //Helth = health;


            cout << "The total Damage of The_Warrior is: " << Helth << "\n";


        }*/
    }

    
    void Heal()
    {
        int Heal = Halth;
        srand(time(0));
        Random = rand() % 13 + 3;
        cout << "Heal Amount is: " << Random<<"\n";
        Heal = Halth+Random;
        Halth = Heal;
        cout << "The total Health after heal of The_Warrior is: " << Halth<<"\n";
       

    }
};
class Samurai:public Warrior
{
    //Spartans s;
    //Samurai *w = &s;
    int Health = 175;
    int Base_Damage = 45;
    int Min_Additional_Damage = 7;
    int Max_Additional_Damage = 13;
    int Min_Healing_Capacity = 5;
    int Max_Healing_Capacity = 15;
    int random;
    int Random;
    int health;
    //char choice;
    friend class implement;
    friend class Spartans;
    friend void Action();
public:
    void Heal()
    {
        int Heal = Health;
        srand(time(0));
        int Random = rand() % 11 + 5;
        cout << "Heal Amount is: " << Random<<"\n";
        Heal = Health + Random;
        Health = Heal;
        cout << "The total Heal of Sumurai is: " << Health<<"\n";
        

    }
    void Damage()
    {
        health = Health;
        random = rand() % 7 + 7;
       // helth -= Base_Damage;
        //cout << "Health after Damge is:" << helth << "\n";
        //cout << "The aditional Damage Amount is\n" << random;
        //helth -= random;
        Health = health;
        Random = random;

        //cout << "health after Damage is:"<<helth<<"\n";
         //cout << "Additional_Damage Amount is: " << Random << "\n";
        //helth -= Random;
       // Helth = helth;
        //int health;
           // srand(time(0));
              //random = rand() % 7 + 7;
               
               /* if (ch == 1 && choice == 2)
                {
                    health = Health;
                    health -= Warrior::Base_Damage;
                    random = rand() % 11 + 7;
                    cout << "Health after Damge is: " << health << "\n";
                    srand(time(0));
                    cout << "The aditional Damage Amount is: " << random << "\n";
                    health -= random;
                    Health = health;
                    cout << "health after Aditional Damage is: " << Health << "\n" << endl;
                }
                if (ch == 2 && choice == 1)
                {
                    helth = Helth; 
                    //int helth;
                    //helth = Helth;
                    helth -= Base_Damage;
                    random = rand() % 7 + 7;
                    cout << "Health after Damge is: " << helth << "\n";
                    srand(time(0));
                    cout << "The aditional Damage Amount is: " << random << "\n";
                    helth -= random;
                    Helth = helth;
                    cout << "health after Aditional Damage is: " << Helth << "\n" << endl;
                }
               
                //if (Health <= 0)
                     //!Player1isPlaying;
                    //cout << "Game Over\n" << endl;
                //}*/
               

            

    }
        
};
class Spartans:protected Samurai
{
  public:
    int Helth = 95;
    static const int Base_Damage = 15;
    int Min_Additional_Damage = 9;
    int Max_Additional_Damage = 23;
    int Min_Healing_Capacity = 40;
    int Max_Healing_Capacity = 55;
    int random;
    int Random;
    int helth;

    friend class Samurai;
    friend class implement;
    friend void Action();
public:
    void Heal()
    {
        int Heal = Helth;
        srand(time(0));
        
            Random = rand() % 16 + 40;
            cout << "Heal Amount is: " << Random<<"\n";
            Heal += Random;
            Helth = Heal;
            cout << "The total Health after Heal of Spartans is: " << Helth<<"\n";
        

    }
    void Damage()
    {
          //int Samurai::health = Health;
       /* srand(time(0));
            int Random = rand() % 15 + 9;
            health -= Base_Damage;
            cout << "Health after Damge is: " << health << "\n";
            health -= Random;
            Health = health;
            */
        
           /*if (ch == 3 && choice == 2)
            {
        
            health = Health;
            health -= Base_Damage;
            srand(time(0));
            random = rand() % 15 + 9;
            cout << "The Health After Base Damage is: " << health << "\n";
            health -= random;
            Health = health;
            cout << "The aditional Damage Amount is: " << random << "\n";
            cout << "health after Aditional Damage is: " << Health << "\n";
        
            }
           else if (ch == 1 && choice == 3)
           {
               helth = Helth;
               helth -= Warrior::Base_Damage;
               srand(time(0));
               random = rand() % 11 + 7;
               cout << "The Health After Base Damage is: " << helth << "\n";
               helth -= random;
               Helth = helth;
               cout << "The aditional Damage Amount is: " << random << "\n";
               cout << "health after Aditional Damage is: " << Helth << "\n";


           }
           else if (ch == 2 && choice == 3)
           {
               helth = Helth;
               helth -= Samurai::Base_Damage;
               srand(time(0));
               random = rand() % 7 + 7;
               cout << "The Health After Base Damage is: " << helth << "\n";
               helth -= random;
               Helth = helth;
               cout << "The aditional Damage Amount is: " << random << "\n";
               cout << "health after Aditional Damage is: " << Helth << "\n";


           }

            //if (Samurai::Health <= 0 && Spartans::Helth<=0)
            //{
              // Player1isPlaying = false;
                //cout << "Game Over\n" << endl;
            //}*/
        
        
    }
    void Sock()
    {
        while (health>0)
        {
            Damage();
        }
    }

   
    
};

class implement :public Warrior,public Samurai,public Spartans
{
public:
    
    void Player1()
    {
        //Player1isPlaying;
        //!player;
        cout << " Hey Player_1: Select Type Of The Player That You Want To Choose ---|)\n" << endl;
        cout << " Enter 1 for The_Warrior, 2 Samurai for And 3 for Spartans\n";
        cin >> Player_I;
        PlayerType player1 = static_cast<PlayerType>(Player_I);
        Player1isPlaying = true;
        
        switch (player1)
        {
        case 1:
        {
            cout << "Hey I am The_Warrior, Thanks for Choosing me, ... I Masterd In Giving Power punch\n";
            player1 = The_Warrior;
            cout << " Player Health is :" << Warrior::Halth << "\n" << " Base Damage is : " << Warrior::Base_Damage << "\n" << " Additional Damage Is : " << Warrior::Min_Additional_Damage << "-" << Warrior::Max_Additional_Damage << "\n" << " and Healing Capacity is : " << Warrior::Min_Healing_Capacity << "-" << Warrior::Max_Healing_Capacity<<"\n";
            //Player2();
            break;
        }

        case 2:
        {
            player1 = The_Samurai;
            cout << " \n Hi I am Samurai, Thanks for Selecting me...I am Master of Dodging and Attacking Back..Let our Victory Make Noise Mate!\n" << endl;
            cout << " Player Health is :" << Samurai::Health << "\n" << " Base Damage is : " << Samurai::Base_Damage << "\n" << " Additional Damage Is : " << Samurai::Min_Additional_Damage << "-" << Samurai::Max_Additional_Damage << "\n" << " and Healing Capacity is : " << Samurai::Min_Healing_Capacity << "-" << Samurai::Max_Healing_Capacity<<"\n";
            //Player2();
            //cout << " player health is : 175\n" << " Base Damage is : 45\n" << " Additional DAmage Is : 7 - 13\n" << " and Healing Capacity is : 5 - 15\n" << endl;
            break;

        }

        case 3:
        {
            player1 = The_Spartans;
            cout << " \nHi I am Spartans, Thanks for Selecting me...I have burning fire in my eyes,, you just dont worry I will cut down the opposition..\n" << endl;
            cout << " Player Health is :" << Spartans::Helth << "\n" << " Base Damage is : " << Spartans::Base_Damage << "\n" << " Additional Damage Is : " << Spartans::Min_Additional_Damage << "-" << Spartans::Max_Additional_Damage << "\n" << " and Healing Capacity is : " << Spartans::Min_Healing_Capacity << "-" << Spartans::Max_Healing_Capacity<<"\n";
            //Player2();
            // cout << " Player health is : 75\n" << "Base Damage is : 45\n" << "Additional Damage is : 9 - 23\n" << "and Healing Capacity is : 40 - 55\n" << endl;
            break;
        }
        default:
        {
            cout << "You Choosen Wrong one" << " Don't Do Wrong Things--||)\n" << " Choose Write Things Only\n" << endl;
            cin.clear();
            cin.ignore();
            Player1();
            //cin.clear();
            //Player1();
           // cin.ignore();
            break;
        }
      
        }
        //Player1();
    }
    

    void Player2()
    {
        //int choice;
        !Player1isPlaying;
        cout << " Hey Player_2: Select Type Of The Player That You Want To Choose ---|)\n" << endl;
        cout << " Enter 1 for The_warrior, 2 Samurai for And 3 for Spartans\n";
        cin >> Player_II;
        PlayerType player2 = static_cast<PlayerType>(Player_II);
       // Player1isPlaying;
        switch (player2)
        {
        case 1:
        {
            player2 = The_Warrior;
            cout << "Hey I am The_Warrior, Thanks for Choosing me, ... I Masterd In Giving Power punch\n";
            cout << " Player Health is :" << Warrior::Halth << "\n" << " Base Damage is : " << Warrior::Base_Damage << "\n" << " Additional Damage Is : " << Warrior::Min_Additional_Damage << "-" << Warrior::Max_Additional_Damage << "\n" << " and Healing Capacity is : " << Warrior::Min_Healing_Capacity << "-" << Warrior::Max_Healing_Capacity<<endl;
            break;
        }

        case 2:
        {
            player2 = The_Samurai;
            cout << " \n Hi I am Samurai, Thanks for Selecting me...I am Master of Dodging and Attacking Back..Let our Victory Make Noise Mate!\n" << endl;
            cout << " Player Health is :" << Samurai::Health << "\n" << " Base Damage is : " << Samurai::Base_Damage << "\n" << " Additional Damage Is : " << Samurai::Min_Additional_Damage << "-" << Samurai::Max_Additional_Damage << "\n" << " and Healing Capacity is : " << Samurai::Min_Healing_Capacity << "-" << Samurai::Max_Healing_Capacity<<endl;
            //cout << " player health is : 175\n" << " Base Damage is : 45\n" << " Additional DAmage Is : 7 - 13\n" << " and Healing Capacity is : 5 - 15\n" << endl;
            break;

        }

        case 3:
        {
            player2 = The_Spartans;
            cout << " \nHi I am Spartans, Thanks for Selecting me...I have burning fire in my eyes,, you just dont worry I will cut down the opposition..\n" << endl;
            cout << " Player Health is :" << Spartans::Helth << "\n" << " Base Damage is : " << Spartans::Base_Damage << "\n" << " Additional Damage Is : " << Spartans::Min_Additional_Damage << "-" << Spartans::Max_Additional_Damage << "\n" << " and Healing Capacity is : " << Spartans::Min_Healing_Capacity << "-" << Spartans::Max_Healing_Capacity<<endl;
            // cout << " Player health is : 75\n" << "Base Damage is : 45\n" << "Additional Damage is : 9 - 23\n" << "and Healing Capacity is : 40 - 55\n" << endl;
            break;
        }
        default:
        {
            cout << "You Choosen Wrong One"<< "Don't Do Wrong Things--||)\n" << " Choose Write Things Only\n" << endl;
             cin.clear();
             cin.ignore();
            Player2();
            break;
        }


        }
    }
  
    
    //Player_1:
    void Action()
    {
       // Player_Change();

        //int player_1;

       
        //Player1isPlaying;
       // PlayerType player1 = static_cast<PlayerType>(player_1);
        cout << "oh Good PLay is Starting \n";
        cout << "Player1 is Taking First Turn\n" << endl;

        do
        {
            Player1isPlaying;
            //Player_Change();
            //player;
            //while (PowerfullPlayer::Health != 0 || ) {
            cout << "Enter D for Damage" << "||" << "H for Heal\n";
            cin >> Choice;
            //Player_Change();
            if (Warrior::Halth >= 195 && Samurai::Health >= 175 && Spartans::Helth >= 95 && Choice == 'h' && player1 == Player1isPlaying && player2 == !Player1isPlaying)
            {
                cout << "You are All Right Health is full No Need To Heal\n";
                Action();
            }
            else if (Choice == 'd')
            {
                if (Player_I == 1 && Player_II == 2 && player1 == Player1isPlaying && player2 == !Player1isPlaying)
                {
                    cout << "Player1's Turn\n";
                    Samurai::health = Samurai::Health;
                    srand(time(0));
                    Warrior::random = rand() % 11 + 7;
                    Samurai::health -= Warrior::Base_Damage;
                    cout << "Health after Damge is:" << Samurai::health << "\n";
                    Samurai::health -= Warrior::random;
                    Samurai::Health = Samurai::health;
                    Warrior::Random = Warrior::random;
                    cout << " Aditional Damage Amount Is:" << Warrior::Random << "\n";

                    cout << "health after Damage is:" << Samurai::health << "\n";
                    cout << endl;
                    Player_Change();
                    // goto Player_II;
                }
                else if (Player_I == 1 && Player_II == 3 && player1 == Player1isPlaying && player2 == !Player1isPlaying)
                {
                    Spartans::helth = Spartans::Helth;
                    srand(time(0));
                    Warrior::random = rand() % 11 + 7;
                    Spartans::helth -= Warrior::Base_Damage;
                    cout << "Health after Damge is:" << Spartans::helth << "\n";
                    Spartans::helth -= Warrior::random;
                    Spartans::Helth = Spartans::helth;
                    Warrior::Random = Warrior::random;

                    cout << " Aditional Damage Amount Is:" << Warrior::Random << "\n";
                    cout << "health after Damage is:" << Spartans::helth << "\n" << endl;

                    // cout << "Now Player 2 Taking Its Turn\n" << endl;

                     //Spartans::Damage();
                }

                else if (Player_I == 2 && Player_II == 1 && player1 == Player1isPlaying || player2 == !Player1isPlaying)
                {
                    Warrior::halth = Warrior::Halth;
                    srand(time(0));
                    Samurai::random = rand() % 7 + 7;
                    Warrior::halth -= Samurai::Base_Damage;
                    cout << "Health after Damge is:" << Warrior::halth << "\n";
                    Warrior::halth -= Samurai::random;
                    Warrior::Halth = Warrior::halth;
                    Samurai::Random = Samurai::random;

                    cout << " Aditional Damage Amount Is:" << Samurai::Random << "\n";
                    cout << "health after Damage is:" << Warrior::halth << "\n";

                    //cout << "Now Player 2 Taking Its Turn\n" << endl;
                    //Samurai::Damage();
                }
                else if (Player_I == 2 && Player_II == 3 && player1 == Player1isPlaying && player2 == !Player1isPlaying)
                {
                    Spartans::helth = Spartans::Helth;
                    srand(time(0));
                    Samurai::random = rand() % 7 + 7;
                    Spartans::helth -= Samurai::Base_Damage;
                    cout << "Health after Damge is:" << Spartans::helth << "\n";
                    Spartans::helth -= Samurai::random;
                    Spartans::Helth = Spartans::helth;
                    Samurai::Random = Samurai::random;

                    cout << " Aditional Damage Amount Is:" << Samurai::Random << "\n";
                    cout << "health after Damage is:" << Spartans::helth << "\n";

                    //  cout << "Now Player 2 Taking Its Turn\n" << endl;
                      //Spartans::Damage();
                }

                else if (Player_I == 3 && Player_II == 1 && player1 == Player1isPlaying && player2 == !Player1isPlaying)
                {
                    Warrior::halth = Warrior::Halth;
                    srand(time(0));
                    Spartans::random = rand() % 15 + 9;
                    Warrior::halth -= Spartans::Base_Damage;
                    cout << "Health after Damge is:" << Warrior::halth << "\n";
                    Warrior::halth -= Spartans::random;
                    Warrior::Halth = Warrior::halth;
                    Spartans::Random = Spartans::random;

                    cout << " Aditional Damage Amount Is:" << Spartans::Random << "\n";
                    cout << "health after Damage is:" << Warrior::halth << "\n";

                    // cout << "Now Player 2 Taking Its Turn\n" << endl;
                     //Warrior::Damage();
                }
                else if (Player_I == 3 && Player_II == 2 && player1 == Player1isPlaying && player2 == !Player1isPlaying)
                {
                    Samurai::health = Samurai::Health;
                    srand(time(0));
                    Spartans::random = rand() % 11 + 7;
                    Samurai::health -= Spartans::Base_Damage;
                    cout << "Health after Damge is:" << Samurai::health << "\n";
                    Samurai::health -= Spartans::random;
                    Samurai::Health = Samurai::health;
                    Spartans::Random = Spartans::random;
                    cout << " Aditional Damage Amount Is:" << Spartans::Random << "\n";
                    cout << "health after Damage is:" << Samurai::health << "\n";

                    // cout << "Now Player 2 Taking Its Turn\n" << endl;
                     // Spartans::Damage();
                }
            }


                //else if (Player1isPlaying && SkillfullPlayer::health <= 0)
                    //|| SkillfullPlayer::Health <= 0|| RagedPlayer::Health <= 0)
                 //{
                     //cout << "Game over\n" << "Player2 won the Game\n";
                 //}
                else
                {
                    cout << "Select Right Option To Play With 1'st Player\n";
                    //Action();
                    //Player_Change();
                    //!Player1isPlaying;
                   // cout << "Player1 is Won The Game\n" << endl;
                }
                

                if (Choice == 'h' && Player_I == 1 && (Player_II == 2 || Player_II == 3) && player1 == Player1isPlaying && player2 == !Player1isPlaying)
                {

                Warrior::Heal();
                }
                else if (Choice == 'h' && Player_I == 2 && Player_II == 1 || Player_II == 3 && player1 == Player1isPlaying && player2 == !Player1isPlaying)
                {

                    Samurai::Heal();
                }

                else if (Choice == 'h' && Player_I == 3 && Player_II == 1 || Player_II == 2 && player1 == Player1isPlaying && player2 == !Player1isPlaying)
                {
                    Spartans::Heal();
                }


                if (Player_I == 1 && Player_II == 2 && Samurai::Health <= 0)
                {

                    cout << "Woww Player 1 Is Won\n";
                }




                //else if(Choice == 'h' && ch == 1)
                //{
                  //  PowerfullPlayer::Heal();
                    //cout << "wrong number chosse right one";
                //1}

            
        }
        while (Spartans::Helth > 0 && Warrior::Halth > 0 && Samurai::Health > 0);

        }
       // while (Spartans::Helth > 0 && Warrior::Halth > 0 && Samurai::Health > 0);
            //}

            
           void Player_Change()
           {
              // Player_II:
           // while (Player_I == 1 && Player_II == 2 && Samurai::Health > 0 || Warrior::Halth > 0)
               /*while (Warrior::Halth > 0 && Samurai::Health > 0)
               {
                   if (Choice == 'd' && Player_I == 1 && Player_II == 2) {
                       cout << "Now Player 2 Taking Its Turn\n" << endl;
                       cout << "Enter D for Damage" << "||" << "H for Heal\n";
                       cin >> Choice;
                       Warrior::halth = Warrior::Halth;
                       srand(time(0));
                       Samurai::random = rand() % 7 + 7;
                       Warrior::halth -= Samurai::Base_Damage;
                       cout << "Health after Damge is:" << Warrior::halth << "\n";
                       Warrior::halth -= Samurai::random;
                       Warrior::Halth = Warrior::halth;
                       Samurai::Random = Samurai::random;

                       cout << " Aditional Damage Amount Is:" << Samurai::Random << "\n";

                       cout << "health after Damage is:" << Warrior::halth << "\n";
                       goto Player_1;
                   }
                          Player_1:
                           Action();
                   
               }*/
           // do
            //{
              //  Action();
                //Player_2();
         //}
            //while (Spartans::Helth > 0 && Warrior::Halth > 0 && Samurai::Health > 0);
            Player1isPlaying = !Player1isPlaying;
        }
            
        
        void Player_2()
        {
          //  Player_Change();
            
            do {
                !Player1isPlaying;
                //cout << "oh Good PLay is Starting \n";
                cout << "Player2 is Taking Their Turn\n" << endl;

                // while (Spartans::Helth > 0 && Warrior::Halth > 0 && Samurai::Health > 0 && !Player1isPlaying)
                 //{
                    // player;
                     //while (PowerfullPlayer::Health != 0 || ) {
                cout << "Enter D for Damage" << "||" << "H for Heal\n";
                cin >> Choice;
                if (Warrior::Halth >= 195 && Samurai::Health >= 175 && Spartans::Helth >= 95 && Choice == 'h' && player1 == !Player1isPlaying && player2 == Player1isPlaying)
                {
                    cout << "You are All Right Health is full No Need To Heal\n";
                }
                if (Choice == 'd')
                {
                    if (Player_I == 1 && Player_II == 2 && player2 == Player1isPlaying && player == !Player1isPlaying)
                    {
                        cout << "Now Player 2 Taking Its Turn\n" << endl;
                        cout << "Enter D for Damage" << "||" << "H for Heal\n";
                        cin >> Choice;
                        Warrior::halth = Warrior::Halth;
                        srand(time(0));
                        Samurai::random = rand() % 7 + 7;
                        Warrior::halth -= Samurai::Base_Damage;
                        cout << "Health after Damge is:" << Warrior::halth << "\n";
                        Warrior::halth -= Samurai::random;
                        Warrior::Halth = Warrior::halth;
                        Samurai::Random = Samurai::random;

                        cout << " Aditional Damage Amount Is:" << Samurai::Random << "\n";

                        cout << "health after Damage is:" << Warrior::halth << "\n";
                        Player_Change();

                    }



                    else if (Player_II == 2 && Player_I == 1 && player2 == Player1isPlaying && player1 == !Player1isPlaying)
                    {
                        Warrior::halth = Warrior::Halth;
                        srand(time(0));
                        Samurai::random = rand() % 7 + 7;
                        Warrior::halth -= Samurai::Base_Damage;
                        cout << "Health after Damge is:" << Warrior::halth << "\n";
                        Warrior::halth -= Samurai::random;
                        Warrior::Halth = Warrior::halth;
                        Samurai::Random = Samurai::random;

                        cout << " Aditional Damage Amount Is:" << Samurai::Random << "\n";

                        cout << "health after Damage is:" << Warrior::halth << "\n";
                        // Player_Change();
                         // Action();

                         //helth -= Random;
                         //Halth = halth;
                        //Samurai::Damage();
                    }
                    else if (Player_II == 1 && Player_I == 3 && player2 == Player1isPlaying && player1 == !Player1isPlaying)
                    {
                        Spartans::helth = Spartans::Helth;
                        srand(time(0));
                        Warrior::random = rand() % 11 + 7;
                        Spartans::helth -= Warrior::Base_Damage;
                        cout << "Health after Damge is:" << Spartans::helth << "\n";
                        Spartans::helth -= Warrior::random;
                        Spartans::Helth = Spartans::helth;
                        Warrior::Random = Warrior::random;

                        cout << " Aditional Damage Amount Is:" << Warrior::Random << "\n";

                        cout << "health after Damage is:" << Spartans::helth << "\n";
                        //Spartans::Damage();
                    }

                    else if (Player_II == 2 && Player_I == 1 && player2 == Player1isPlaying && player1 == !Player1isPlaying)
                    {
                        Warrior::halth = Warrior::Halth;
                        srand(time(0));
                        Samurai::random = rand() % 7 + 7;
                        Warrior::halth -= Samurai::Base_Damage;
                        cout << "Health after Damge is:" << Warrior::halth << "\n";
                        Warrior::halth -= Samurai::random;
                        Warrior::Halth = Warrior::halth;
                        Samurai::Random = Samurai::random;

                        cout << " Aditional Damage Amount Is:" << Samurai::Random << "\n";

                        cout << "health after Damage is:" << Warrior::halth << "\n";
                        //Samurai::Damage();
                    }
                    else if (Player_II == 2 && Player_I == 3 && player2 == Player1isPlaying && player1 == !Player1isPlaying)
                    {
                        Spartans::helth = Spartans::Helth;
                        srand(time(0));
                        Samurai::random = rand() % 7 + 7;
                        Spartans::helth -= Samurai::Base_Damage;
                        cout << "Health after Damge is:" << Spartans::helth << "\n";
                        Spartans::helth -= Samurai::random;
                        Spartans::Helth = Spartans::helth;
                        Samurai::Random = Samurai::random;

                        cout << " Aditional Damage Amount Is:" << Samurai::Random << "\n";

                        cout << "health after Damage is:" << Spartans::helth << "\n";
                        //Spartans::Damage();
                    }

                    else if (Player_II == 3 && Player_I == 1 && player2 == Player1isPlaying && player1 == !Player1isPlaying)
                    {
                        Warrior::halth = Warrior::Halth;
                        srand(time(0));
                        Spartans::random = rand() % 15 + 9;
                        Warrior::halth -= Spartans::Base_Damage;
                        cout << "Health after Damge is:" << Warrior::halth << "\n";
                        Warrior::halth -= Spartans::random;
                        Warrior::Halth = Warrior::halth;
                        Spartans::Random = Spartans::random;

                        cout << " Aditional Damage Amount Is:" << Spartans::Random << "\n";

                        cout << "health after Damage is:" << Warrior::halth << "\n";

                        //Warrior::Damage();
                    }
                    else if (Player_II == 3 && Player_I == 2 && player2 == Player1isPlaying || player1 == !Player1isPlaying)
                    {
                        Samurai::health = Samurai::Health;
                        srand(time(0));
                        Spartans::random = rand() % 11 + 7;
                        Samurai::health -= Spartans::Base_Damage;
                        cout << "Health after Damge is:" << Samurai::health << "\n";
                        Samurai::health -= Spartans::random;
                        Samurai::Health = Samurai::health;
                        Spartans::Random = Spartans::random;
                        cout << " Aditional Damage Amount Is:" << Spartans::Random << "\n";

                        cout << "health after Damage is:" << Samurai::health << "\n";
                        // Spartans::Damage();
                    }
                }
                     if (Choice == 'h' && Player_II == 3 && Player_I == 1 || Player_I == 2 && player2 == Player1isPlaying || player1 == !Player1isPlaying)
                    {
                        Spartans::Heal();
                    }
                
                if (Choice == 'h' && Player_II == 1 && (Player_I == 2 || Player_I == 3) && player2 == Player1isPlaying && player1 == !Player1isPlaying)
                {

                Warrior::Heal();
                }
                else if (Choice == 'h' && Player_II == 2 && Player_I == 1 || Player_I == 3 && player2 == Player1isPlaying && player1 == !Player1isPlaying)
                {

                    Samurai::Heal();
                }
                //else if (Player1isPlaying && SkillfullPlayer::health <= 0)
                    //|| SkillfullPlayer::Health <= 0|| RagedPlayer::Health <= 0)
                 //{
                     //cout << "Game over\n" << "Player2 won the Game\n";
                 //}
                else
                {
                    cout << "Select Right Option To Play With 2'nd Player\n";
                    Player_2();
                    //!Player1isPlaying;
                   // cout << "Player1 is Won The Game\n" << endl;
                }


                //else if(Choice == 'h' && ch == 1)
                //{
                  //  PowerfullPlayer::Heal();
                    //cout << "wrong number chosse right one";
                //1}

            }
              while (Spartans::Helth > 0 && Warrior::Halth > 0 && Samurai::Health > 0);
              
              // Player1isPlaying = !Player1isPlaying;

            }
        public:
            void Prt(void* ptr, char t);
            {
                //int n = 8;
                //void* ptr;
                //char t;
               // char l = 's';
                switch (t)
                {
                case'i':cout << (*(int*)ptr)<<endl;
                case 'p':cout << (*(char*)ptr);
                }
            }



             
   
  };


/*void Action()
{
    PowerfullPlayer b, * p = &b;
    while (p->Health || p->Health || p->Health != 0)
    {
        cout << "Enter D for Damage\n" << "H for Heal\n";
        cin >> Choice;
        switch (Choice)
        {
        case 'd' || 'D':
        {
            b.Damage();
            //cout << "Heal Amount is\n" << PowerfullPlayer::Random;
            //cout << "The total Heal of PowerFullPlayer is\n" << b.Health;


        }

        }
    }
}*/





int main()
{
    int n = 5;
    char s = 'y';
    //srand(time(0));

  //for (int i = 0; i <= 30; i++)
       
      //cout << rand()%11 + 7 << " \n";
    //float b = 10;
    //float* p  = & b;
    //int b;
    //p = &b;
  
    //char Player;
    implement n; //* m=&n;
  // m->Action();
 //m->Player1();
  //m->Player2();
 // m->Player_Change();
  //m->Action();
  //m->Player_Change();
  //m->Player_2();
  //m->Player_Change();
   
  //m->Sock();
   //m->Player2();
   //m->Action();
   // Player p;
    Samurai r, *s =&r;
   // s->Damage();
    //cout << *p;
    /*void oops()
        ; {
        int n =6;
        int s = 6;
        bool t = true;
        if (n<5 || s>5 &&!t)
        {
            cout << s<<"\n" << "Rock\n";
            n+=n;
            s++;
        }
        else
        {
            cout << "rock ended";
        }
    }*/
    //Spartans d,*f=&d;
    /*void pop()
        ;{
        char n,k;
        cout << "oops\n";
        cin >> n>>k;
        if (n=='h' && k == 'j')
        {
            cout << "rock";
        }
    }*/
    //Action();
    //m.Player2();
    //f->Damage();
    //cout << "Nice get ready both of you!! Player 1 will go first.. \n" << endl << "Player 1 Playing:  Press D to deal damage or H to heal yourself\n";
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
