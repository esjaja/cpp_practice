#include<iostream>

template<class T>
using ExecFunc = void (*) (T&);

template<class T>
class Obj {
    public:
        Obj(T x): val(x), func(nullptr) {}

        void doStuff() {
            func(val);
        }

        void setExecFunc(ExecFunc<T> someFunc) {
            func = someFunc;
        }

        T getVal() {
            return val;
        }

    private:
        T val;
        ExecFunc<T> func;
};

template <class T, int n>
void addN(T &num) {
    std::cout << "add " << n << " to " << num << std::endl;
    num = num + n;
}

template <class T>
void square(T &num) {
    num *= num;
}

int main() {
    Obj<int> obj(5.5);
    obj.setExecFunc(addN<int,10>);
    obj.doStuff();
    std::cout << obj.getVal() << std::endl;
    obj.setExecFunc(square);
    obj.doStuff();
    std::cout << obj.getVal() << std::endl;
}