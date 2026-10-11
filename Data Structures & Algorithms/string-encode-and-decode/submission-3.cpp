class Solution {
public:

    string encode(vector<string>& strs) {
        string n;

        for(const string& s : strs){
            n.append(to_string(s.size()));
            n.append("#");
            n.append(s);
        }
        cout << n << endl;
        return n;
    }

    vector<string> decode(string s) {
        vector<string> v;
        string num;

        for(int i = 0; i < s.size(); i++){

            if(s[i] == '#'){
            
                int w = stoi(num);
                
                v.push_back(s.substr(i + 1 , w));
                i += w;
                num = "";
            } else {
                num.push_back(s[i]);
            }
        }



        return v;
    }
};
