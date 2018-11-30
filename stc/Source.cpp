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
#include<Windows.h>
int main() {
	//f22() = 2;
	obj_t c;
	//cout << "110"_bin;
	c = foo();
	
	return 0;
}

