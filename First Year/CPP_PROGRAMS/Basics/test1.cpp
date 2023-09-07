#include<iostream>
using namespace std;
// int main(){
//     char b[] = "xyz";
//     char *c = &b[0];
//     c++;
//     cout << c << endl;
// }

// void fun(int a[]) {
//     cout << a[1] << " ";
// }

// int main() {
//     int a[] = {1, 2, 3, 4};
//     fun(a + 1);
//     cout << a[0];
// }

void square(int *p){
 int a = 10;
 p = &a;
 *p = (*p) * (*p);
}

int main(){
 int a = 10;
 square(&a);
 cout << a << endl;
}