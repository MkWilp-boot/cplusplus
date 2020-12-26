#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

void solve(vector<string> vec)
{
	for(vector<string>::iterator it = vec.begin(); it != vec.end(); ++it)
	{
		string posVal = *it;
		cout<< posVal << endl;
	}
}
int main()
{
	vector<string> vect;
	int numberOfPorblens; string knowledge;
	cin >> numberOfPorblens;
	cout<< numberOfPorblens << endl;
	for(int i = 0; i < 6; i++)
	{
		cin >> knowledge;
		vect.push_back(knowledge);
	}
	cout<<endl;
	solve(vect);
	return 0;
}