#include <iostream>
#include <vector>

using namespace std;

void solve(vector<string> vec)
{
	int amount = 0;
	for(vector<string>::iterator it = vec.begin(); it != vec.end(); ++it)
	{
		string vecPosVal = *it;
		if(vecPosVal.size() > 10)
		{
			for(string::size_type i = 1; i < vecPosVal.size() -1; i++)
			{
				amount += 1;
			}
			int vecPosPVal = vecPosVal.size() -1;
			cout<< vecPosVal[0] << amount << vecPosVal[vecPosPVal] << endl; amount = 0;
		}
		else
		{
			cout<< vecPosVal << endl;
		}
	}
}
int main()
{
	vector<string> vect; string m; int num;
	cin >> num;
	for(int i = 0; i< num; i++)
	{
		cin >> m;
		vect.push_back(m);
	}
	cout<<endl;
	solve(vect);
	return 0;
}