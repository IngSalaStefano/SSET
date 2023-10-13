#ifndef SSET_H
#define SSET_H

#include <QVector>
#include <QObject>

//SSTT chiedere come e se ha senso usare così i namespace...
namespace sset //Stefano Sala Electronic Toolkit (NameSpace)
{

class SSET : public QObject
{
public:
    //SSTT i default parameter "possono stare" solo nell'header?
    explicit SSET(float x = 1.2f, float y = 2.4f, float z = 3.6f);
    ~SSET();

    int   get_a(void) const;
    void  set_a(int _a);
    int   get_b(void) const;
    void  set_b(int _b);
    float get_c(void) const;
    void  set_c(float _c);

private:
    QVector<float> m_vector;
    int   a;
    int   b;
    float c;
};

} /* namespace SSET_NS */

#endif /* SSET_H */
