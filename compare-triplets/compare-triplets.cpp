#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);


vector<int> solve(int a0, int a1, int a2, int b0, int b1, int b2)
{
    vector<int> res;
    int alice = 0, bob = 0;

    if (a0 > b0)
        alice++;
    else if (a0 < b0)
        bob++;
    if (a1 > b1)
        alice++;
    else if (a1 < b1)
        bob++;
    if (a2 > b2)
        alice++;
    else if (a2 < b2)
        bob++;

    res.push_back(alice);
    res.push_back(bob);

    return res;
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a0A1A2_temp;
    getline(cin, a0A1A2_temp);

    vector<string> a0A1A2 = split_string(a0A1A2_temp);

    int a0 = stoi(a0A1A2[0]);

    int a1 = stoi(a0A1A2[1]);

    int a2 = stoi(a0A1A2[2]);

    string b0B1B2_temp;
    getline(cin, b0B1B2_temp);

    vector<string> b0B1B2 = split_string(b0B1B2_temp);

    int b0 = stoi(b0B1B2[0]);

    int b1 = stoi(b0B1B2[1]);

    int b2 = stoi(b0B1B2[2]);

    vector<int> result = solve(a0, a1, a2, b0, b1, b2);

    for (int result_itr = 0; result_itr < result.size(); result_itr++)
    {
        fout << result[result_itr];

        if (result_itr != result.size() - 1)
        {
            fout << " ";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string)
{
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char &x, const char &y)
                                      { return x == y and x == ' '; });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ')
    {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos)
    {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
