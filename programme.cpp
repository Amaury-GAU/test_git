#include <iostream>
#include <set>
#include<map>

using namespace std;

int main() {
  set<int> myset ={1,2,3,4,5};

  myset.insert(10);
  myset.insert(42);
  myset.erase(4);

  myset.find(4);

  for (auto el: myset){
    cout << el <<'\n';
  }


  map <char, int> mymap= {{'a',1}, {'b',2},{'e', 5}};
  mymap['d']= 4;
  mymap.insert({'z',26});


  for (auto el :mymap){
    cout << el.first << " "<< el.second << endl ;
    //first = key //second=value
  }

  //trouver un élément dans le dictionnaire
  auto it = mymap.find('e');
  if (it != mymap.end()){
    cout << "Found: " << it->first << " " << it->second << endl;}
  else 
    cout << "Not Found" << endl;
  

} 