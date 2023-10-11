#ifndef SSET_H
#define SSET_H

#include <QVector>
#include <QDebug>

//SSTT chiedere come e se ha senso usare così i namespace...
namespace SSET_NS //Stefano Sala Electronic Toolkit (NameSpace)
{
class SSET
{
public:
    SSET(float x = 1.2f, float y = 2.4f, float z = 3.6f) :
    m_vector{x,y,z} {};
    ~SSET() {};

    int   get_a(void);
    void  set_a(int _a);
    int   get_b(void);
    void  set_b(int _b);
    float get_c(void);
    void  set_c(float _c);

private:
QVector<float> m_vector{3, 0.0f};
int   a{1};
int   b{2};
float c{3.5};
};
} /* namespace SSET_NS */

#endif /* SSET_H */
