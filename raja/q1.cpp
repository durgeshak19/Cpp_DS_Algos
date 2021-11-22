    #include<bits/stdc++.h>
    using namespace std;

    string reverseString(string arr) {

        vector<string> v ;
        int n = arr.size();
        int j=0;
        string str ="";
        for(int i=0;i<n;i++){
            str = "";
            if(arr[i] == '.'){
                for(int k =j;k<i;k++)
                    str+= arr[k];
            v.push_back(str);
            j=i+1;
            }
        }

        reverse(v.begin(),v.end());
        str = "";
        for(int i=0;i<v.size();i++){
            // cout<<v[i];
            str+=v[i];
            str+='.';
        }
        return str;
    }

    int main(){
        string str = "i.like.this.program.very.much";
        cout<<reverseString(str);
    }