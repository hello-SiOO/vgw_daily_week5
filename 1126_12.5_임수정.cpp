#include<iostream>
using namespace std;
template<typename T>
void temp(T* value1, T* value2){
	T temp = *value1;
	*value1 = *value2;
	*value2 = temp;
}
int main(){
	int num1 = 1;
	int num2 = 2;
	int *value1 = &num1;
	int *value2 = &num2;
	cout <<"before>>"<< *value1 << " and " << *value2 << endl; 
	temp(value1,value2);
	cout <<"after>>"<< *value1 << " and " << *value2 << endl; 
	
	double n1 = 1.5;
	double n2 = 2.5;
	double *v1 = &n1;
	double *v2 = &n2;
	cout <<"before>>"<< *v1 << " and " << *v2 << endl; 
	temp(v1,v2);
	cout <<"after>>"<< *v1 << " and " << *v2 << endl; 
	
	string s1 = "sujeong";
	string s2 = "lim";
	string *str1 = &s1;
	string *str2 = &s2;
	cout <<"before>>"<< *str1 << " and " << *str2 << endl; 
	temp(str1,str2);
	cout <<"after>>"<< *str1 << " and " << *str2 << endl; 
	
	return 0;
}
