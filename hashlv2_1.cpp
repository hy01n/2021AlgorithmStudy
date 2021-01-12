#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool solution(vector<string> phone_book) {
    sort(phone_book.begin(),phone_book.end());
    for(int i=0;i<phone_book.size()-1;i++)
    {
        for(int j=i+1;j<phone_book.size();j++)
        {
            if(phone_book[i].compare(phone_book[j].substr(0,phone_book[i].size()))==0)
            {
                return false;
            }
        }
    }
    bool answer = true;
    return answer;
}