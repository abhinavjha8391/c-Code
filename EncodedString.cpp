#include <iostream>
#include <map>
#include <string>
using namespace std;

int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
  
 
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
}

int main() {
    map<int,char> map1;
    int val=97,testCases=0;
    int zero=48;
    int one=49;

    //for (int i=0;i<16;i++)
   // {  
     //   val+=i;
       // char ch=val;
        map1.insert(pair<int,char>(0,'a'));
        map1.insert(pair<int,char>(1,'b'));
        map1.insert(pair<int,char>(2,'c'));
                map1.insert(pair<int,char>(3,'d'));
        map1.insert(pair<int,char>(4,'e'));
        map1.insert(pair<int,char>(5,'f'));
                map1.insert(pair<int,char>(6,'g'));
        map1.insert(pair<int,char>(7,'h'));
        map1.insert(pair<int,char>(8,'i'));
                map1.insert(pair<int,char>(9,'j'));
        map1.insert(pair<int,char>(10,'k'));
        map1.insert(pair<int,char>(11,'l'));
                map1.insert(pair<int,char>(12,'m'));
        map1.insert(pair<int,char>(13,'n'));
        map1.insert(pair<int,char>(14,'o'));
                map1.insert(pair<int,char>(15,'p'));

     //   cout<<map1[15];
    //}
//    cout<<"enter no of test cases";
    cin>>testCases;
    for(int j=0;j<testCases;j++)
    {
    int digits=0,initial=0,total=0;
    string s1;
    string major="";        
    cin>>digits;
    total=digits/4;
    cin>>s1;

for (int i=0;i<total;i++)
    {
        
  int num=binaryToDecimal(stoi(s1.substr(initial, 4)));
 initial=initial+4;
  major+=map1[num];
    }
   cout<<major<<endl;
    }
 
	return 0;
}
