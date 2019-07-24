//    ___  ____  __   ___   ___    _______  _________   ____  ___
//   / _ \/ __/ / /  / _ | / _ )  / ___/\ \/ / ___/ /  / __/ <  /
//  / // /\ \  / /__/ __ |/ _  | / /__   \  / /__/ /__/ _/   / /
// /____/___/ /____/_/ |_/____/  \___/   /_/\___/____/___/  /_/

#include <iostream>

int countSparse(int sparse[4][5])
{
    int counter = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (sparse[i][j] != 0)
                counter++;
        }
    }
    return counter;
}
int main()
{
    int sparse[4][5] = {
        {0, 3, 0, 6, 0},
        {0, 0, 0, 0, 1},
        {5, 0, 3, 0, 0},
        {1, 0, 0, 0, 1}};
    int getCounter = countSparse(sparse);
    std::cout<<getCounter;
    int resMatrix[3][getCounter]; //define the final 3xN matrix
    int k = 0;                     // for looping through columns
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (sparse[i][j] != 0)
            {
                resMatrix[1][k] = i;            // push row number
                resMatrix[2][k] = j;            // push col number
                resMatrix[3][k] = sparse[i][j]; // push element
                k++;                            //increment to next column
            }
        }
    }
    std::cout << "Linear Representation Of Sparse Matrix : \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < getCounter; j++)
        {
            std::cout << resMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
