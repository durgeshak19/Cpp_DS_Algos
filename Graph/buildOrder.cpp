#include<bits/stdc++.h>
using namespace std;

class Project
{
    vector<Project> children ; 
    map<string,Project> mp;
    string name;
    int dependencies = 0;

    public:

    Project(string str) : name(str){}

    string getName()
    {
        return this->name;
    }
    void addNeigbour(Project node)
    {
        if(mp.find(getName()) == mp.end())
        {
            children[]
        }
    }
};