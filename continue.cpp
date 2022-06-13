#include <iostream>
using namespace std;
int main() {
for (int i = 23; i < 40; i++) {
if (i == 6) {
continue;
}
cout << i << "\n";
}
return 0;
}