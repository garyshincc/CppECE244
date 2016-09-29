#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
	stringstream ss;
	string input;
	string name = "";
	string lastname;
	float fl;

	string newname;

	cout << "hello world" << endl;
	getline(cin, input);
	while (!cin.eof()){
		
		ss.str(input);
		ss >> name >> fl;
		if(ss.fail()){
			cout << "fail failed" <<endl;
		}
		if(name == ""){
			cout << "! failed" << endl;
		}

		ss.clear();
		/*if (ss.fail()){
			cout << "FAIL" << endl;
			ss.clear();
			getline(cin, input);
			continue;
		}
		ss.clear();
		cout << "hello, " << name << lastname << fl << endl;
		*/
		getline(cin, input);
	}
	// cin takes first word b4 whitespace
	// getline takes all words b4 newline
	return 0;
}