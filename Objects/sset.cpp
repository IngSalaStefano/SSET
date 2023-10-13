#include "sset.h"

namespace sset
{

SSET::SSET(float x, float y, float z) :
    m_vector{x,y,z},
    a{0},
    b{0},
    c{0.0f}
{

};

SSET::~SSET() {};

int SSET::get_a(void) const
{ return a;}

void SSET::set_a(int _a)
{ a = _a;}

int SSET::get_b(void) const
{ return b;}

void SSET::set_b(int _b)
{ b = _b;}

float SSET::get_c(void) const
{ return c;}

void SSET::set_c(float _c)
{ c = _c;}

} /* namespace SSET_NS */
