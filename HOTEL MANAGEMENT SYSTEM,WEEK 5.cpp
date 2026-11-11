#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // ==================================
    // TASK 1: 1D ARRAY - WEEKLY REVENUE
    // ==================================

    double revenue[7];
    double totalRevenue = 0;
    double averageRevenue;

    cout << "====================================\n";
    cout << "       HOTEL MANAGEMENT SYSTEM\n";
    cout << "====================================\n";

    cout << "\nTASK 1: WEEKLY REVENUE TRACKER\n";

    // Input revenue for seven days
    for(int i = 0; i < 7; i++)
    {
        cout << "Enter revenue for day " << i + 1 << ": ";
        cin >> revenue[i];

        totalRevenue += revenue[i];
    }

    // Calculate average revenue
    averageRevenue = totalRevenue / 7;

    cout << "\nTotal Weekly Revenue: " << totalRevenue << endl;
    cout << "Average Daily Revenue: " << averageRevenue << endl;


    // ==================================
    // TASK 2: 2D ARRAY - ROOM OCCUPANCY
    // ==================================

    int occupancy[5][10];

    int occupied, vacant;

    cout << "\n====================================\n";
    cout << "TASK 2: ROOM OCCUPANCY - ONE BRANCH\n";
    cout << "====================================\n";

    // Generate random occupancy data
    srand(time(0));

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            occupancy[i][j] = rand() % 2;
        }
    }

    // Display occupied and vacant rooms per floor
    for(int i = 0; i < 5; i++)
    {
        occupied = 0;
        vacant = 0;

        for(int j = 0; j < 10; j++)
        {
            if(occupancy[i][j] == 1)
            {
                occupied++;
            }
            else
            {
                vacant++;
            }
        }

        cout << "\nFloor " << i + 1 << endl;
        cout << "Occupied Rooms: " << occupied << endl;
        cout << "Vacant Rooms: " << vacant << endl;
    }


    // ==================================
    // TASK 3: 3D ARRAY - MULTIPLE BRANCHES
    // ==================================

    int chain[3][5][10];

    int totalOccupied = 0;

    cout << "\n====================================\n";
    cout << "TASK 3: MULTIPLE HOTEL BRANCHES\n";
    cout << "====================================\n";

    // Generate random occupancy for all branches
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            for(int k = 0; k < 10; k++)
            {
                chain[i][j][k] = rand() % 2;

                if(chain[i][j][k] == 1)
                {
                    totalOccupied++;
                }
            }
        }
    }

    // Display total occupied rooms
    cout << "\nTotal Occupied Rooms Across All Branches: "
         << totalOccupied << endl;

    cout << "\nTotal Rooms Across All Branches: "
         << 3 * 5 * 10 << endl;

    cout << "\nTotal Vacant Rooms Across All Branches: "
         << (150 - totalOccupied) << endl;

    cout << "\n====================================\n";
    cout << "       END OF HOTEL SYSTEM\n";
    cout << "====================================\n";

    return 0;
}