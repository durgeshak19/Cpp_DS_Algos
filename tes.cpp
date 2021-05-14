int firstNonRepeating(char* str)
{
    pair<int, int> arr[NO_OF_CHARS];
 
    for (int i = 0; str[i]; i++) {
        (arr[str[i]].first)++;
        arr[str[i]].second = i;
    }
 
    int res = INT_MAX;
    for (int i = 0; i < NO_OF_CHARS; i++)
 
        if (arr[i].first == 1)
            res = min(res, arr[i].second);
 
    return res;
}