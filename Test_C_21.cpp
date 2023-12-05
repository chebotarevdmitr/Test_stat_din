/*TEST statik
#include <iostream>
using namespace std; 
float sum_numbers(float a, float b) {
	return a + b;
}
float sum_numbers(float a, float b, float c) {
	return a + b + c;
}
int main() {
	
	cout << sum_numbers(5, 4) << endl;
	cout << sum_numbers(5, 4, 1) << endl;
	cin.get(); 
 }
*/	
//TEST dinamic
#include <iostream>
#include <list>
using namespace std;
class User { 
public:
	virtual void getPermissions() {
		cout << "Users can see limited info" << endl;
	}
};

class SuperUser: public User {
	void getPermissions() {
		cout << "SuperUsers can see all info" << endl;
	}
};

int main() {
	User u;
	SuperUser s;
	list<User*>users;
	users.push_back(&u);
	users.push_back(&s);

	for (User* usrPtr : users)
		usrPtr->getPermissions();
	cin.get();
}