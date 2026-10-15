#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    vector<vector<int>> graf = {
        {1, 2},    // Tetangga simpul 0
        {0, 3, 4}, // Tetangga simpul 1
        {0},       // Tetangga simpul 2
        {1},       // Tetangga simpul 3
        {1}        // Tetangga simpul 4
    };

    vector<bool> dikunjungi(5, false);
    queue<int> antrian;

    int awal = 0;

    dikunjungi[awal] = true;
    antrian.push(awal);

    cout << "Urutan BFS: ";

    while (!antrian.empty()) {
        int simpul = antrian.front();
        antrian.pop();

        cout << simpul << " ";

        for (int tetangga : graf[simpul]) {
            if (!dikunjungi[tetangga]) {
                dikunjungi[tetangga] = true;
                antrian.push(tetangga);
            }
        }
    }

    cout << endl;

    return 0;
}