
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int i = 1, a = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n - i)
        {
            cout << " ";
            j++;
        }
        int k = 1;
        while (k <= i)
        {
            cout << k;
            k++;
        }
        a=k-2;
        int l=2;
        while (l<=i)
        {
            /* code */
            cout<<a;
            a--;
            l++;
        }
        cout << endl;
        i++;
    }
    return 0;
}