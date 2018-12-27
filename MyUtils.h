#pragma once

class A
{
  public:
    void work();
};

class B
{
  public:
    void work();
};

template <class T>
class WorkClass
{
  public:
    void func();

  private:
    T inst;
};

template <class T>
void WorkClass<T>::func()
{
    this->inst.work();
};