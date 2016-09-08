#ifndef MATRIX_TEST_H_INCLUDED
#define MATRIX_TEST_H_INCLUDED

#include "Matrix.h"
#include <fstream>
#include <sstream>
#include <cxxtest/TestSuite.h>

class MatrixTestSuite : public CxxTest::TestSuite
{
 public:
  void a_matrix_3by2( void )
  {
    // [ 1 3 5 ]
    Matrix m;               // [ 0 2 0 ]
    std::stringstream s("  [ 1 3 5 ; 0 2 0 ]");
    s >> m;

  }

  void init_matrix( Matrix& m, const char* file )
  {
    std::stringstream stream( file );
    stream >> m;
  }


  void testIndexOperator ( )
    {
      Matrix a;
      std::stringstream s("  [ 1 3 5 ; 0 2 0 ]");

      std::cout << "feeding .." << std::endl;
      s >> a;

      // Matrix b(3,3);
      std::stringstream s2("[ 1 2 -3 ; 5 6 7 ] ");
      s2 >> a;

      // Matrix b(3,3);

      a[0][0] = 1;
      // a[2][2] = 2;

      // b[0][0] = 1;
      // b[2][2] = 2;
      Matrix a2(3,3);
      Matrix b(3,3);

      a2[0][0] = 1;
      a2[2][2] = 2;

      b[0][0] = 1;
      b[2][2] = 2;

      std::cout << a << std::endl;
      //std::cout << "a+a=" << (a+b) << std::endl;

      std::cout << a  << std::endl;
      // std::cout << "a+a=" <<  (a+b) << std::endl;

//        Matrix m( 2, 2 );
//        TS_ASSERT( m[ 0 ][ 1 ] == 0 );
//
//        m = a_matrix_3by2();
//        TS_ASSERT( m[ 0 ][ 0 ] == 1 );
//
//        init_matrix(m, "  [ 1 3 5 ; 0 2 1 ]");
//        TS_ASSERT( m[ 0 ][ 0 ] == 1 );
//
//        std::stringstream ss;
//        ss << m;
//        ss >> m;
//        TS_ASSERT( m[ 0 ][ 0 ] == 1 );
    }



    void testAssignmentOperator( ) 
    {

    }
};

#endif

