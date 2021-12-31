# tic_tac_toe_game
A simple tic tac toe game using c++, built with RAD Studio.

Logic of the game:

1. First I have shown the first player's turn.

2. The buttons when clicked should display either 'x' or 'o' depending on the player's turn.

3. Then I have checked if the player has won the game or not, by checking if a diagonal/row/column has only one symbol.

4. After checking this condition, if it is false then we display that it is the other player's turn and if the condition becomes true then we display that the player has won and we return from the funtion.


Code: 

I have declared a global variable currentPlayerSymbol to keep track of the next player's turn and if the player won or not. This variable changes as the turn of the player changes.

I have declared individual Event (Button1Click(),Button2Click(),....) checker for all the 9 buttons which changes its text when a button is clicked and also checks if the player has won, if not then the function changes the player's symbol for the next player to play its turn.

I have created two user defined functions (winnerKaun(),changePlayerSymbol()) which check if the player has won or not and other one changes the variable currentPlayerSymbol and displays the same for the next player to play its turn.

If you wish to check the game out, go [here](https://github.com/KA1PE5H/tic_tac_toe_game/blob/main/Project/Win32/Debug/Project1.exe) :)

I will update this repo if I feel like some changes needs to be made.
