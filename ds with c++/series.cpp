// convert lowercase letter to uppercase letter
/*#include <iostream>
using namespace std;
char convert(char name){
    char ans= name-'a'+'A';
    return ans;
}
int main() {
    char name;
    cout << "Enter a lowercase letter: ";
    cin >> name;
    char upper = convert(name);
    cout << "Uppercase letter: " << upper << endl;
    return 0;
}*/

// Armstrong number or not
#include <iostream>
using namespace std;
int countdigit(int num) {
    int sum = 0;
    while (num ){
        sum ++;
        num /= 10;
    }
    return sum;
}