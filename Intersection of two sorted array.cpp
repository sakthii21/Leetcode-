int i = 0;
int j = 0;
vector<int> ans;
int n = a.size();
int m = b.size();

while (i < n && j < m) {
    if (a[i] < b[j]) {
        i++;
    } else if (b[j] < a[i]) {
        j++;
    } else {
        ans.push_back(a[i]);
        i++;
        j++;
    }
}
return ans;
