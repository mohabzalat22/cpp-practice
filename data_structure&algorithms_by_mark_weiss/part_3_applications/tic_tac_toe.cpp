#include <iostream>
#include <vector>
using namespace std;

//[1] [2] [3]
//[4] [5] [6]
//[7] [8] [9]

// player a vs b

vector<char> table[] =
    {{0, 0, 0},
     {0, 0, 0},
     {0, 0, 0}};

void game(int move, char player)
{
    if (move > 0 && move <= 3)
    {
        table[0][move - 1] = player;
    }

    if (move > 3 && move <= 6)
    {
        table[1][move - 4] = player;
    }

    if (move > 6 && move <= 9)
    {
        table[2][move - 7] = player;
    }
}

char checkWin(char player)
{
    // Check rows
    for (int i = 0; i < 3; i++)
    {
        if (table[i][0] == player && table[i][1] == player && table[i][2] == player)
        {
            return player;
        }
    }

    // Check columns
    for (int j = 0; j < 3; j++)
    {
        if (table[0][j] == player && table[1][j] == player && table[2][j] == player)
        {
            return player;
        }
    }

    // Check diagonals
    if (table[0][0] == player && table[1][1] == player && table[2][2] == player)
    {
        return player;
    }
    if (table[0][2] == player && table[1][1] == player && table[2][0] == player)
    {
        return player;
    }

    return 0;
}

void showGame()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << table[i][j] << ' ';
        }
        cout << endl;
        cout << "_ _ _";
        cout << endl;
    }
}
int main()
{
    bool session = true;
    const char player_a = 'X';
    const char player_b = 'O';

    char player = player_a; // default player
    while (session)
    {
        int place = 0;
        showGame();
        cout << "-----------------------------------------";
        cout << "type from 1~9 for placing for player : " << player << " :>";
        cin >> place;

        if (place > 0 && place < 10)
        {
            game(place, player);
            if (checkWin(player) != 0)
            {
                session = false;
                cout << "player : " << player << " wins";
            }
            // switch to the next player
            player = (player == player_a) ? player_b : player_a;
        }
    }

    return 0;
}