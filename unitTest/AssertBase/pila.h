#include <stack>

template <class T>
class myStack
{
protected:
  std::stack<T> st;

public:
  void push(T value)
  {
    st.push(value);
  }

  void pop()
  {
    st.pop();
  }

  unsigned int size()
  {
    return st.size();
  }

};
