#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <functional>
#include <map>
#include <set>
#include <string>
#include <cstring>
#include <cstdio>
#include <stack>
#include <string.h>
#include <queue>
#include <iomanip>
#include <math.h>
#include <utility>
#include <sstream>
#include <cstdlib>
#include <fstream>
#include <climits>
#include <clocale>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define SQ(a) (a) * (a)
//compara se numero flutuantes sao iguais if(abs(a-b) < 1e-9)   a e b sao iguais...
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long int ll;

void show_screen(string str)
{

	string s = "", inicio = "+-", fim = "-+";
	for (int j = 0; j < str.length(); j++)
		s = s + '-';
	cout << inicio + s + fim + "\n| "+ str + " |\n" + inicio + s + fim << endl;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	string str;

	cin>>n;
	cin.ignore();
	REP(cas, 1, n)
	{
		getline(cin, str);
		cout<<"Case #"<< cas <<":\n";
		show_screen(str);
	}
	return 0;
}
