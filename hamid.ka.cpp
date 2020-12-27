#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class person
{
public:
    string name;
    string family;
    void myName(){
    	cout << "name and family:" + name +"\t"+ family + "\n";
    }
    	

};



int main(int argc, char** argv) {
	person a1;
	a1.name="hossein";
	a1.family="hosseini";
	a1.myName();

	
	person a2;
	a2.name="saman";
	a2.family="sae";
	a2.myName();
	
	return 0;
}
