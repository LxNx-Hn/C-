#include <iostream>
#include<list>
#include<vector>
using namespace std;

int vS1(const vector<int>& V){
    int sum = 0;
    for(int i=0;i <V.size();i++)
    sum += V[i];
    return sum;
}
int vS2(list<int> V){
    typedef list<int> :: iterator Iterator;
    int sum = 0;
    for(Iterator p = V.begin(); p != V.end(); ++p)
        sum += *p;
    return sum;
}

int main () {

    vector<string> myV;
    vector<string>::iterator it;
    vector<string>::iterator it2;
    myV.push_back("A");
    myV.push_back("B");
    myV.push_back("C");
    myV.push_back("D");

    it=myV.begin();
    cout<<*it<<endl;
    cout<<*(++it)<<endl;
    cout<<"----------it access"<<endl;
    for(it=myV.begin();it !=myV.end();it++)
        cout<< *(it) <<endl; // it 사용 결과 
    cout<<"------------it X" <<endl;
    for(int k=0; k< myV.size();k++)
        cout << myV[k]<<endl;//it 없을떄


    list<int> myL;
    myL.push_front(100);
    myL.push_front(110);
    myL.push_front(120);
    myL.push_front(130);
    myL.push_front(140);
cout<< "-------------List start"<< endl;
    cout <<"List Size :  "<<myL.size() << endl;
    cout<<myL.front() <<endl;
    cout <<vS2(myL)<<endl;
        // 벡터,리스트 사용해보기, 책 따라 쳐보기
    return EXIT_SUCCESS;
}
