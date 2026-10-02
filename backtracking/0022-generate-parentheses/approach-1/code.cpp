class Solution {
public:
    const unordered_set<string>& gen(int n,unordered_map<int,unordered_set<string>>&cache) {
        if(n==1) {cache[1]={"()"}; return cache[1];}
        if(cache.find(n)!=cache.end())return cache[n];
        unordered_set<string>&res=cache[n];
        for(const auto&c:gen(n-1,cache))res.insert("("+c+")");
        for(int i=1;i<=(n/2);i++){
            const auto& res1=gen(n-i,cache);
            const auto& res2=gen(i,cache);
            for(const auto&r1:res1) for(const auto&r2:res2){
                res.insert(r1+r2);
                res.insert(r2+r1);
            }
        }
        return res;
    }
    vector<string> generateParenthesis(int n){
        unordered_map<int,unordered_set<string>>cache;
        const auto& res=gen(n,cache);
        return {res.begin(),res.end()};
    }
};
