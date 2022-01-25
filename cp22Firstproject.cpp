//Shamsur Rahman.
#include <iostream>
using namespace std;

char cube[10] = {'0','1','2','3','4','5','6','7','8','9'};

int towin();
void tiles();

int main()
{
	int player = 1,i,select;
	
    char trace, response='y';
    do
    {
    	
        tiles();
        player=(player%2)?1:2;
        

        cout << "Player " << player << " please, select a number:  ";
        cin  >> select;

        trace=(player == 1) ? 'X' : 'O';

        if (select == 1 && cube[1] == '1')

        cube[1] = trace;
        else if (select == 2 && cube[2] == '2')

        cube[2] = trace;
        else if (select == 3 && cube[3] == '3')

        cube[3] = trace;
        else if (select == 4 && cube[4] == '4')

        cube[4] = trace;
        else if (select == 5 && cube[5] == '5')

        cube[5] = trace;
        else if (select == 6 && cube[6] == '6')

        cube[6] = trace;
        else if (select == 7 && cube[7] == '7')

        cube[7] = trace;
        else if (select == 8 && cube[8] == '8')

        cube[8] = trace;
        else if (select == 9 && cube[9] == '9')

        cube[9] = trace;
        else
        {
            cout<<"Wrong move ";

            player--;
            cin.ignore();
            cin.get();
        }
        i=towin();

        player++;
    }	while(i==-1);
    	tiles();
    	if(i==1)

      cout<<"\nHurray!!! The winner is "<<--player;
        
      else
      cout<<"\nThe Game is draw" << endl;
        
      cout << "\nDo you want to play a new game?(y/n) " << endl;
      cin  >> response;
      cout << endl;
      
	  cout << "\n\n you are not allowed to play again anyways player " <<--player;
 	  cout << "\n\n Bye Bye !!!" << endl;
	

    cin.ignore();
    cin.get();
    return 0;
}


int towin()
{
    if (cube[1] == cube[2] && cube[2] == cube[3])

    return 1;
    else if (cube[4] == cube[5] && cube[5] == cube[6])

    return 1;
    else if (cube[7] == cube[8] && cube[8] == cube[9])

	return 1;
    else if (cube[1] == cube[4] && cube[4] == cube[7])

    return 1;
    else if (cube[2] == cube[5] && cube[5] == cube[8])

	return 1;
    else if (cube[3] == cube[6] && cube[6] == cube[9])

    return 1;
    else if (cube[1] == cube[5] && cube[5] == cube[9])

    return 1;
    else if (cube[3] == cube[5] && cube[5] == cube[7])

    return 1;
    else if (cube[1] != '1' && cube[2] != '2' && cube[3] != '3' 
                  	
					     && cube[4] != '4' && cube[5] != '5' && cube[6] != '6' 
                	
					     && cube[7] != '7' && cube[8] != '8' && cube[9] != '9')
	
    return 0;
    else
    return -1;
}



	void tiles()//functions
{
    system("cls");
   
    cout << " ***** Welcome to the world famous Tic Tac Toe Game *****"<<endl<<endl;
    


    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;
	cout << "***** ***** ******" << endl;
    cout << "     |     |      " << endl;
    cout << "  " << cube[1] << "  |  " << cube[2] << "  |  " << cube[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
	cout << "***** ***** ******" << endl;
    cout << "  " << cube[4] << "  |  " << cube[5] << "  |  " << cube[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "***** ***** ******" << endl;

    cout << "  " << cube[7] << "  |  " << cube[8] << "  |  " << cube[9] << endl;

    cout << "     |     |      " << endl << endl;
    cout << "***** ***** ******" << endl;
    
    
}


 
