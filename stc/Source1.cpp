#include<iostream>
#include<vector>
using namespace std;
void changeOrder(vector<int>& vec, int pos) {
	int t = vec[pos];
	int len = vec.size();
	vec.erase(vec.begin()+pos);
	vec.insert(vec.begin(), t);
	
	vec.insert(vec.begin(),vec.begin()+pos+1,vec.end());
	vec.erase(vec.end() - (vec.size()-len),vec.end());
}


//int main() {
//
//	vector<int> vec = { 1,24,5,6,7,8,9,4,3,2 };
//
//	changeOrder(vec, 3);
//
//	for (int x : vec) {
//		cout << " " << x;
//	}
//
//}
