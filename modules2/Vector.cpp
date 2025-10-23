export module Vector;
#include <iostream>
using namespace std;
export class Vector {
public:
    Vector(int s);
    double& operator[](int i);
    const double& operator[](int i) const;  // const version for const objects
    int size() const;                        // marked const!
private:
    double *elem;
    int sz;
};

Vector::Vector(int s)
    :elem{new double[s]}, sz{s}
{
    using namespace  std;
    cout << " using namespace std \n";
}

double& Vector::operator[](int i)
{
    return elem[i];
}

const double& Vector::operator[](int i) const  // const version -> this method cannot modify the data members
{
    return elem[i];
}

int Vector::size() const  // marked const!
{
    return sz;
}

export bool operator==(const Vector& v1, const Vector& v2)
{
    if (v1.size() != v2.size())
        return false;
    for (int i = 0; i < v1.size(); ++i)
        if (v1[i] != v2[i])
            return false;
    return true;
}
