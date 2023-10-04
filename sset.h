#ifndef SSET_H
#define SSET_H

#include <QDebug>

namespace SSET //Stefano Sala Electronic Toolkit
{
class SSET_c //qui _c sta per classe...
{
public:
    SSET_c(int _a = 3, int _b = 6) :
    a {_a},
    b {_b}
    {};
    ~SSET_c() {};

    /*<######################################>*/
    int get_a(void)
    { return a;}

    void set_a(int _a)
    { a = _a;}

    /*<######################################>*/
    int get_b(void)
    { return b;}

    void set_b(int _b)
    { b = _b;}

private:
int a;
int b;
};
} /* namespace SSET */

#endif /* SSET_H */
