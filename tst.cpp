#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5+10;
int pro[N],aft[N];

signed main()
{
	string s1 = "ecccfcwkojcdljkmmaknqweffkmnwcqcqfkkweescbddewcmwijeabwwkwecdqnndnelqlwwllnqwmdsnlcenbmdkkdvlnkalqsklhlncslqcqensan";
	sort(s1.begin(),s1.end());
	string s3 = "snioaedjklwqnedkwhbekfjlwqsncqsnmdlqswmdwejkdcnlkwqnmsclmelmqlndckqwbedckalnckweldfcnkancklwnlemfcbcnkwqacwqefcwecv";
	sort(s3.begin(),s3.end());
	cout << s1 <<endl;
	cout << s3;
}
