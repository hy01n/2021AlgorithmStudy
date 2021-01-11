#include <string>
#include <vector>

using namespace std;

int Hash(vector<string> p, vector<string> c);

string solution(vector<string> participant, vector<string> completion) {
    int index = Hash(participant, completion);
    
    string answer = participant.at(index);
    return answer;
}
int Hash(vector<string> p, vector<string> c)
{
    for(int i=0;i<p.size();i++)
    {
        for(int j=0;j<c.size();j++)
        {
            if(p[i]==c[j])
            {
                c[j]="0";
                break;
            }
            if(j==(c.size()-1))
            {
                if(p[i]!=c[j])
                return i;
            }
        }
    }
}