#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Function declarations
void initializeBoard(char board[3][3]);
void displayBoard(char board[3][3]);
bool makeMove(char board[3][3], int row, int col, char player);
bool checkWin(char board[3][3], char player);
bool checkDraw(char board[3][3]);
void getPlayerMove(int *row, int *col, char player);
bool isValidMove(char board[3][3], int row, int col);

int main() {
    char board[3][3];
    char currentPlayer = 'X'; bool gameWon = false;
    bool gameDraw = false;
    int row, col;
    char playAgain;
    
    printf("=============================\n");
    printf("  Welcome to Tic-Tac-Toe!   \n");
    printf("=============================\n\n");
    printf("Instructions:\n");
    printf("- Player 1 uses 'X', Player 2 uses 'O'\n");
    printf("- Enter row and column (0-2) to make your move\n");
    printf("- Three in a row, column, or diagonal wins!\n\n");
    
    do {
        // Initialize the game
        initializeBoard(board);
        currentPlayer = 'X';
        gameWon = false;
        gameDraw = false;
        
        printf("New Game Started!\n\n");
        
        // Main game loop
        while (!gameWon && !gameDraw) {
            displayBoard(board);
            
            // Get player move
            getPlayerMove(&row, &col, currentPlayer);
            
            // Make the move
            if (makeMove(board, row, col, currentPlayer)) {
                // Check for win
                if (checkWin(board, currentPlayer)) {
                    gameWon = true;                 displayBoard(board);
                    printf("\n🎉 Player %c wins! Congratulations! 🎉\n\n", currentPlayer);
                }
                // Check for draw
                else if (checkDraw(board)) {
                    gameDraw = true;
                    displayBoard(board);
                    printf("\n⚖️  It's a draw! Good game! ⚖️\n\n");
                }
                else {
                    // Switch players
                    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
                }
            }
        }
        
        // Ask if players want to play again
        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &playAgain);
        printf("\n");
        
    } while (playAgain == 'y' || playAgain == 'Y');
    
    printf("Thanks for playing Tic-Tac-Toe! Goodbye!\n");
    return 0;
}

// Initialize the board with empty spaces
void initializeBoard(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

// Display the current state of the board
void displayBoard(char board[3][3]) {
    printf("\n   0   1   2\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i);
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) {
            printf("  ---|---|---\n");
        }
    }
    printf("\n");
}

// Make a move on the board
bool makeMove(char board[3][3], int row, int col, char player) {
    if (isValidMove(board, row, col)) {
        board[row][col] = player;
        return true;
    }
    return false;
}

// Check if a move is valid
bool isValidMove(char board[3][3], int row, int col) {
    // Check if coordinates are within bounds
    if (row < 0 || row > 2 || col < 0 || col > 2) {
        return false;
    }
    // Check if the cell is empty
    return board[row][col] == ' ';
}

// Get player move with input validation
void getPlayerMove(int *row, int *col, char player) {
    printf("Player %c, enter your move (row col): ", player);
    
    while (scanf("%d %d", row, col) != 2 || *row < 0 || *row > 2 || *col < 0 || *col > 2) {
        printf("Invalid input! Please enter row and column (0-2): ");
        // Clear input buffer
        while (getchar() != '\n');
    }
}

// Check if the current player has won
bool checkWin(char board[3][3], char player) {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true;
        }
    }

    // Check columns
    for (int j = 0; j < 3; j++) {
        if (board[0][j] == player && board[1][j] == player && board[2][j] == player) {
            return true;
        }
    }

    // Check main diagonal (top-left to bottom-right)
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return true;
    }

    // Check anti-diagonal (top-right to bottom-left)
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return true;
    }

    return false;
}

// Check if the game is a draw
bool checkDraw(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return false; // Found an empty space, game can continue
            }
        }
    }
    return true; // No empty spaces, it's a draw
}
