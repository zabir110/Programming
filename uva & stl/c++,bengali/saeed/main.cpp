#include <iostream>
#include<set>
#include<map>
#include<vector>
using namespace std;



int main()
{
	vector<int>v;
	map<int, int> map1;
	multiset< int > ms;
	multiset<int>::iterator it, it1;
	int c=0, n, q, a ,ans,i;
	while (1)
	{
		bool bol[10000] = { 0 };
		c++;
		cin >> n >> q;
		if (n == 0 && q == 0) break;
		else
		{
			while (n--)
			{
				cin >> a;
				ms.insert(a);
				bol[a] = 1;
			}

			//for (it = ms.begin();it != ms.end();it++) cout << *it << " ";
			it = ms.begin();
			map1[*it] = 1;
			it1 = ms.begin();
			it1++;
			//cout << *it1<<*it;
			for (i = 2 ; it1!=ms.end() ; it++, i++, it1++)
			{
				//cout << "CASE# " << c << ":" << endl;
				if (*it != *it1)
				{

					map1.insert(make_pair(*it1, i));
				}
			}



			for(i = 0;i < q; i++)
			{
				cin >> a;
				v.push_back(a);
			}
			//for (i = 0;i < q;i++) cout << v[i] << ' ';
			for (i = 0;i < q;i++)
			{
				if (i == 0) cout << "CASE# " << c << ":"<<endl;

				if (bol[v[i]] == 0)
					cout << v[i] << " not found" << endl;
				else
				{
					cout << v[i] << " found at " << map1[v[i]] << endl;
				}
			}
			v.clear();
			ms.clear();
		}
	}

	return 0;
}

