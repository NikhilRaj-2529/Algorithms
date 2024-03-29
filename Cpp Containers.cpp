#include<bits/stdc++.h>
using namespace std;
int main(){
	// Vector

	vector<int>vt; //vector<data_type>vector name
	vector<char>vt;

	// Insertion

	vt.push_back(10); 
	vt.emplace_back(20);
	vt.insert(30,2); vt.emplace(40,3); // At specified Index

	// Deletion

	vt.pop_back(10);
	vt.erase(); // At specified position or a certain range
	vt.clear(); // All Elements

	sort(vt.begin(),vt.end());
	sort(vt.rbegin(),vt.rend());
	reverse(vt.begin(),vt.end());
	reverse(vt.rbegin(),vt.rend());

	// Map

	map<int,int>mpp; // In Ascending order
	unordered_map<int,int>m; // In a Random Order
	multimap<int,int>mp; // Allow Duplicates 

	map<int,int>dic;//key:value pair
    //stores data in sorted , sorted will be on keys
    map<int,pair<int,int>>dic1;//one key may have set of pairs
    map<pair<int,int>,int>dic2;//set of keys may have one value
    for(auto it:dic)
    {
        cout<<it.first<<" "<<it.second;
    }

    //Set 

    set<int>se;

    se.insert(1);//{1}
    se.insert(2);//{1,2}
    se.insert(4);//{1,2,4}
    se.emplace(3);//{1,2,3,4}

    //begin(),end(),rbegin(),rend(),size(),empty(), and swap() are same

    auto it=se.find(3);//to check if element is present
    cout<<*(it);
    auto it=se.find(6);//if element is not present goes to last+1 address
    //how to erase
    se.erase(5)//erase 5 {1,2,3,4}
    auto it=se.find(4);
    se.erase(it);//it removes the position and value at that particular address
    auto it1=se.find(2);
    auto it2=se.find(4);
    se.erase(it1,it2);//erase in the given range from first to last-1 --> from it1 to it2-1 it erases 
    //count
    int c=se.count(1);//if it present count is 1 else 0

    unordered_set<int>us;//does't store duplicates and they are
    //in unsorted
    //it does not store in any particular order
    //it has a better time complexity
    //but in case of collusions gives wrong answer


    multiset<int>ms;//it can store duplicates
    ms.insert(1);
    ms.insert(2);
    ms.insert(1);
    ms.erase(1);//it erases all ones present in set
    ms.erase(ms.find(1));//it erases the fist one in the set
    for(auto it:ms){
        cout<<it<<" ";
    }
    ms.count(1);//give the count of ones in set
    //what if you want erase two ones
    ms.erase(ms.find(1),ms.find(1)+2);

    

    //List Same as Vector but can be insert and delete from front

    list<int>lis;
    //append the element
    lis.push_back(1);//{1}
    lis.emplace_back(2);//{2}
    //what if you want push at front
    lis.push_front(5);//{5,1,2}
    list.emplace_front();

    //Pair

     pair<int,char>p={1,'h'};
    cout<<p.first<<" "<<p.second<<endl;

    //pair in pair
    pair<int, pair<int,int>>p1={1,{2,3}};

    cout<<p1.first<<" "<<p1.second.first<<endl;

    //pair with array
    pair<int,int>arr[]={{1,2},{3,4}};
    cout<<arr[0].first<<endl;
    //make_pair
    pair<char,int>pa=make_pair('A',2);
    cout<<pa.second;


}
