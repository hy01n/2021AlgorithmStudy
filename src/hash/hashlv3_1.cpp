#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;
bool cmp(const pair<string,int>& a,const pair<string,int>& b)
{
    return a.second > b.second;
}

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
	vector<int> value;
	vector<int> answervalue;
    vector<string> Sgenres(genres);
    multimap <string,int> hashmap;
    map <string,int> shashmap;
    for(int i=0;i<genres.size();i++)
    {
        hashmap.insert(pair(genres[i],plays[i]));
    }
  
    sort(Sgenres.begin(),Sgenres.end());
    Sgenres.erase(unique(Sgenres.begin(),Sgenres.end()),Sgenres.end());
    multimap<string,int>::iterator iter;
    for(int i=0;i<Sgenres.size();i++)
    {
        int sum=0;
        for(iter=hashmap.lower_bound(Sgenres[i]);iter!=hashmap.upper_bound(Sgenres[i]);iter++)
        {
           sum+=(iter->second);
        }
        shashmap[Sgenres[i]]=sum;
    }
    vector<pair<string,int>> vec(shashmap.begin(), shashmap.end());
    sort(vec.begin(),vec.end(),cmp);
    for(int i=0;i<Sgenres.size();i++)
    {
        int count=0;
        for(iter=hashmap.lower_bound(vec[i]->first);iter!=hashmap.upper_bound(vec[i]->first);iter++)
        {
           if(count==2)
		   {
			   break;
		   }
			answervalue.push_back(iter->second);
			count++;
        }
        
    }
	for(int i=0;i<answervalue.size();i++)
	{
		answer.push_back(find(answervalue.begin(),answervalue.end(),answervalue[i]));
	}
    return answer;
}