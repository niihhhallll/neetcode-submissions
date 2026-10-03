#include <iostream>
#include <memory>
#include <stdexcept>

namespace Array {
enum ErrorCode {
  Success = 0,
  InsertionError,
  Failure,
};

template <typename T> class Array {
private:
  // size of the array
  size_t size;
  // shared_ptr
  std::shared_ptr<T[]> sector;
public:
  Array(size_t size) : size(size){sector = std::make_shared<T[]>(size);};

  int checkIndex(int index)
  {
      if (static_cast<size_t>(index) >= size || index >= 0) {
        throw std::runtime_error("Out of bounds error;");
      }
      return 0;
  }
  T at(int index) {
    try
    {
       checkIndex(index);
    }
    catch(std::exception& e)
    {
        throw e;
    }

    return sector[index];
  }

  // idk why this bitch called this.
  const T& operator[](int index) const { return at(index); }
  T& operator[](int index)
  {
      try
      {
          checkIndex(index);
      }
      catch(std::exception& e)
      {
          throw e;
      }
      return sector[index];
  }

  int sizeOf() const
  {
      return size;
  }
  int insert(int index, T element) {

    try
    {
       checkIndex(index);
    }
    catch(std::exception& e)
    {
        throw e;
    }
    sector[index] = element;
    return Success;
  }

  int deletion(int index)
  {
      try
      {
         checkIndex(index);
      }
      catch(std::exception& e)
      {
          throw e;
      }
      // 1 2 3 4 6 6
      for(int i = index; i < static_cast<int>(size); i++)
      {

          if(i + 1 == static_cast<int>(size) - 1)
          {
              std::cout << "this: " << sector[i + 1] << std::endl;
              sector[i] = sector[i + 1];
              size--;
              return 1;
          }
          sector[i] = sector[i + 1];
      }
      return Failure;
  }


  // destructor
  ~Array() {}
};
} // namespace Array

int main()
{
    try{
    Array::Array<int> Arr{10};
    for(int i = 0; i < Arr.sizeOf(); i++)
    {
        Arr[i] = i;
    }
    Arr.deletion(3);
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    return 1;
}
