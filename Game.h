#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
//#include <windows.h>
#include <stdbool.h>
struct commands {
                int currentX;
                int nextX;
                int currentY;
                int nextY;
                char promotion;
                bool promotionExist;
}command;
int turn;
enum GameState{ menu,
                play,
                help,
                setting,
} state;
enum Turn {     firstPlayer,
                secondPlayer,
}currentPlayer;
bool commandStart;
void printInterface(void);
void printLogo(void);
void clearScreen(void);
void printGameOption(void);
int getGameOption(void);
void getMove();
bool verifyLetter(char letter);
bool verifyNumber(char number);
int getNull( char input[], int maxSize);
int convertLetter( char letter);
int convertNumber( char number);
bool verifyInput( char input[]);
void printError(char *type);
void setCommand( char input[], bool promotion);
void doCommand( char input);//not finished
void printHelp();//not finished
bool verifyCommand( char input);
void setColor(char* text);
void setBackgroundColor(char* text);
void switchTurn();
void gameFlow();
void printRequiredScreen();
void startMenu();
void printSetting();
void goBack();
void game();
bool checkPromotion( char input[]);
void doPromotion();
void resetAll();

#endif // GAME_H_INCLUDED
