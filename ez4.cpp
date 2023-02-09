#include <bits/stdc++.h>
 
//    a duman
 
 /*
                ⠀⠀⠀⠀⠀⠀⢀⡤⠤⢤⣤⡀
                ⠀⠀⠀⠀⠀⢠⠏⠀⠀⠈⠙⣿⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀
                ⠀⠀⠀⠀⢠⠋⠀⠀⠀⠀⠀⢻⣿⣷⡀⠀⠀⠀⠀⠀⢆⠀⠀⠀⡄⠀⠀⠀⠀⠀⠀⣠⣶⣾⣿⠟⠋⠓⡄
                ⠀⠀⠀⢀⡇⠀⠀⠀⠀⠀⠀⠘⣿⣿⣷⡀⠀⠀⠀⠀⠀⢂⢀⡎⠀⠀⠀⠀⣠⣾⣿⣿⣿⡿⠁⠀⠀⠀⠹⡄
                ⠀⠀⠀⡼⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣶⣶⣾⣿⣿⣿⣿⣿⣿⣿⣷⣾⣿⣿⣿⣿⡿⠁⠀⠀⠀⠀⠀⡇
                ⠀⠀⢀⡇⠀⠀⠀⠀⠀⠀⠀⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠁⠀⠀⠀⠀⠀⢀⡇
                ⠀⠀⢸⠀⠀⠀⢰⡅⠀⠀⠀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⠀⠀⠀⠀⢸
                ⠀⠀⠀⠀⠀⠀⠀⢷⣤⣴⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⠀⡄⠀⠇
                ⠀⠀⢀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⣠
                ⠀⠀⠀⡇⠀⠀⠀⠀⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡰⠁
                ⠀⠀⠀⢻⡀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇
                ⠀⠀⠀⠀⢧⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠿⣿⣿⣿⣿⣿⡿⢿⣿⣿⣿⣿⣿⣿⣿⠆
                ⠀⠀⠀⠀⠘⢆⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣰⣿⡆⣿⣿⣿⡟⢰⣶⢹⣿⣿⣿⣿⣿⣿
                ⠀⠀⠀⠀⠀⠈⢧⡀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠿⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡏
                ⠀⠀⠀⠀⠀⠀⠀⠉⠙⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⣤⣶⣿⣿⡄⠉⠉⣽⣿⣿⣿⣿⣿⡇
                ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⢿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠁⠸⣿⣿⣿⣿⠇⠀⢰⣿⣿⣿⣿⣿⣿⠃
                ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⣿⣿⣿⣿⡿⠿⢿⣄⣀⠀⠈⢉⠉⠁⠀⢀⣀⢿⣿⣿⣿⠟⠁
                ⠀⠀⠀⠀⠀⢀⣀⣤⣴⣶⣾⣿⣿⣿⣿⣷⣄⢠⡀⠹⣿⣿⣿⣿⣿⣿⣿⠟⣵⣿⣿⣿⣁⡀
                ⠀⣀⣤⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⡙⠿⣿⣿⣿⠿⢃⣼⣿⣿⣿⣿⣿⣿⣷⣄⡀
                ⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣶⣤⣤⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣄⡀
 
                                    XD
*/
 
//optimize xd
#pragma comment(linker,"/stack:200000000")
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2")
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef double db;
 
#define pb push_back
#define pf push_front
#define run ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
    int N, K;
    cin >> N >> K;

    // позициялар
    vector<std::pair<int, int>> queens;
    for (int i = 0; i < K; i++) {
        int x, y;
        std::cin >> x >> y;
        queens.emplace_back(x, y);
    }

    // пустой квадраттарды санау
    int count = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            bool hit = false;
            for (auto &q : queens) {
                // чек
                if (i == q.first || j == q.second || i + j == q.first + q.second || i - j == q.first - q.second) {
                    hit = true;
                    break;
                }
            }

            // если квадратка тимесе счетчик 2x
            if (!hit)
                count++;
        }
    }

    cout << count << std::endl;

    return 0;
}