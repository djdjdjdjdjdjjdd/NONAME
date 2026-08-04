//#include <iostream>
//#include <cstring>
//using namespace std;
//
//template <typename T>
//T MAX(T a, T b)
//{
//	return a > b ? a : b;
//}
//template <>
//char* MAX(char* a, char* b)
//{
//	cout << "char* MAX(char* a, char* b) " << endl;
//	return (strlen(a) > strlen(b)) ? a : b;
//}
//
//template <>
//const char* MAX(const char* a, const char* b)
//{
//	cout << "const char* MAX(const char* a, const char* b) " << endl;
//	return strcmp(a, b) > 0 ? a : b;
//}
//
//int main()
//{
//	cout << MAX(3, 7) << endl;
//	cout << MAX('T', 'C') << endl;
//	cout << MAX(3.5, 7.5) << endl;
//	cout << MAX("simple", "BEST") << endl;
//
//		char str1[] = "simple";
//		char str2[] = "BEST";
//		cout << MAX(str1, str2) << endl;
//
//	return 0;
//}