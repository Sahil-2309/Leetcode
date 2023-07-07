class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int,char>> vec;
        map<char,int> hash;
        string p;
           
        for(auto character:s){
            hash[character]++;
        }
  
//  sort(hash.begin(), hash.end(), cmp);
        for(auto character:hash){
            vec.push_back({make_pair(character.second,character.first)});
        }
sort(vec.begin(),vec.end(),greater<>());
for(auto v: vec){
    int i=0;
    while(i<v.first){
        p+=v.second;
        i++;
    }
    cout<<v.first<<" "<<v.second<<endl;
}
     
        return p;        
    }
};