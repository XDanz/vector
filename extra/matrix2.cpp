/// Test various stuff..
//
#include <iostream>
#include "../lab1_1.5/include/vector.h"

class Matrix2
{
 public:
  Matrix2(size_t r = 1, size_t c = 1): row(r)
  {
    for(int i = 0; i < r; i++)
      row[i] = new Vector<int>(c);
  }

  Matrix2(const Matrix2& m) { }

  ~Matrix2()
  {
    for(int i = 0; i < row.size(); i++)
      delete row[i];
  }

  Vector<int>& operator[] (size_t i)
  {
    return *row[i];
  }

  const Vector<int>& operator[](size_t i) const
  {
    return *row[i];
  }


  Matrix2 operator+(Matrix2& m)
  {
    Matrix2 m_sum(this->rows(), this->columns());

    for (int i = 0; i < this->rows(); i++)
      {
        for(int j = 0; j < this->columns(); j++)
          m_sum[i][j] = (*this)[i][j] + m[i][j];
      }

    return m_sum;
  }


  size_t rows() const {
    return row.size();
  }

  size_t columns() const  {
    return row[0]->size();
  }
 protected:
  Vector<Vector<int> *> row;

};

ostream& operator<<(const ostream& out, const Matrix2& m)
{
  for (int i = 0; i < m.rows(); i++) {
      std::cout << "[" ;

      for (int j = 0 ; j < m.columns(); j++)
        std::cout << " " << m[i][j] << " ";

      std::cout << "]" << std::endl;
    }

  return cout;
}


int
main(int argc, char** argv)
{
  Matrix2 a(3,3);
  Matrix2 b(3,3);

  a[0][0] = 1;
  a[2][2] = 2;

  b[0][0] = 1;
  b[2][2] = 2;

  std::cout << a << std::endl;
  std::cout << "a+a=" <<  (a+b) << std::endl;

}
  

