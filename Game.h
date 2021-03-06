#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
#include <windows.h>
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
                setting
} state;
enum Turn {     firstPlayer,
                secondPlayer,
}currentPlayer;
enum computerStateEnum{
                on,
                off
} computerState;
enum gamewin{   player1,
                player2,
                draw,
                none,
} gameWin;
char lastComputerCommand[6];
bool firstTurn;

bool commandStart;
bool simulation;
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
int rev(char board[8][8]);
void gameFlow();
void printRequiredScreen();
void startMenu();
void goBack();
void game();
bool checkPromotion( char input[], bool promotion);
void doPromotion();
void resetAll();
void collectMove();
void increment( char testCase[]);
bool checkIfAvailable(struct commands command);
bool checkStructs( struct commands command, struct commands test);
void copyFromToBoard( char board[8][8], char simulationBoard[8][8]);
int checkValue(char type);
void getComputerCommand();
void printSetting();
bool checkCanBeKilled( int x1, int y1, char board[8][8]);
bool validCurrentCommand(char board[8][8], struct commands curCommand);
#endif // GAME_H_INCLUDED
