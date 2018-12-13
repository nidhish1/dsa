#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int counter =0;
    int tracker =0;
    for (int i=0;i<n;i++){
        if (s[i]=='U'){
            tracker = tracker +1;
        }else{
            tracker =tracker -1;
        }

        if (tracker ==0){
            counter =counter +1;
        }
    }
    return counter-1;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
