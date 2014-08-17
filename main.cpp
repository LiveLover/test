#include <iostream>
#include <vector>



using namespace std;



int main () {
    vector<int> v = {1,2};

    for(vector<int>::iterator i=v.begin(); i!= v.end(); ++i)
        cout << *i << endl;
}
