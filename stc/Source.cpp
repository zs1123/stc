#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

namespace UI {
	//class Dog;
	
}
class Dog {
private:
	int age;
public:
	Dog(const initializer_list<int>& vec) {
		
		age = *(vec.begin());
	}
	
	~Dog()
	{
		cout << "dog destroyed"<<endl;
	}
};

class YellowDog :public Dog{
public:
	~YellowDog() 
	{
		cout << "yellow dog destroyed" << endl;
	}
};

void foo(Dog d) {

}

int& f22() {
	int a = 4;
	return a;
}

int operator"" _bin(const char* s,size_t l) {
	int ret = 0;
	for (int i = 0; i < l; i++) {
		ret <<= 1;
		if (s[i] == '1')
			ret += 1;
	}
	return ret;
}
#include<vector>


namespace UI {
	int f() {
		
		return 2;
	}
}


struct obj_t {

	obj_t() {
		cout << "constructor" << endl;
	}

	obj_t(const obj_t& c) {
		cout << "copy constructor" << endl;
	}
	obj_t& operator=(const obj_t& c) {
		cout << "assign constructor" << endl;
		return *this;
	}
	~obj_t()
	{
		cout << "destory" << endl;
	}

};

obj_t foo() {
	
	return obj_t();
}
#include<cstdint>
#include<iomanip>
#include<cassert>
#include<cstdlib>

template<typename T = std::uint64_t,T m = 1000000000ULL,unsigned places = 9>
class BigInt {
	std::vector<T> d;
public:
	BigInt() = default;

	BigInt(T x){
		//static_assert(x<m);
		d.push_back(x);
	}

	 bool empty() const {
		return d.empty();
	}

	BigInt  operator+(const BigInt& r) const {
		BigInt sum;
		T carry = 0;
		auto n = d.size() >r.d.size()?d.size():r.d.size();
		sum.d.reserve(n + 1);
		for (auto i = 0; i < n; i++) {
			T a = i < d.size() ? d[i] : 0;
			T b = i < r.d.size() ? r.d[i] : 0;
			sum.d.push_back((a + b + carry) % m);
			carry = (a + b + carry) / m;
		}
		if (carry > 0) {
			sum.d.push_back(carry);
		}
		return sum;
	}
	friend std::ostream& operator<<(std::ostream& os, BigInt<>& d);
};

#include<algorithm>
#include<vector>
#include<iterator>

int fff(int a, int b, int c)  {
	printf("%X\n",&a);
	printf("%X\n",&b);
	printf("%X\n",&c);
	return a + b + c;
}


template<typename T>
bool isEmpty() {
	size_t s = sizeof(T);
	if (s > 1)
		return false;
	return true;
}



struct Base {
	explicit Base(int a) {

	}

};



void hello(int a) {
	cout << "hello " << a;
}


int mss(const int* arr,int n) {

	int curr = 0;
	int res = 0;
	for (int i = 0; i < n; i++) {
		curr = 0;
		for (int j = i; j < n; j++) {
			curr += arr[j];
			if (curr > res)
				res = curr;
		}
	}
	return res;
}
//int mss2(const int* arr, int n) {
//
//}
//int _mss2(const int* arr, int n) {
//
//	int mid = n / 2;
//	int l = _mss2(arr,mid);
//	int r = _mss2(arr + mid, n - mid);
//
//}

#include<ctime>
#include<thread>
#include<atomic>
int arr[1000][1000];
#include<codecvt>
#include<fstream>
#include<iostream>
#include<string>
#include<tuple>
#include<cmath>
#include<unordered_map>
#include<set>
std::ostream& operator<<(std::ostream& os, BigInt<>& b)
{

	for (auto x : b.d)
		cout << x << " ";
	return os;
}

using Vec = vector<int>;
//int main() {
//	/*int arr[5] = {0};
//	int A,B,C,D,E;
//	
//	for(A = 1;A<=5;A++)
//		for(B=1;B<=5;B++)
//			for(C=1;C<=5;C++)
//				for(D=1;D<=5;D++)
//					for (E = 1; E <= 5; E++) {
//						arr[0] = (B == 2) + (A == 3);
//						arr[1] = (B == 2) + (E == 4);
//						arr[2] = (C == 1) + (D == 2);
//						arr[3] = (C == 5) + (D == 3);
//						arr[4] = (E == 4) + (A == 1);
//						bool r = true;
//						for (int i = 0; i < 5; i++)
//						{
//							if (arr[i] != 1)
//								r = false;
//
//						}
//						int n = 0;
//						n |= 1 << (A - 1);
//						n |= 1 << (B - 1);
//						n |= 1 << (C - 1);
//						n |= 1 << (D - 1);
//						n |= 1 << (E - 1);
//						if (r && n == 31)
//							cout << A << B << C << D << E <<endl;
//
//					}*/
//	//cout << std::thread::hardware_concurrency();
//	////int a = 2;
//	////int&& b = static_cast<int&&>(a);
//	////b = 4;
//	////cout << a << "  "<< b;
//	//////fff(1,2,3);
//	//enum class type{666
//	//	null_t,number_t,string_t
//	//};
//	//cout << sizeof(type::null_t);
//	 
//	//wstring_convert<codecvt_utf8<wchar_t>> conv;
//	/*ifstream ifs("d:\\code.txt");
//	ofstream ofs("d:\\codeout.txt");
//	assert(ofs);
//	
//	while (!ifs.eof()) {
//		string line;
//		getline(ifs, line);
//		int si = line.size();
//		for (int i = 0; i < si; i++) {
//			if (line[i] < 0) {
//				string s2 = line.substr(i,si+1-i);
//				line.erase(i, si + 1 - i);
//				line.insert(0,s2);
//				ofs << line << endl;
//				break;
//			}
//		}
//	}
//	ofs.close();*/
//	/*float x = sqrt(-2);
//	printf("%f\n", x);
//	unsigned char* p = (unsigned char*) & x;
//	for (int i = 0; i < 4; i++) {
//		printf("%X ", *(p + 3 - i));
//	}*/
//
//
//	/*int x = -1;
//	static_assert( 0xffffffff > 2);
//	string s("222");
//	unordered_map<int, int> m;*/
//	
//	BigInt<> b(1);
//
//	cout << b;
//	vector<int> v;
//	v.reserve(200);
//	int x = 1e7;
//	for (int i = 0; i < 100; i++)
//		cout << v[i] <<" ";
//	return 0;
//}
//
// arr :[l,h)
void insert_sort(int* arr, int l, int h) {
	for (int i = l + 1; i < h; i++) {
		int key = arr[i];
		int j = i;
		for (; j > l && arr[j - 1] > key; j--)
			arr[j] = arr[j - 1];
		arr[j] = key;
	}
}
void recursive_sort(int* arr, int l, int h) {

	if (l < h) {
		recursive_sort(arr, l, h - 1);
		int key = arr[h - 1];
		int i = h - 2;
		for (; i >= l && arr[i] > key; i--)
			arr[i + 1] = arr[i];
		arr[i + 1] = key;
	}
}

int* create(int len) {
	int* arr = new int[len];
	for (int i = 0; i < len; i++)
		arr[i] = rand()*(rand()%2?1:-1);
	return arr;
}

bool assert_sorted(int* arr, int l, int h) {
	for (int i = l; i < h - 1; i++) {
		if (arr[i] > arr[i + 1])
			return false;
	}
	return true;
}

int merge(int* arr, int l, int m, int h) {
	int n = 0;
	int len1 = m - l + 1;
	int len2 = h - m ;
	int* temp = new int[len1];
	for (int i = l; i <= m; i++)
		temp[i - l] = arr[i];

	int i = 0, j = m + 1;
	int k = l;
	while (i < len1 && j <= h) {
		if (temp[i] < arr[j]) {
			arr[k++] = temp[i++];
			n++;
		}
		else {
			arr[k++] = arr[j++];
		}
	}
	while (i < len1) {
		arr[k++] = temp[i++];
	}
	return n;
}
int  merge_sort(int* arr,int l,int h) {
	if (l < h) {
		int mid = l + (h - l) / 2;
		int ln = merge_sort(arr,l,mid);
		int rn = merge_sort(arr,mid+1,h);
		return merge(arr, l, mid, h);
	}
}
namespace A4_1{

	tuple<int,int,int> find_max_crossing_subarray(int* arr, int l, int mid, int h) {
		int l_sum = arr[mid];
		int m_l = mid;
		int sum = arr[mid];
		for (int i = mid-1; i >= l; i--) {
			sum += arr[i];
			if (sum > l_sum) {
				m_l = i;
				l_sum = sum;
			}
		}
		int r_sum = arr[mid+1];
		int m_r = mid + 1;
		sum = arr[mid+1];
		for (int i = mid + 2; i <= h; i++) {
			sum += arr[i];
			if (sum > r_sum) {
				m_r = i;
				r_sum = sum;
			}
		}
		return {m_l,m_r,l_sum+r_sum};
	}
	tuple<int, int, int> find_max_subarray_enforce(int* arr, int l, int h);
	//arr : [l,h]
	tuple<int,int,int> find_max_subarray(int* arr,int l,int h) {
		if (h - l < 200)
			return find_max_subarray_enforce(arr, l, h);//{l,h,arr[l]};
		else {
			int mid = l + (h - l) / 2;
			auto s1 = find_max_subarray(arr,l,mid);
			auto s2 = find_max_subarray(arr, mid + 1, h);
			auto s3 = find_max_crossing_subarray(arr, l, mid, h);
			if (get<2>(s1) >= get<2>(s2) && get<2>(s1) >= get<2>(s3))
				return s1;
			else if (get<2>(s2) >= get<2>(s1) && get<2>(s2) >= get<2>(s3))
				return s2;
			else
				return s3;
		}
	}
	tuple<int, int, int> find_max_subarray_enforce(int* arr, int l, int h) {
		int max = arr[l];
		int r = -1;
		int l_m = -1;
		for (int i = l+1; i <= h; i++) {
			int m_t = arr[i];
			for (int j = i + 1; j <= h; j++) {
				m_t += arr[j];
				if (m_t > max) {
					l_m = i;
					r = j;
					max = m_t;
				}
			}
		}
		return {l_m,r,max};

	}
}

#include<sstream>
int main() {
	int n = 10000;
	int* arr = create(n);
	//int arr[] = {13,-3,-25,20,-3,-16,-23,18,20,-7,12,-5,-22,15,-4,7};
	clock_t s = clock();
	auto res = A4_1::find_max_subarray(arr,0,n-1);
	clock_t e = clock();
	printf(" start : %d end :%d  max_sum :%d   time cost : %f\n", get<0>(res), get<1>(res), get<2>(res),double(e -s)/CLOCKS_PER_SEC);
	s = clock();
	auto res2 = A4_1::find_max_subarray_enforce(arr,0,n-1);
	e = clock();
	printf(" start : %d end :%d  max_sum :%d   time cost : %f\n", get<0>(res2), get<1>(res2), get<2>(res2), double(e - s) / CLOCKS_PER_SEC);
	///*int* arr = create(n);*/
	//int arr[] = {2,3,4,1,2,5,8,9,5};
	//clock_t s = clock();
	//printf("reverse number : %d\n",merge_sort(arr, 0, 8));
	//clock_t e = clock();
	//printf("time cost :%f\n", double(e - s) / CLOCKS_PER_SEC);
	//assert(assert_sorted(arr, 0, n - 1));
	return 0;
}
