class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> vt;
        string temp;
        for(int i=0;i<12;i++){
            bitset<4> hour(i);

            for(int j=0;j<60;j++){
                bitset<6> mint(j);
    if(hour.count()+mint.count()==turnedOn)
              {
             temp=to_string(i);
         string m=(j<10)?":0":":";
            m=m+to_string(j);
             vt.push_back(temp+m);
               }
           }
    }

       return vt;

    }
};
