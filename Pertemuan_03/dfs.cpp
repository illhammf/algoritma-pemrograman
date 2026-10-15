#include <iostream>
#include <vector>
using namespace std;

void dfs(int simpul,
         const vector<vector<int>>& graf,
         vector<bool>& dikunjungi) {

    dikunjungi[simpul] = true;
    cout << simpul << " ";

    for (int tetangga : graf[simpul]) {
        if (!dikunjungi[tetangga]) {
            dfs(tetangga, graf, dikunjungi);
        }
    }
}

int main() {
    vector<vector<int>> graf = {
        {1, 2},
        {0, 3, 4},
        {0},
        {1},
        {1}
    };

    vector<bool> dikunjungi(5, false);

    cout << "Urutan DFS: ";
    dfs(0, graf, dikunjungi);
    cout << endl;

    return 0;
}