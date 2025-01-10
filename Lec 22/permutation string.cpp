class Solution {
private:
    bool isequal(int a[26],int b[26])
    {
        for(int i=0; i<26; i++)
        {
            if(a[i] != b[i])
                return 0;
        }
        return 1;
    }

public:
    bool checkInclusion(string s1, string s2) 
    {
        int count1[26]={0};
        int index;
        for(int i=0; i<s1.length(); i++)
        {
            index= s1[i]-'a';
            count1[index]++;
        }

        int windowsize= s1.length();
        int i=0;
        int count2[26]={0};

        while(i<windowsize && i<s2.length())
        {
            index= s2[i] - 'a';
            count2[index]++;
            i++;
        }

        if(isequal(count1,count2))
        {
            return 1;
        }

        while(i<s2.length())
        {
            char newchar= s2[i];
            index= newchar - 'a';
            count2[index]++;

            char oldchar= s2[i-windowsize];
            index= oldchar - 'a';
            count2[index]--;

            if(isequal(count1,count2))
            {
                return 1;
            }

            i++;
        }

        return 0;
    }
};