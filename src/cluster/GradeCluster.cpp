#include <iostream>
#include <vector>

using namespace std;

/// @brief Clusters a vector of grades in groups of 10
/// @param grades A vector which contains grades in the range 0 - 100 inclusive
/// @return A vector containing the grades in clusters of 10
vector<int> clusterGrades(vector<int> grades)
{
    vector<int> cluster(11);

    for (int grade : grades)
    {
        if (grade < 10)
            cluster[0]++;

        else if (grade < 20)
            cluster[1]++;

        else if (grade < 30)
            cluster[2]++;

        else if (grade < 40)
            cluster[3]++;
        
        else if (grade < 50)
            cluster[4]++;

        else if (grade < 60)
            cluster[5]++;

        else if (grade < 70)
            cluster[6]++;

        else if (grade < 80)
            cluster[7]++;

        else if (grade < 90)
            cluster[8]++;
        
        else if (grade < 100)
            cluster[9]++;
        
        else 
            cluster[10]++;
    }

    return cluster;
}

int main()
{
    vector<int> testGrades = {42, 65, 95, 100, 39, 67, 95, 76, 88, 76, 83, 92, 76, 93};
    vector<int> clusteredGrades = clusterGrades(testGrades);

    for (int count : clusteredGrades)
    {
        cout << count << " ";
    }

    cout << endl;

    return 0;
}