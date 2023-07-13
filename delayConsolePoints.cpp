#include <iostream>
#include <unistd>

using namespace std;

int main(){

cout << "hello" << endl;

for (int c = 0; c < 10; c++){
	cout << ". ";
	fflush(stdout);
	sleep(1);

}
cout << "done";
return 0;