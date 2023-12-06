#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int enemy[5][5] = {
        {0, 1, 1, 0, 0},
        {0, 0, 0, 1, 0},
        {0, 0, 0, 1, 0},
        {1, 0, 0, 0, 0},
        {1, 0, 0, 0, 0}
    };

    cout << "\n\n\t\t\t\t\t  0,0,0,0,0 \n";
    cout << "\t\t\t\t          0,0,0,0,0 \n";
    cout << "\t\t\t\t          0,0,0,0,0 \n";
    cout << "\t\t\t\t          0,0,0,0,0 \n";
    cout << "\t\t\t\t          0,0,0,0,0 \n\n\n";

    int hits = 0;
    int turn = 0;
    int miss = 0;

    while (hits < 6 && miss < 6) {
        cout << turn << ". Turn\n";
        cout << "Hits: " << hits << "\n";
        cout << "Miss: " << miss << "\n\n";

        int row, column;
        cout << "Officer: Capitan! Give us coordinates to attack! (Coordinates must be between 1-5)" << endl;
        cout << "Officer: Which row should we attack?" << endl;
        cin >> row;
        cout << "Officer: And which column should we attack?" << endl;
        cin >> column;
        cout << "Officer: Very good sir. We are attacking at " << row << "," << column << "\n\n";

        if (row >= 1 && row <= 5 && column >= 1 && column <= 5) {
            cout << "Officer: Missiles launching.\n";

            if (enemy[row - 1][column - 1] == 1) {
 				turn++;
				hits++;
                cout << "\n\tOfficer: You did it sir! We hit them!\n\n";
                cout << "\t\t                        (HIT)\n\n";
            } else if (enemy[row - 1][column - 1] == 0) {
                turn++;
				miss++;
                cout << "\n\tOfficer: There was no ship at that position sir. We missed!\n\n";
                cout << "\t\t                        (MISS)\n\n";
            } 
        } else {
            cout << "\tOfficer: Those coordinates are out of our missile reach sir!\n"
                 << "\t(Coordinates must be between 1-5)\n\n";
        }
    }

    if (miss >= 6) {
        cout << "\n\n\n\n\n\n\n\n\n\n Officer: Unfortunately, the enemy got out of our reach sir. We lost them.\n\n";
        cout << "  Total turn " << turn << "\n";
        cout << "   Hits: " << hits << "\n";
        cout << "   Miss: " << miss << "\n\n";
        cout << "(You LOST the Game Because You Missed Too Much)\n";
    }
    if (hits >= 6) {
        cout << "\n\n\n\n\n\n\n\n\n\n Officer: We did it! All of the enemy ships are sinking. We won the war.\n\n";
        cout << "  Total turn " << turn << "\n";
        cout << "   Hits: " << hits << "\n";
        cout << "   Miss: " << miss << "\n\n";
        cout << "(You WIN the Game Because You Sank All Enemy Ships)\n";
    }
    if (miss >= 6 && hits >= 3) {
        cout << "\n\n\n\n\n\n\n\n\n\n Officer: The enemy ran away sir. But we made good damage. Maybe next time we will get them!\n\n";
        cout << "  Total turn " << turn << "\n";
        cout << "   Hits: " << hits << "\n";
        cout << "   Miss: " << miss << "\n\n";
        cout << "(You LOST the Game Because You Missed Too Much but You Did A Good Fight)\n";
    }
		int close;
		cout << " Press any button to close";
		cin>> close;
    return 0;
}

