//
//  main.c
//  sharkGame
//

#include <stdio.h>
// ----- EX. 1 : Preparation------------
#include <stdlib.h>
#include <time.h>
// ----- EX. 1 : Preparation------------
#include "board.h"

// ----- EX. 4 : player ------------
#define N_PLAYER            3
// ----- EX. 4 : player ------------

#define MAX_CHARNAME        200

// ----- EX. 3 : board ------------
#define MAX_DIE             6

// ----- EX. 4 : player ------------
#define PLAYERSTATUS_LIVE   0
#define PLAYERSTATUS_DIE    1
#define PLAYERSTATUS_END    2

int player_position[N_PLAYER];
char player_name[N_PLAYER][MAX_CHARNAME];
int player_coin[N_PLAYER];
int player_status[N_PLAYER]; //0 - live, 1 - die, 2 - end
char player_statusString[3][MAX_CHARNAME] = {"LIVE", "DIE", "END"};
// ----- EX. 4 : player ------------

// ----- EX. 3 : board ------------
int rolldie(void)
{
    return rand()%MAX_DIE+1;
}
// ----- EX. 3 : board ------------

// ----- EX. 1 : Preparation------------
void opening(void)
{
    printf("==============================================================\n");
    printf("==============================================================\n");
    printf("==========                SHARK GAME!!!                =======\n");
    printf("==============================================================\n");
    printf("==============================================================\n");
}
// ----- EX. 1 : Preparation------------

// ----- EX. 6 : game end ------------
int game_end(void)
{
    int i;
    int flag_end = 1;
    
    //if all the players are died?
    for (i=0;i<N_PLAYER;i++)
    {
        if (player_status[i] == PLAYERSTATUS_LIVE)
        {
            flag_end = 0;
            break;
        }
    }
    
    return flag_end;
}
// ----- EX. 6 : game end ------------

// ----- EX. 4 : player ------------
void printPlayerPosition(int player)
{
    int i;
    
    for (i=0;i<N_BOARD;i++)
    {
        printf("|");
        if (player_position[player] == i)
            printf("%c", player_name[player][0]);
        else
        {
            if (board_getBoardStatus(i) == BOARDSTATUS_NOK)
                printf("X");
            else
                printf(" ");
        }
    }
    printf("|\n");
}

void printPlayerStatus(void)
{
    int i;
    printf("player status ---\n");
    for (i=0;i<N_PLAYER;i++)
    {
        printf("%s : pos %i, coin %i, status %s\n", player_name[i], player_position[i], player_coin[i], player_statusString[player_status[i]]);
        printPlayerPosition(i);
    }
    printf("-----------------\n");
}
// ----- EX. 4 : player ------------

// ----- EX. 5 : shark ------------
void checkDie(void)
{
    int i;
    for (i=0;i<N_PLAYER;i++)
    {
        if (board_getBoardStatus(player_position[i]) == BOARDSTATUS_NOK)
        {
            printf("%s in pos %i has died!! (coin %i)\n", player_name[i], player_position[i], player_coin[i]);
            player_status[i] = PLAYERSTATUS_DIE;
        }
    }
}
// ----- EX. 5 : shark ------------

// ----- EX. 6 : game end ------------
int getAlivePlayer(void)
{
   int i;
   int cnt=0;
   for(i=0; i< N_PLAYER; i++)
   {
   		if(player_status[i] == PLAYERSTATUS_END);
   		cnt++;
   }
   
   return cnt;
}

int getWinner(void)
{
    int i;
    int winner = 0;
    int max_coin = -1;
    
    for (i=0; i<N_PLAYER; i++) //go through all of the players
    {
    	if (player_coin[i] > max_coin)	//if a player has more coin than the current highest
    	{
    		max_coin = player_coin[i];
    		winner = i;					//it's turn will be remembered as the one with the most coins
		}
	}
	
	return winner;						//print the winner's turn
}
// ----- EX. 6 : game end ------------


int main(int argc, const char * argv[]) {
    
    int i;
    int turn=0;

// ----- EX. 1 : Preparation------------
    srand(time(NULL));
    opening();
// ----- EX. 1 : Preparation------------

// ----- EX. 2 : structuring ------------
    //step1 : initialization
    //step1-1 : board initialization
    board_initBoard();

// ----- EX. 4 : player ------------
    //step1-2 : initialize player
    for (i=0;i<N_PLAYER;i++)
    {
        player_position[i] = 0;
        player_coin[i] = 0;
        player_status[i] = PLAYERSTATUS_LIVE;
        printf("Player %i's name: ", i);
        scanf("%s", player_name[i]);
    }
// ----- EX. 4 : player ------------
    
    //step 2. : game start, turn loop
    do {
        int dieResult;
        int coinResult;
        int dum;

// ----- EX. 4 : player ------------
        if (player_status[turn] != PLAYERSTATUS_LIVE)		//if player dead, move on to the next player
        {
            turn = (turn + 1)%N_PLAYER;
            continue;
        }
// ----- EX. 4 : player ------------
        
        //step 2-1. status printing
// ----- EX. 3 : board ------------
        board_printBoardStatus();
// ----- EX. 3 : board ------------
// ----- EX. 4 : player ------------
        printPlayerStatus();
// ----- EX. 4 : player ------------

        //step 2-2. rolling die
// ----- EX. 4 : player ------------
        printf("%s turn!! ", player_name[turn]);
        printf("Press any key to roll a die!\n");
        scanf("%d", &dum);
        fflush(stdin);
// ----- EX. 4 : player ------------
        dieResult = rolldie();
        
        //step 2-3. moving
        player_position[turn] += dieResult;			//find how much the player will go
        if (player_position [turn] >= N_BOARD)
        {
        	printf("%s reached to the end!\n", player_name[turn], player_coin[turn]);	//when player reached the end
        	player_status[turn] = PLAYERSTATUS_END;
        	break;
		}
		else
		{
			printf("Die result : %i. %s moved to %i\n", dieResult, player_name[turn], player_position[turn]);	//when player hasn't reached the end
		}
   
        //step 2-4. coin
        coinResult = board_getBoardCoin(player_position[turn]);	//at the new location the player landed, how much coins are there?
        if (coinResult != 0)		//if the player landed at a place with coins
        {
        	player_coin[turn] += coinResult;	//the player earns the coin
			printf("LUCKY %s got %i coin(s). (total of %i coin(s)\n", player_name[turn], coinResult, player_coin[turn]);
		}
    
               
        //step 2-5. end process
        turn = (turn + 1)%N_PLAYER;		//set turn for the next one in line
        
        //move shark after everyone had their turn
        if (turn == 0)
        {
        	int shark_pos = board_stepShark();
        	printf("Shark moved to %i\n", shark_pos);
        	checkDie();
		}
        
    
// ----- EX. 6 : game end ------------
    } while(game_end() == 0);
    
    //step 3. game end process
    printf("GAME END!!\n");
    printf("%i players are alive! winner is %s\n", getAlivePlayer(), player_name[getWinner()]);
// ----- EX. 6 : game end ------------
    
// ----- EX. 2 : structuring ------------

    return 0;
}

