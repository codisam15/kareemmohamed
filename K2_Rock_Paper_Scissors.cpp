#include<iostream>
#include<ctime>

using namespace std;
char userinput();
void perfecto();
char computerinput();
void showoutput(char player);
void winner(char player,char computer);

int main()
{
    char player , computer;
    perfecto();
    cout<<"Welcome to the Rock-Paper-Scissors game"<<endl;
    perfecto();
    player = userinput();
    perfecto();
    cout<<"You picked ";
    showoutput(player);
    computer = computerinput();
    cout<<"the computer picked ";
    showoutput(computer);
    perfecto();
    winner(player,computer);
}
void winner(char player,char computer){
    switch(player){
        case 'r':
        switch (computer){
            case 'r':
                cout<<"it`s a tie!\n";
                break;
            case 'p':
                cout<<"You lose!\n";
                break;
            case 's':
                cout<<"You win!\n";
                break;    
                        }
                        break;
        case 'p':switch (computer){
            case 'p':
                cout<<"it`s a tie!\n";
                break;
            
            case 's':
                cout<<"You lose!\n";
                break;
            case 'r':
                cout<<"You win!\n";
                break;    
                        }break;
        case 's':switch (computer){
            case 's':
                cout<<"it`s a tie!\n";
                break;
            
            case 'r':
                cout<<"You lose!\n";
                break;
            case 'p':
                cout<<"You win!\n";
                break;    
                        }break;
    }
}
void showoutput(char player){
    switch(player){
        case 'r': cout<<"rock\n"; break;
        case 'p': cout<<"paper\n"; break;
        case 's': cout<<"scissors\n"; break;
    }
}
char userinput(){
    char player;
   do
   {
    cout<<"Enter Your choice: \n";
    perfecto();
    cout<<"'r' for rock\n";
    cout<<"'p' for paper\n";
    cout<<"'s' for scissors\n";
    cin>>player;
   }while (player!='r'&&player!='p'&&player!='s');

    return player;
}
char computerinput(){
    int computer;
    srand(time(0));
    computer = rand()%3 + 1;
    switch(computer){
        case 1: computer = 'r'; break;
        case 2: computer = 'p'; break;
        case 3: computer = 's'; break;
    }
    return computer;
}
void perfecto(){
    cout<<"********************************\n";
}