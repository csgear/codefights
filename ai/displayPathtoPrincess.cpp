
// codefights.com AI Bot saves princess

#include <iostream>
#include <vector>
using namespace std;

void displayPathtoPrincess(int n, vector<string> grid)
{
    int mx, my, px, py;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == 'm')
            {
                mx = i;
                my = j;
            }

            if (grid[i][j] == 'p')
            {
                px = i;
                py = j;
            }
        }
    }

    int up, left;

    if ((up = px - mx) < 0)
    {
        for (; up < 0; ++up)
            printf("UP\n");
    }
    else
    {
        for (; up > 0; --up)
            printf("DOWN\n");
    }

    if ((left = py - my) < 0)
    {
        for (; left < 0; ++left)
            printf("LEFT\n");
    }
    else
    {
        for (; left > 0; --left)
            printf("RIGHT\n");
    }
}

int main(void)
{

    int m;

    vector<string> grid;

    cin >> m;

    for (int i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        grid.push_back(s);
    }

    displayPathtoPrincess(m, grid);

    return 0;
}
