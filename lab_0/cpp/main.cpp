#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{

    vector<int> v;
    int n;
    int i = 0;
    ifstream myfile("C:\\Users\\Nikita\\Documents\\labaEvs\\OS\\lab_0\\cpp\\data.txt");
    for (string a; getline(myfile, a); i++)
    {
        n = atoi(a.c_str());
        if(n > 0 && n < 32767)
        {
            v.push_back(n);
            sort(v.begin(), v.end());
            cout <<"Message "<< v[0] << "-" << v[v.size()-1];
            int b = 0;
            for(int k = v[0]; k <= v[v.size()-1]; k++)
            {
                if(find(v.begin(), v.end(),k) == v.end())
                {
                   b++;
                   if(b == 1)
                   {
                     cout<< " net paketikov";
                   }
                     cout<<" " << k;
                }
            }
            if(b == 0)
            {
                cout<< " cool";
            }
           cout<<endl;
        }
     }

    return 0;
}
