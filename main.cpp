//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
//------------------------------

// Put the assignment code here
class Quaternion {

  public: double h, i, j, k;

    Quaternion (double p, double q, double r, double s)
    {
      h=p;
      i=q;
      j=r;
      k=s;
    }

    bool operator == (const Quaternion p){

      if ((p->h==this->h) && p->i==this->i) && (p->j==this->j) && p->k==this->k))

      return true;
      return false;
    }

    Quaternion operator+(const Quaternion p)

    {
      Quaternion r;

      r.h=p.h+this->h;
      r.i=p.i+this->i;
      r.j=p.j+this->j;
      r.k=p.k+this->k;
      return r;
    }

    Quaternion operator - (const Quaternion p)
    {
      Quaternion r;
      
      r.h=p.h-this->h;
      r.i=p.i-this->i;
      r.j=p.j-this->j;
      r.k=p.k-this->k;
      return r;
    }

    Quaternion operator * (double s)
    {
      Quaternion p;
      p.h=s* this->h;
      p.i=s* this->i;
      p.j=s* this->j;
      p.k=s* this->k;
      return p;
    }
};


//------------------------------
//   DO NOT MODIFY TEST CASES
//------------------------------
TEST_CASE( "Assignment" ) {
    SECTION( "q1" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        REQUIRE( q == p );
    }
    SECTION( "q2" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q + p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{0.0, 0.0, 0.0, 0.0};
        REQUIRE( (q - p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q * 2.0) == r );
    }
}
//------------------------------