#include <iostream>  //directive to the preprocessor which asks him to include the library iostream
using namespace std; /*telling the compiler the we are going to use the standart 
					   namespace where "cout" is stored*/

int main() {
	cout << "Hello world!!!" << endl;
	cin.get(); 
	/* system("pause") is not considered to be a good practice, so we will use cin.get() in order to stop
	our program and see it's output */
	return 0;
}