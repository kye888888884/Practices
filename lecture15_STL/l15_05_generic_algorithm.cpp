#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <typename T, typename U>
T xfind(T first, T last, U c) {
    // T* 안해도 됨. 어차피 int*로 인식. 또한 인스턴스에 대해서도 작동.
    while ( first != last && *first != c ) {
        ++first;
    }
    // return first == last? 0: first;
    return first; // 단점2 해결
}

int main()
{
    char s[] = "abcdefg";
    char *p;

    double arr[] = {1.0,2.0,3.0,4.0,5.0,6.0};
    double *q;

    p = xfind(s, s+5, 'c');
    cout << *p << endl; // 단점2. 검색 결과가 NULL이면 프로그램 죽음

    q = xfind(arr, arr+6, 7);
    if ( q == arr+6 ) { // 단점2 해결로 예외처리 가능
        cout << "Not found" << endl;
    }
    else cout << *q << endl;

    vector<double> v = {1.0,2.0,3.0,4.0,5.0,6.0};
    double *r;
    r = xfind(arr, arr+6, 7); // 지원 안 함
    
    return 0;
}